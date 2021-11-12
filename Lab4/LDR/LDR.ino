int LDR=0;
int LDRValue=0;
int light_sensitivity=1000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int LDRValue=analogRead(A0);
 Serial.println(LDRValue);
 delay(50);
 if(LDRValue<light_sensitivity)
 digitalWrite(12,HIGH);
 else
 digitalWrite(12,LOW);
 delay(100);
}

