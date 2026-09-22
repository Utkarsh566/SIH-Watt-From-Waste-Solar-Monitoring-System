# Firmware

This folder contains the firmware structure for the solar monitoring prototype.

## Controller architecture

- Arduino Nano: sensor acquisition/control
- ESP8266: Wi-Fi and ThingSpeak communication

## Important

The exact analog calibration constants depend on the physical sensor modules and the final prototype wiring. Validate the sensor output experimentally before using the measurements as calibrated engineering values.
