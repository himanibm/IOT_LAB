int pirpin=2;
int ledpin=13;
int ct=30;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pirpin,INPUT);
pinMode(ledpin,OUTPUT);
digitalWrite(pirpin,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pirpin)==HIGH)
{
  digitalWrite(ledpin,HIGH);
}
delay(5000);
if(digitalRead(pirpin)==LOW)
{
  digitalWrite(ledpin,LOW);
}
delay(1000);
}

