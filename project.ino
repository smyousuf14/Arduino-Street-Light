// Constants
const int RED_LIGHT_PIN = 12;
const int GREEN_LIGHT_PIN = 13;

void setup() {
  // Initialize digital pin LED_BUILTIN as an output
  pinMode(RED_LIGHT_PIN, OUTPUT);
  pinMode(GREEN_LIGHT_PIN, OUTPUT);

}

void loop() {

  // Red light blinks
  digitalWrite(RED_LIGHT_PIN, HIGH);
  digitalWrite(GREEN_LIGHT_PIN, LOW);
  delay(5000);
  digitalWrite(RED_LIGHT_PIN, LOW);
  digitalWrite(GREEN_LIGHT_PIN, HIGH);
  delay(5000);

}
