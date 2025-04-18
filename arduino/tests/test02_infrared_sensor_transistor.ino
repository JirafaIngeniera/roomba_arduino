// Test 02 (23/03/2025): This code is used to test the fall detection and cleaning mode activation of the Roomba robot.
// It is meant to be used along with the infrared sensor and BD139 transistor.

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

//-------------------------------------------

// Infrared sensor
int infraredPin = 10;

//-------------------------------------------

// BD139 transistor
int bd139Pin = 12;

int infraredLecture = 0;
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
  pinMode(infraredPin, INPUT);
  pinMode(bd139Pin, OUTPUT);
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
  Serial.print("cm  ||  ");
  infraredLecture = digitalRead(infraredPin);
  Serial.print("Infrared: ");
  Serial.println(infraredLecture);

  if (cm < 30 || infraredLecture == HIGH) {
      digitalWrite (IN1, LOW);
      digitalWrite (IN2, LOW);
      digitalWrite (IN3, LOW);
      digitalWrite (IN4, LOW);
      digitalWrite (buzzer, HIGH);
      digitalWrite (bd139Pin, LOW);
  }
  else {
      digitalWrite (IN1, HIGH);
      digitalWrite (IN2, LOW);
      digitalWrite (IN3, LOW);
      digitalWrite (IN4, HIGH);
      digitalWrite (buzzer, LOW);
      digitalWrite (bd139Pin, HIGH);
  }
}
