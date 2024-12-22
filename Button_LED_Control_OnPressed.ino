// Pin definitions
const int buttonPin = 8; // Button connected to pin 8
const int ledPin = 9;    // LED connected to pin 9

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Enable internal pull-up resistor for button
  pinMode(ledPin, OUTPUT);          // Set LED pin as output
  digitalWrite(ledPin, LOW);        // Initialize LED as OFF
}

void loop() {
  // Read button state
  int buttonState = digitalRead(buttonPin);

  // Turn LED on when button is pressed (LOW due to INPUT_PULLUP)
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // Turn LED ON
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED OFF
  }
}
