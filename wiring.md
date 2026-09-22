# Wiring Overview

The exact final pin map should match the physical prototype.

```text
Solar Panel
   |
   +----> Voltage sensing --> Arduino analog input
   |
   +----> Current sensing --> Arduino analog input

Arduino Nano
   |
   +---- Serial --> ESP8266
                     |
                     +---- Wi-Fi --> ThingSpeak

Arduino / driver stage
   |
   +---- Motor
   |
   +---- Vibration mechanism
```

## Sensor notes

- ACS712 output is analog and requires calibration for the exact variant.
- ZMPT101B modules require appropriate signal conditioning and calibration.
- Never connect an unknown high-voltage source directly to an MCU analog input.
- Use a proper transistor/MOSFET/driver stage for motor control rather than driving a motor directly from an MCU GPIO.
