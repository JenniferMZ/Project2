/* Project 2 - Repeating with for Loops
by Jennifer Zavala 1-14-26*/

int d = 100;

void setup() 
{
  pinMode(2, OUTPUT);  //LED1 control pin is set up as an output
  pinMode(3, OUTPUT); //same for LED2 through 5
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() 
{
  for(int a = 2; a<7; a++)
  {
    digitalWrite(a, HIGH);
    delay(d);
    digitalWrite(a, LOW);
    delay(d);
  }
  for(int a=5; a>1; a--)
  {
    digitalWrite(a,HIGH);
    delay(d);
    digitalWrite(a,LOW);
    delay(d);
  }
}
