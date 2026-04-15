const int lm35Pins[3] = {A0, A1, A2};
char serialBuffer[64];

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

  sprintf(
    serialBuffer,
    "{\"A0\":%.2f,\"A1\":%.2f,\"A2\":%.2f}",
    temperatures[0],
    temperatures[1],
    temperatures[2]
  );
  Serial.println(serialBuffer);
  delay(1000);
}
