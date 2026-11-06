#include <Arduino.h>
const byte TRIG_P = 4, ECHO_P = 5;   // pitch 
const byte TRIG_V = 6, ECHO_V = 7;  // volume
const byte BUZ = 9;
const float MIN_CM = 5, MAX_CM = 50;
const float F_LOW = 200, F_HIGH = 2000;
const float NO_HAND_CM = 60;
const unsigned long TIMEOUT_US = 40000;
float fSmooth = F_LOW, vSmooth = 0;

float readCm(byte trig, byte echo) {
  digitalWrite(trig, LOW);  delayMicroseconds(2);
  digitalWrite(trig, HIGH); delayMicroseconds(10);
  digitalWrite(trig, LOW);
  unsigned long d = pulseIn(echo, HIGH, TIMEOUT_US);
  if (d == 0) return -1;
  return d * 0.0343 / 2;
}


void sound(float freq, float vol) {        // vol from 0 to 1
  uint16_t top = (uint16_t)(2000000.0 / freq) - 1;
  ICR1  = top;                             // sets the frequency
  OCR1A = (uint16_t)(top * 0.5 * vol);     // sets the duty cycle (volume)
}

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_P, OUTPUT); pinMode(ECHO_P, INPUT);
  pinMode(TRIG_V, OUTPUT); pinMode(ECHO_V, INPUT);
  pinMode(BUZ, OUTPUT);

  // --- Timer1 setup: make D9 output a PWM wave with adjustable frequency ---
  TCCR1A = 0;                    // start from a clean slate
  TCCR1B = 0;

  TCCR1A |= _BV(WGM11);          // mode 14 (part 1): fast PWM, top = ICR1
  TCCR1B |= _BV(WGM12) | _BV(WGM13);   // mode 14 (part 2)
  TCCR1A |= _BV(COM1A1);         // connect the PWM to pin D9
  TCCR1B |= _BV(CS11);           // tick speed: 16 MHz / 8 = 2 MHz

  ICR1  = 1999;                  // top value: sets the frequency (1 kHz at start)
  OCR1A = 0;                     // switch-off point: sets the volume (silent at start)
}

void loop() {
  float dp = readCm(TRIG_P, ECHO_P);
  delay(20);                               // let the echo die out
  float dv = readCm(TRIG_V, ECHO_V);
  delay(20);

  Serial.print(dp); Serial.print("  "); Serial.println(dv);

  // No hand on either sensor = silence
  if (dp < 0 || dv < 0 || dp > NO_HAND_CM || dv > NO_HAND_CM) {
    OCR1A = 0;
    return;
  }

  dp = constrain(dp, MIN_CM, MAX_CM);
  dv = constrain(dv, MIN_CM, MAX_CM);

  // Closer to the pitch sensor = higher note
  float freq = F_HIGH - (dp - MIN_CM) / (MAX_CM - MIN_CM) * (F_HIGH - F_LOW);
  // Closer to the volume sensor = louder
  float vol  = 1.0 - (dv - MIN_CM) / (MAX_CM - MIN_CM);

  // Smoothing
  fSmooth = 0.7 * fSmooth + 0.3 * freq;
  vSmooth = 0.7 * vSmooth + 0.3 * vol;

  sound(fSmooth, vSmooth);
}