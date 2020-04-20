int LeftIR;

int RightIR;

void Forward() {
  analogWrite(5, 50);
  digitalWrite(10,HIGH);
  analogWrite(6, 50);
  digitalWrite(11,HIGH);
}

void Backward() {
  analogWrite(5, 50);
  digitalWrite(10,LOW);
  analogWrite(6, 50);
  digitalWrite(11,LOW);
}

void TurnRight() {
  analogWrite(5, 50);
  digitalWrite(10,HIGH);
  analogWrite(6, 50);
  digitalWrite(11,LOW);
}

void TurnLeft() {
  analogWrite(5, 50);
  digitalWrite(10,LOW);
  analogWrite(6, 50);
  digitalWrite(11,HIGH);
}

void Stop() {
  analogWrite(5, 0);
  digitalWrite(10,HIGH);
  analogWrite(6, 0);
  digitalWrite(11,HIGH);
}

void setup()
{
  pinMode(5, OUTPUT);
 pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
 pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);

}


void loop()
{
  LeftIR = digitalRead(2);
  RightIR = digitalRead(4);
  Serial.println(LeftIR);
  Serial.println(RightIR);
  Serial.println("-----");
  if (LeftIR == true && RightIR == true) {
    Serial.println("STOP");
    Stop();

  }
  if (LeftIR == false && RightIR == false) {
    Forward();

  }
  if (LeftIR == true && RightIR == false) {
    TurnLeft();

  }
  if (LeftIR == false && RightIR == true) {
    TurnRight();

  }
  delay(200);

}