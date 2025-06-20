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

## 📌 Components Used

| Component | Description | Notes |
|------------|-------------|-------|
| **Arduino UNO** | Microcontroller | Central control unit |
| **TMP36 Temperature Sensor** | Analog temperature sensor | Connected to A0 |
| **16×2 LCD Display (HD44780, Parallel)** | Display for temperature and cooling status | RS, RW (GND), E, DB4-DB7 connected |
| **Peltier Module** | Thermoelectric cooler | Driven via MOSFET |
| **DC Fan** | Cooling fan | Driven via MOSFET |
| **MOSFET (x2)** | N-channel MOSFET | One for Peltier, one for Fan |
| **10k Potentiometer** | Contrast control | For LCD VO pin |
| **220Ω Resistor** | Current limiting | For LCD backlight |
| **12V Power Supply** | External supply | Powers Fan, Peltier, and Arduino (via VIN or barrel jack) |

---

## ⚡ Key Connections

| Arduino Pin | Connects To | Purpose |
|-------------|--------------|---------|
| A0 | TMP36 VOUT | Read temperature |
| D9 | Fan MOSFET Gate | Switch fan |
| D8 | Peltier MOSFET Gate | Switch Peltier |
| D12 | LCD RS | LCD command/data select |
| D11 | LCD E | LCD enable |
| D5 | LCD DB4 | LCD data 4 |
| D4 | LCD DB5 | LCD data 5 |
| D3 | LCD DB6 | LCD data 6 |
| D2 | LCD DB7 | LCD data 7 |
| 5V | LCD VCC, TMP36 VCC, Pot VCC | Power |
| GND | LCD GND, TMP36 GND, MOSFET Source, 12V PSU GND | Ground |
| Pot wiper | LCD VO | LCD contrast control |

✅ **All grounds must be tied together (Arduino, 12V PSU, MOSFET source, sensor, LCD).**
✅ **Peltier + and Fan + connect directly to 12V PSU +.**
✅ **Peltier - and Fan - connect to MOSFET Drain.**

---

## 📝 Notes

- LCD is wired in **4-bit mode** (DB4-DB7 only)
- RW is tied to **GND** (write-only mode)
- Backlight powered via 5V and current limiting resistor (220Ω)
- MOSFETs switch high-current loads safely



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
EV-Battery-Cooling-System/
├── src/
│ └── cooling_system.ino
├── circuit_diagram.png
├── README.md

## 🙌 Author
*Your Name*  
*Your contact or portfolio link (optional)*

---

## 🏁 Repository structure


