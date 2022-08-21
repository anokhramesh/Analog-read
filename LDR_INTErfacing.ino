int LDRValue =A0;// connect LDR to PIN A0 of Arduino
int Light =10;// connect light to pin 10 of Arduino
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(Light, OUTPUT);
}

void loop()
{
  // read the value from the sensor
  LDRValue = analogRead(A0);
  // print the sensor reading so you know its range
  if(LDRValue <100)
  {digitalWrite(Light,HIGH);}
  else
 //if(LDRValue > 100)
  {digitalWrite(Light,LOW);}  
   
  Serial.println(LDRValue);
  
  delay(100); // Wait for 100 millisecond(s)
}
