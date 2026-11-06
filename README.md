# 🎶 PROJECT RESURRECTION — AIR THEREMIN

### ✨ A touchless musical instrument, powered by curiosity and a little bit of electricity.

<p align="center">
  <strong>IEEE Student Branch · University of Boumerdes (IEEE SBUB)</strong>
  <br>
  <em>Team sʎnth · First-Year Projects Exhibition · 2026</em>
</p>

---

## 🎧 What if you could play music without touching an instrument?

Meet **Air Theremin**!

Inspired by the original Theremin, invented by Russian physicist Léon Theremin in 1928, our project brings a classic idea into a modern electronic form.

Using two ultrasonic sensors, an Arduino Uno, and nothing but hand movements, we built an electronic musical instrument that lets you control sound through the air.

No keys. No strings. No physical contact.

Just your hands, some electronics, and music. 🎵

---

## ✨ The magic behind it

Air Theremin detects the distance between your hands and two ultrasonic sensors, translating those movements into sound.

| Your movement | What happens |
|---|---|
| ✋ Right hand | Controls the pitch (frequency) |
| 🤚 Left hand | Controls the volume (loudness) |

Move your hands closer or farther away, and watch the sound change!

### 🔬 How does it work?

1. The two HC-SR04 ultrasonic sensors measure hand distances.
2. The Arduino Uno receives and processes these measurements.
3. The right-hand sensor determines the sound frequency.
4. The left-hand sensor determines the volume.
5. Arduino Timer1 generates a PWM signal to produce the sound.

A little bit of physics, a little bit of programming, and a whole lot of experimentation.

---

## 🛠️ From components to an instrument

Building the Air Theremin was not just about connecting components.

Our development process involved several stages:

1. Setting up the Arduino Uno and Arduino IDE.
2. Experimenting with LEDs and digital inputs.
3. Exploring analog readings and PWM using an LDR.
4. Integrating the ultrasonic sensors.
5. Generating sound using Arduino Timer1.
6. Assembling the complete circuit.
7. Testing, troubleshooting, soldering and painting the final prototype.

### 📸 Inside the workshop

<!-- Add your prototype and circuit photographs here -->

*From the first prototype to the final assembly.*

---

## 🎥 See it in action!

The best way to understand an Air Theremin is to see one being played.

**▶️ [WATCH THE AIR THEREMIN DEMONSTRATION](ADD_YOUR_GOOGLE_DRIVE_LINK_HERE)**

Our testing included experimenting with different hand positions and attempting to reproduce recognizable melodies, including *Twinkle, Twinkle, Little Star*.

---

## 🏁 Project status

<details>
<summary><strong>✅ Development checklist — 100% completed</strong></summary>

- [x] Arduino setup and programming
- [x] Ultrasonic hand detection
- [x] Pitch control
- [x] Volume control
- [x] Speaker output
- [x] Complete circuit assembly
- [x] Soldering
- [x] Painting
- [x] Functional testing

</details>

### ⚠️ Challenges we encountered

Engineering rarely goes exactly as planned.

Some of our challenges included:

- **Sensor timeouts:** Our initial timeout setting prevented reliable ultrasonic readings.
- **Sensor interference:** Operating two ultrasonic sensors simultaneously affected measurement accuracy.
- **Sound quality:** The speaker's output was not always as clear as we wanted.

We experimented with sensor positioning, adjusted the code, and tested different configurations to improve the results.

### 🚀 What's next?

There is always room to make things better!

Some improvements we'd love to explore:

- 🎨 An LED bar displaying the notes being played.
- 🎹 Different musical scales, including major and pentatonic.
- 🎵 A vibrato effect for more expressive sounds.
- 📡 Improved sensor accuracy and stability.
- 🔊 Better speaker sound quality.

---

## 👥 The people behind the project

**Team sʎnth**

A project built through collaboration, experimentation, and shared curiosity.

| Team member | Contribution |
|---|---|
| Tesnim Azzeb | Circuit wiring, soldering, code modification, debugging, testing and assembly |
| Sidra Chalouche | Circuit wiring, soldering, assembly and documentation scripting |
| Wissem Zaimeddine | Circuit wiring, soldering, assembly and LaTeX report typesetting |
| Imene El Batoul Abdaoui | Circuit wiring, soldering, painting and assembly |
| Anaïs Yakoubi | Circuit wiring, soldering, assembly and functional testing |
| Amina Nefida | Circuit wiring, soldering, painting and assembly |

### 💙 Special thanks

A project is never built entirely alone.

- **Youcef Harmouni** — Our mentor, for his guidance, the building guide and PCB layout.
- **Amine Khammar** — For the exterior design and painting.

And to everyone who supported us throughout this experience: thank you!

---

## 📚 References & Resources

For transparency, here are some of the resources involved in our work:

- Air Theremin Build Guide — Youcef Harmouni, IEEE Student Branch, Boumerdes University.
- [Arduino Uno Documentation](https://docs.arduino.cc/hardware/uno-rev3/)
- [Arduino Language Reference](https://docs.arduino.cc/language-reference/)
- [Arduino IDE](https://www.arduino.cc/en/software/)
- [Tinkercad](https://www.tinkercad.com/)
- [Overleaf](https://www.overleaf.com/)

---

<p align="center">
  <strong>⚡ PROJECT RESURRECTION · IEEE SBUB · 2026 ⚡</strong>
  <br>
  <em>We didn't just build an instrument. We brought an idea back to life.</em>
  <br><br>
  🎶 Made with curiosity, electronics, and teamwork.
</p>
