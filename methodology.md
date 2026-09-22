# Methodology

### Collect
Measure panel voltage and current.

### Transmit
Send sensor measurements from Arduino Nano to ESP8266 and then through Wi-Fi.

### Store
Store the measurements in ThingSpeak.

### Display
Visualize voltage, current and calculated power.

### Alert
Use monitoring logic to identify conditions requiring attention.

### Improve
Use the waterless vibration/motor cleaning mechanism as a maintenance intervention.

## Power Calculation

For DC measurements:

```text
P = V × I
```

where:

- `P` = electrical power
- `V` = measured voltage
- `I` = measured current

Actual calibration and sensor accuracy must be determined experimentally.
