int greenled=12;
int yellowled=11;
int redled=10;
void setup()
{
  pinMode(greenled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(redled, OUTPUT);
}

void loop()
{
  digitalWrite(redled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
   
  
  delay(1000);
  digitalWrite(redled, LOW);
  digitalWrite(yellowled,HIGH);
  digitalWrite(greenled,LOW);
  delay(1000);
  digitalWrite(redled, LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,HIGH);
  delay(1000);
  
