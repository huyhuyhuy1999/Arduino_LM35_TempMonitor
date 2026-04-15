const int lm35Pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(lm35Pin);
  float temperatureC = (adcValue * 500.0) / 1023.0;

  Serial.println(temperatureC);
  delay(1000);
}
