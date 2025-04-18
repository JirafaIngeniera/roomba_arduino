// Test 01 (23/03/2025): This code is used to test the forward movement of the Roomba robot.
// It is meant to be used along with the DC motors, passive buzzer and ultrasonic sensor.

// Passive buzzer
int buzzer = 3;
//-------------------------------------------

// L298N motor driver
const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;
//-------------------------------------------

// Ultrasonic sensor
int trigPin = 8;
int echoPin = 9;

long duration, cm;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  Serial.print(cm);
  Serial.println("cm");

  if (cm < 30) {
      digitalWrite (IN1, LOW);
      digitalWrite (IN2, LOW);
      digitalWrite (IN3, LOW);
      digitalWrite (IN4, LOW);
      digitalWrite (buzzer, HIGH);
  }
  else {
      digitalWrite (IN1, HIGH);
      digitalWrite (IN2, LOW);
      digitalWrite (IN3, LOW);
      digitalWrite (IN4, HIGH);
      digitalWrite (buzzer, LOW);
  }
}
