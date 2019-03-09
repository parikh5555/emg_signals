int analogPin = 0;     // potentiometer wiper (middle terminal) connected to analog pin 3
                       // outside leads to ground and +5V
int val = 0;           // variable to store the value read
int i =0;
void setup()
{
  Serial.begin(9600);              //  setup serial
}

void loop()
{
  while (i<100)
  {
      val = analogRead(analogPin);     // read the input pin
      Serial.println(val);             // debug value
      delay(10);
      i++;
    }

}
