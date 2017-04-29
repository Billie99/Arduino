#define LED 12
#define LED1 11

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() 
{

  digitalWrite(LED, HIGH);
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(LED1, HIGH);
  delay(1000);
}
