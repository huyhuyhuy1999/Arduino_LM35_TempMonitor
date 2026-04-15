const int lm35Pins[3] = {A0, A1, A2};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValues[3];
  float temperatures[3];

  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(lm35Pins[i]);
    temperatures[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  Serial.print("{\"A0\":");
  Serial.print(temperatures[0]);
  Serial.print(",\"A1\":");
  Serial.print(temperatures[1]);
  Serial.print(",\"A2\":");
  Serial.print(temperatures[2]);
  Serial.println("}");
  delay(1000);
}
