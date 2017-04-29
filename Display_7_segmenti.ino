/* Display a 7 segmenti by Giangomenico  
    
    Collegamenti:
    
 *  Cavo Verde pin digitale 10
 *  Cavo Nero pin digitale 9

 *  Cavo Giallo pin digitale 7
 *  Cavo Gialoo 2 pin digitale 6
 *  Cavo Giallo 3 pin digitale 4
 
 *  Cavo Rosso pin digitale 2
 *  Cavo Bianco pin digitale 1
 
 *  Cavo Nero pin GND 3 piedino

  Buzzer:

  Collegamenti:
  
 * Cavo Verde pin digitale 13
 
 */


const int a = 7;  
const int b = 6;  
const int c = 4;  
const int d = 2;  
const int e = 1;  
const int f = 9;  
const int g = 10;  

int buzzer = 13;

void Contatore(int n)
{
  if (n == 0)
    {
      digitalWrite(a, HIGH);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, HIGH);  
      digitalWrite(f, HIGH);  
      digitalWrite(g, LOW); 
    }
    if (n == 1)
    {
      digitalWrite(a, LOW);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, LOW);   
      digitalWrite(e, LOW);  
      digitalWrite(f, LOW);  
      digitalWrite(g, LOW); 
    }
    if (n == 2)
    {

      digitalWrite(a, HIGH);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, LOW);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, HIGH);  
      digitalWrite(f, LOW);  
      digitalWrite(g, HIGH);
    }
    if (n == 3)
    {
      digitalWrite(a, HIGH);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, LOW);  
      digitalWrite(f, LOW);  
      digitalWrite(g, HIGH);  
    }
    if (n == 4)
    {
      digitalWrite(a, LOW);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, LOW);   
      digitalWrite(e, LOW);  
      digitalWrite(f, HIGH);  
      digitalWrite(g, HIGH);
    }  
    if (n == 5)
    {  
      digitalWrite(a, HIGH);  
      digitalWrite(b, LOW);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, LOW);  
      digitalWrite(f, HIGH);  
      digitalWrite(g, HIGH);
    } 
    if (n == 6)
    {
        
      digitalWrite(a, HIGH);  
      digitalWrite(b, LOW);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, HIGH);  
      digitalWrite(f, HIGH);  
      digitalWrite(g, HIGH);  
    }
    if (n == 7)
    {
      digitalWrite(a, HIGH);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, LOW);   
      digitalWrite(e, LOW);  
      digitalWrite(f, LOW);  
      digitalWrite(g, LOW); 
    }  
    if (n == 8)
    {  
      digitalWrite(a, HIGH);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, HIGH);  
      digitalWrite(f, HIGH);  
      digitalWrite(g, HIGH);    
    }
    if (n == 9)
    {  
      digitalWrite(a, HIGH);  
      digitalWrite(b, HIGH);  
      digitalWrite(c, HIGH);   
      digitalWrite(d, HIGH);   
      digitalWrite(e, LOW);  
      digitalWrite(f, HIGH);  
      digitalWrite(g, HIGH);
    }
};


  
/*void LedAcceso(int n)  
{  
  switch(n)  
  {  
  case 0:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, HIGH);  
    digitalWrite(f, HIGH);  
    digitalWrite(g, LOW);  
    break;  
  
  case 1:  
    digitalWrite(a, LOW);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, LOW);   
    digitalWrite(e, LOW);  
    digitalWrite(f, LOW);  
    digitalWrite(g, LOW);  
    break;  
  
  case 2:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, LOW);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, HIGH);  
    digitalWrite(f, LOW);  
    digitalWrite(g, HIGH);  
    break;  
  case 3:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, LOW);  
    digitalWrite(f, LOW);  
    digitalWrite(g, HIGH);  
    break;  
  
  case 4:  
    digitalWrite(a, LOW);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, LOW);   
    digitalWrite(e, LOW);  
    digitalWrite(f, HIGH);  
    digitalWrite(g, HIGH);  
    break;  
  
  case 5:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, LOW);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, LOW);  
    digitalWrite(f, HIGH);  
    digitalWrite(g, HIGH);  
    break;  
  
  case 6:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, LOW);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, HIGH);  
    digitalWrite(f, HIGH);  
    digitalWrite(g, HIGH);  
    break;  
  
  case 7:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, LOW);   
    digitalWrite(e, LOW);  
    digitalWrite(f, LOW);  
    digitalWrite(g, LOW);  
    break;  
  
  case 8:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, HIGH);  
    digitalWrite(f, HIGH);  
    digitalWrite(g, HIGH);  
    break;  
  
  case 9:  
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);  
    digitalWrite(c, HIGH);   
    digitalWrite(d, HIGH);   
    digitalWrite(e, LOW);  
    digitalWrite(f, HIGH);  
    digitalWrite(g, HIGH);  
    break;  
  }*/    
  
void setup()  
{ 
  pinMode(a, OUTPUT);   
  pinMode(b, OUTPUT);   
  pinMode(c, OUTPUT);   
  pinMode(d, OUTPUT);   
  pinMode(e, OUTPUT);   
  pinMode(f, OUTPUT);   
  pinMode(g, OUTPUT);  
  pinMode(buzzer, OUTPUT);
}  
  
void loop ()  
{  
  for (int i = 9; i >= 0; i--)   
  {  
    Contatore(i);
    
    //tone(buzzer, 1800, 300);
    delay(1000);
    }
  }  
