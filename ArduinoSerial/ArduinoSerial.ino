
int inByte = 0;         // incoming serial byte

void setup()
{

  Serial.begin(9600);
  pinMode(11, OUTPUT);   // digital sensor is on digital pin 2

}

void loop()
{

  if (Serial.available() > 0) {
    inByte = Serial.read();
    delay(2);

  }
  analogWrite(11, inByte);
  delay(3);
  
}



