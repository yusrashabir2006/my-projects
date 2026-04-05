// C++ code
//
int greenled=13;
int yellowled=12;
int redled=11;
void setup()
{
  pinMode(greenled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(redled, OUTPUT);
}

void loop()
{
  digitalWrite(greenled, HIGH);
  digitalWrite(yellowled,LOW);
   digitalWrite(redled,LOW);
  
  delay(1000);
  digitalWrite(greenled, LOW);
  digitalWrite(yellowled,HIGH);
  digitalWrite(redled,LOW);
  delay(1000);
  digitalWrite(greenled, LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(redled,HIGH);
  delay(1000);
  
}