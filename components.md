# Hardware Components

## Monitoring

### Solar panel
Provides the electrical output being monitored.

### ACS712
Used for current measurement. The exact ACS712 variant determines its sensitivity and calibration.

### ZMPT101B
Used for voltage measurement. Calibration depends on the module and signal-conditioning setup.

### Arduino Nano
Acquires the analog sensor measurements and performs local processing/control.

### ESP8266
Provides Wi-Fi connectivity and sends measurements to ThingSpeak.

## Cleaning

### Motor
Drives the mechanical cleaning mechanism.

### Vibration mechanism
Produces vibration to help remove dust without requiring water.

## Safety

For any voltage higher than the safe low-voltage range of the prototype, use appropriate isolation, fusing, enclosures, and qualified supervision.
