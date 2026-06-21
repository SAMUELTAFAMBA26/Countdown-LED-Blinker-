int startValue = 5;   // initial value for countdown
int ledPin = 13;      // built‑in LED on most Arduino boards

// Function that blinks the LED a given number of times
void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);               // LED on for 200 ms
    digitalWrite(ledPin, LOW);
    delay(200);               // LED off for 200 ms
  }
}
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;     // copy the start value

  while (count >= 1) {        // count down to 1 inclusive
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);          // blink as many times as current count

    delay(1000);              // wait 1 second between steps
    count = count - 1;        // decrement
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // put your main code here, to run repeatedly:

}
