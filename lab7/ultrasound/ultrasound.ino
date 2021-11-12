const int trigPin = 2;
const int echoPin = 4;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(trigPin, OUTPUT);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
int duration=pulseIn(echoPin, HIGH);
int inches = microsecondsToInches(duration); // convert time to distance
int cm = microsecondsToCentimeters(duration);
Serial.print(inches); Serial.print("in, ");
Serial.print(cm); Serial.print("cm");
Serial.println();
delay(1000);
}
long microsecondsToCentimeters(long microseconds)

{
return microseconds / 29 / 2;
}
long microsecondsToInches(long microseconds)
{
return microseconds / 74 /2;
}

