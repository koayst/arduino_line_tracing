int IRValue;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);

  pinMode(5, OUTPUT);
 pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
 pinMode(11, OUTPUT);
}


void loop()
{
  IRValue = digitalRead(2);
  Serial.println(IRValue);
  if (IRValue == true) {
    analogWrite(5, 50);
    digitalWrite(10,HIGH);
    analogWrite(6, 50);
    digitalWrite(11,LOW);

  } else {
    analogWrite(5, 50);
    digitalWrite(10,HIGH);
    analogWrite(6, 50);
    digitalWrite(11,HIGH);

  }
  delay(100);

}