void initialization()
{
 pinMode(CZ1a,INPUT);
 pinMode(CZ1b,INPUT);
 pinMode(CZ1c,INPUT);
 pinMode(CZ2,INPUT);
}
void voltageMesurments()
{
  if(digitalRead(CZ1a)==0)
  {
    Serial.println("CZ1a no voltage");
  }
  if(digitalRead(CZ1b)==0)
  {
    Serial.println("CZ1b no voltage");  
  }
  if(digitalRead(CZ1c)==0)
  {
    Serial.println("CZ1C no voltage");
  }
  if(digitalRead(CZ2)==0)
  {
    Serial.println("CZ2 no voltage");
  }
  if(digitalRead(CZ7)==0)
  {
    Serial.println("CZ7 no voltage");
  }
  if(digitalRead(CZ3)==0)
  {
    Serial.println("CZ3 no voltage");
  }
  if(digitalRead(CZ5)==0)
  {
    Serial.println("CZ5 no voltage");
  }
  if(digitalRead(CZ6)==0)
  {
    Serial.println("CZ6 no voltage");
  }

}
