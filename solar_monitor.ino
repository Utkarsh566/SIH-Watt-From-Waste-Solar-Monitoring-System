/*
 * Watt From Waste — Solar Monitoring System
 *
 * Prototype firmware structure:
 * Arduino Nano reads voltage/current sensors and sends data
 * to an ESP8266 over serial.
 *
 * IMPORTANT:
 * Sensor calibration constants must be experimentally determined
 * for the exact modules used in the final prototype.
 */

#define CURRENT_PIN A0
#define VOLTAGE_PIN A1

float readCurrent()
{
  int raw = analogRead(CURRENT_PIN);
  float voltage = raw * (5.0 / 1023.0);

  // Replace with experimentally calibrated ACS712 conversion.
  float current = (voltage - 2.5) / 0.185;
  return current;
}

float readVoltage()
{
  int raw = analogRead(VOLTAGE_PIN);
  float sensorVoltage = raw * (5.0 / 1023.0);

  // Replace with experimentally calibrated ZMPT101B scaling.
  float panelVoltage = sensorVoltage;
  return panelVoltage;
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float voltage = readVoltage();
  float current = readCurrent();
  float power = voltage * current;

  Serial.print("V=");
  Serial.print(voltage, 2);
  Serial.print(",I=");
  Serial.print(current, 2);
  Serial.print(",P=");
  Serial.println(power, 2);

  delay(5000);
}
