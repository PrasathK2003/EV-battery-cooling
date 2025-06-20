# EV-battery-cooling
EV battery Cooling using Peltier Technology with IOT Integration
# EV Battery Cooling System

An Arduino-based thermal management system for electric vehicle (EV) batteries, integrating:
- **Peltier module + fan** for active cooling
- **TMP36 temperature sensor** for real-time temperature monitoring
- **16×2 LCD (HD44780 parallel)** to display temperature and cooling system status

---

## 📌 Features
- Real-time battery temperature display on 16×2 LCD
- Automatic fan and Peltier activation based on temperature thresholds
- Cooling OFF when temperature is below the minimum setpoint
- Modular and easy to extend (e.g. for logging, wireless monitoring)

---

## 🔧 Components Used
| Component | Description |
|------------|-------------|
| Arduino UNO | Microcontroller |
| TMP36 | Temperature sensor |
| Peltier module | Thermoelectric cooler |
| 12V Fan | Active cooling fan |
| 16×2 LCD (HD44780 parallel) | Display for temp + status |
| MOSFETs | To drive fan and Peltier |
| 10k Potentiometer | LCD contrast adjust |
| Resistors (220Ω) | Backlight current limiting |
| External 12V power supply | For fan + Peltier |

---

## ⚡ Circuit Overview
### Key Connections
| Arduino | Component | Purpose |
|----------|------------|---------|
| A0 | TMP36 VOUT | Read temperature |
| D9 | MOSFET (fan gate) | Control fan |
| D8 | MOSFET (Peltier gate) | Control Peltier |
| D12 | LCD RS | LCD command/data select |
| D11 | LCD E | LCD enable |
| D5 | LCD DB4 | LCD data bit 4 |
| D4 | LCD DB5 | LCD data bit 5 |
| D3 | LCD DB6 | LCD data bit 6 |
| D2 | LCD DB7 | LCD data bit 7 |
| GND | LCD RW | Always write mode |
| 5V | LCD VCC | LCD power |
| GND | LCD GND | LCD ground |
| 5V | Pot VCC | Contrast pot power |
| GND | Pot GND | Contrast pot ground |
| Pot wiper | LCD VO | LCD contrast control |
| 5V (via 220Ω) | LCD LED+ | Backlight +
| GND | LCD LED- | Backlight -

✅ All grounds (Arduino, MOSFET, 12V PSU) must be connected.

---

## 💻 Arduino Code

The Arduino sketch is located in:
This code:
- Reads temperature from TMP36 sensor
- Displays temperature + fan/Peltier status on LCD
- Turns fan/Peltier ON or OFF based on set thresholds

---

## 🖥 Example Display
Temp: 35°C
Fan:ON Pel:OFF
OVERHEAT 45°C
Fan:ON Pel:ON
COOL 28°C
Fan:OFF Pel:OFF

---

## 📝 How to Use
1. Connect all components as per wiring diagram (`circuit_diagram.png` or `circuit_diagram.pdf` if included).
2. Upload `src/cooling_system.ino` to Arduino using Arduino IDE.
3. Power up the system (Arduino + external 12V supply for Peltier/fan).
4. Monitor the LCD for temperature + cooling state.

---

## 📄 License
This project is licensed under the MIT License — feel free to use, modify, and share.

---

## 🙌 Author
*Your Name*  
*Your contact or portfolio link (optional)*

---

## 🏁 Repository structure


