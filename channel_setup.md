# ThingSpeak Setup

Create a ThingSpeak channel with fields such as:

- Field 1: Voltage
- Field 2: Current
- Field 3: Power

## ESP8266 workflow

```text
Sensor reading
      ↓
Arduino Nano
      ↓
Serial data
      ↓
ESP8266
      ↓
Wi-Fi
      ↓
ThingSpeak HTTP update
      ↓
Cloud chart
```

Keep the ThingSpeak API key private. Do not commit real API keys to GitHub.

For a public repository, use placeholders such as:

```cpp
const char* WIFI_SSID = "YOUR_WIFI_SSID";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";
const char* THINGSPEAK_API_KEY = "YOUR_API_KEY";
```
