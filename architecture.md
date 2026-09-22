# Architecture

## 1. Sensing

The solar panel output is monitored using voltage and current sensing modules.

## 2. Embedded acquisition

Arduino Nano reads the sensor signals and calculates electrical quantities such as power.

## 3. IoT communication

ESP8266 provides Wi-Fi connectivity and forwards measurements to ThingSpeak.

## 4. Cloud monitoring

ThingSpeak stores and visualizes the measurements, enabling remote monitoring.

## 5. Maintenance mechanism

The project adds a waterless cleaning concept using vibration and motor actuation, intended to help remove accumulated dust from the solar panel.

## 6. Analytics

Historical measurements can be exported and analyzed to identify trends and maintenance conditions.
