# Watt From Waste — Solar Monitoring System

![Project](https://img.shields.io/badge/SIH-Solar%20Monitoring-orange)
![IoT](https://img.shields.io/badge/IoT-ThingSpeak-blue)
![Microcontroller](https://img.shields.io/badge/MCU-Arduino%20Nano%20%2B%20ESP8266-green)
![Language](https://img.shields.io/badge/Language-Embedded%20C%20%2F%20Arduino-lightgrey)

## Smart India Hackathon Project

**Watt From Waste: Solar Monitoring System** is an IoT-enabled prototype for monitoring solar-panel electrical parameters and improving panel performance through a waterless cleaning mechanism.

The system follows the workflow:

**Collect → Transmit → Store → Display → Alert → Improve**

### Core idea

The prototype monitors solar-panel voltage and current, transmits the measurements through Wi-Fi, stores/visualizes the data using ThingSpeak, and supports a waterless panel-cleaning mechanism based on vibration and motor actuation.

## Key Features

- Real-time solar voltage monitoring
- Real-time solar current monitoring
- IoT transmission using ESP8266 Wi-Fi
- ThingSpeak cloud visualization
- Solar performance analytics
- Alert/monitoring workflow
- Waterless solar-panel cleaning using vibration + motor mechanism
- Modular Arduino/ESP8266 architecture

## System Architecture

```text
             SOLAR PANEL
                  |
        +---------+---------+
        |                   |
   Voltage Sensor       Current Sensor
     ZMPT101B              ACS712
        |                   |
        +---------+---------+
                  |
             Arduino Nano
                  |
                  | Serial
                  v
             ESP8266 Wi-Fi
                  |
                  v
             ThingSpeak
                  |
        +---------+---------+
        |                   |
     Dashboard           Analytics
        |                   |
        +---------+---------+
                  |
              Alerts
                  |
                  v
       Cleaning / Maintenance
                  |
          Vibration + Motor
                  |
                  v
        WATERLESS CLEANING
```

## Hardware

| Component | Role |
|---|---|
| Solar panel | Energy source / monitored system |
| Arduino Nano | Sensor acquisition and control |
| ESP8266 | Wi-Fi / IoT communication |
| ACS712 | Current sensing |
| ZMPT101B | Voltage sensing |
| Motor | Cleaning mechanism |
| Vibration mechanism | Waterless dust-removal mechanism |
| Power supply | Circuit power |

> **Hardware safety:** AC-voltage sensing and motor drivers must be isolated and wired according to the exact module ratings. Do not connect mains voltage to a low-voltage prototype directly.

## Software / IoT Stack

- Embedded C / Arduino IDE
- Arduino Nano
- ESP8266
- ThingSpeak
- Wi-Fi
- Cloud data visualization

## Data Flow

1. Solar panel produces electrical output.
2. Voltage and current sensors measure electrical parameters.
3. Arduino Nano acquires the sensor readings.
4. ESP8266 transmits the readings through Wi-Fi.
5. ThingSpeak stores and visualizes the data.
6. Monitoring/alert logic identifies maintenance conditions.
7. The cleaning mechanism can be activated to remove dust without water.

## Project Workflow

```text
             ┌──────────────┐
             │  Solar Panel │
             └──────┬───────┘
                    ↓
          ┌───────────────────┐
          │ Voltage + Current │
          │     Sensors       │
          └─────────┬─────────┘
                    ↓
             ┌────────────┐
             │ Arduino    │
             │ Nano       │
             └─────┬──────┘
                   ↓
             ┌────────────┐
             │ ESP8266    │
             │ Wi-Fi      │
             └─────┬──────┘
                   ↓
             ┌────────────┐
             │ ThingSpeak │
             └─────┬──────┘
                   ↓
       ┌───────────┴───────────┐
       ↓                       ↓
   Visualization           Analytics
                               ↓
                         Maintenance
                               ↓
                     Vibration + Motor
                               ↓
                      Waterless Cleaning
```

## Repository Structure

```text
SIH-Watt-From-Waste-Solar-Monitoring-System/
├── README.md
├── LICENSE
├── .gitignore
├── requirements.txt
│
├── firmware/
│   └── arduino_esp8266/
│       ├── solar_monitor.ino
│       └── README.md
│
├── hardware/
│   ├── block_diagram.svg
│   ├── circuit_diagram.svg
│   ├── components.md
│   └── wiring.md
│
├── iot/
│   └── thingspeak/
│       └── channel_setup.md
│
├── software/
│   ├── analytics.py
│   └── README.md
│
├── docs/
│   ├── architecture.md
│   ├── methodology.md
│   ├── project_report.md
│   └── team.md
│
├── images/
└── results/
```

## Getting Started

### 1. Firmware

Open:

```text
firmware/arduino_esp8266/solar_monitor.ino
```

Update the Wi-Fi credentials and ThingSpeak API key before uploading.

### 2. ThingSpeak

Create a ThingSpeak channel with fields for:

- Voltage
- Current
- Power

Then configure the ESP8266 code with the channel credentials.

### 3. Python analytics

Install:

```bash
pip install -r requirements.txt
```

Run:

```bash
python software/analytics.py
```

The analytics script is designed as a local demonstration and can be connected to exported ThingSpeak data.

## Team

- **Utkarsh Kumar** — Team Lead, IoT integration, hardware interfacing
- **Divya Gaikwad** — Dashboard UI/UX
- **Harshal Bhavsar** — Hardware
- **Soham Das** — Backend/Data
- **Nitish Raj** — Backend/Data
- **Aditi Gaonkar** — PPT/Presentation
- **Mentor:** Deepa Nath

## SIH Status

The project qualified for the first round of Smart India Hackathon. This repository documents the prototype and its engineering workflow.

## Future Scope

- More robust sensor calibration
- Automated cleaning based on measured performance
- Historical performance analytics
- Mobile/web dashboard
- Remote fault alerts
- Weather/environmental data integration
- Energy-yield prediction
- More advanced predictive maintenance

## License

MIT License. See `LICENSE`.
