int led = 8;
int led2 = 7;

int potenziometro = 0;
int valore = 0;

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() 
{
  valore = analogRead(potenziometro);

  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);

  if (valore > 700)
  {
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);    
  }
  else if (valore < 700 && valore > 10)
  {
    digitalWrite(led2, valore);
    digitalWrite(led, LOW);
  }
  else if (valore == 0)
  {
    digitalWrite(led2, LOW);
  }
}
