// Test 03 (05/04/2025): This code is used to test the speed of the Roomba robot by an encoder, which will help us determine its position and direction.
// It is meant to be used along with the HC-020K encoder.

// HC-020K encoder
int encoderPin = 3;

//-------------------------------------------

volatile int count = 0;

void setup() {
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(encoderPin), interruption, RISING);
}

void loop() {

}

void interruption() {
  count++;
  Serial.println(count);
}
