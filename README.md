# 🔴 Laser Security System

An Arduino-based intruder detection system using a laser beam and photoresistor. When the laser beam is interrupted, the system triggers a buzzer alarm and LED alert.

## 🎯 How It Works

1. A laser module shines a beam continuously onto a photoresistor (LDR).
2. The Arduino reads the LDR value on an analog pin.
3. If the beam is broken (someone walks through), the LDR value drops.
4. The Arduino triggers a buzzer + LED alarm instantly.

## 🧰 Components

- Arduino UNO
- Laser module (KY-008)
- Photoresistor (LDR) module or bare LDR + 10kΩ resistor
- Active buzzer
- LED + 220Ω resistor
- Jumper wires
- Breadboard

## 🔌 Wiring

| Component | Arduino Pin |
|-----------|-------------|
| Laser VCC | 5V |
| Laser GND | GND |
| LDR signal | A0 |
| Buzzer + | D8 |
| LED + | D9 |

## 💻 Code

See `laser_security.ino`

## 📜 License

MIT