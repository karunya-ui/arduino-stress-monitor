
/*
  Auto-generated Arduino Stress Simulation
  Dynamic LED blink based on ML model stress probability
  Higher stress → faster blinking
  Predictions generated from WESAD dataset
*/

const int ledPin = 13;

// Blink delay array (ms)
int blinkDelays[] = {730, 530, 380, 310};
int numPredictions = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Dynamic Stress Simulation Started");
}

void loop() {
  for (int i = 0; i < numPredictions; i++) {
    int delayTime = blinkDelays[i];

    digitalWrite(ledPin, HIGH);  // LED ON
    delay(delayTime / 2);
    digitalWrite(ledPin, LOW);   // LED OFF
    delay(delayTime / 2);

    Serial.print("Prediction ");
    Serial.print(i);
    Serial.print(": Blink delay = ");
    Serial.println(delayTime);
  }
  // Repeat sequence
}
