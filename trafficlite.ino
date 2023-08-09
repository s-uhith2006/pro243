// Traffic Light Project

// Pin definitions
const int redLED = 13;
const int greenLED = 12;
const int yellowLED = 14;

// Time delay (in milliseconds) for each state
const int redDuration = 3000;     // 3 seconds for red light
const int greenDuration = 1000;   // 3 seconds for green light
const int yellowDuration = 5000;  // 1 second for yellow light

void setup() {
  // Initialize the LED pins as output
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // Traffic light sequence: Red -> Green -> Yellow
  // Red light
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(redDuration);

  // Green light
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  delay(greenDuration);

  // Yellow light
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(yellowDuration);
}
