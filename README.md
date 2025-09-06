# 🌱 Smart IoT Demos

This repository contains simple **IoT hardware + firmware projects** using **ESP32 and ESP8266**, focused on automation, sensors, and smart control systems.  
These demos are designed to show practical applications of IoT in **smart irrigation, home automation, and remote monitoring**.

---

## 📂 Projects

### 1. ESP32 Soil Moisture Controlled Pump
- Reads soil moisture sensor (analog).
- Controls a water pump/relay automatically based on soil dryness.
- Status logs printed via Serial Monitor.

**Applications:** Smart irrigation, garden watering, agriculture.

---

### 2. ESP8266 Web Server (Relay Control)
- Creates its own WiFi Access Point.
- Simple web page to turn a relay (or LED) ON/OFF.
- No external router required.

**Applications:** Smart home relay/light control, retrofitting appliances.

---

### 3. ESP32 MQTT Sensor Publisher
- Reads temperature & humidity from DHT11/DHT22 sensor.
- Publishes data to an MQTT broker.
- Ready for cloud dashboard integration (Node-RED, ThingsBoard, Home Assistant, etc).

**Applications:** Remote monitoring, dashboards, automation.

---

## 🛠️ Hardware Used
- ESP32 DevKit V1
- ESP8266 NodeMCU
- Soil moisture sensor
- DHT11/DHT22 sensor
- Relay module (5V/3.3V)
- Jumper wires, breadboard

---

## 🚀 Future Additions
- PCB design files for retrofit modules.
- OTA firmware updates.
- Cloud + mobile app integration.

---

## 👤 About Me
I am an **Electrical Engineer & IoT Developer** with experience in:
- Hardware design (relays, drivers, PCB).
- Firmware development (ESP32/ESP8266, FreeRTOS, Arduino).
- Automation systems (industrial VFDs, smart energy monitoring).
- Passion for **sustainable technology** (solar + smart irrigation).

This repo serves as a **portfolio of IoT skills** for clients and collaborators.
