void initialization()
{
 Serial.begin(9600); //init serial monitor
 pinMode(CZ1a,INPUT);
 pinMode(CZ1b,INPUT);
 pinMode(CZ1c,INPUT);
 pinMode(CZ2,INPUT);
 pinMode(CZ7,INPUT);
 pinMode(CZ3,INPUT);
 pinMode(CZ5,INPUT);
 pinMode(CZ6,INPUT);
 if (!htu.begin())
 {
 Serial.println("Couldn't find sensor!");
 while (1);
 }
 
}
void voltageMesurments()
{
  if(digitalRead(CZ1a)==0)
  {
    //Serial.println("CZ1a no voltage");
  }
  if(digitalRead(CZ1b)==0)
  {
    //Serial.println("CZ1b no voltage");  
  }
  if(digitalRead(CZ1c)==0)
  {
    //Serial.println("CZ1C no voltage");
  }
  if(digitalRead(CZ2)==0)
  {
    //Serial.println("CZ2 no voltage");
  }
  if(digitalRead(CZ7)==0)
  {
    //Serial.println("CZ7 no voltage");
  }
  if(digitalRead(CZ3)==0)
  {
    //Serial.println("CZ3 no voltage");
  }
  if(digitalRead(CZ5)==0)
  {
    //Serial.println("CZ5 no voltage");
  }
  if(digitalRead(CZ6)==0)
  {
    //Serial.println("CZ6 no voltage");
  }

}
//ACS712-20
void ampsMesurments()
{
  //Firts current sensor
  double readCZ3VtoAmps=analogRead(CZ3Amps);  
  double CZ3Voltage=(readCZ3VtoAmps/1024)*5000;
  double CZ3Amps=((CZ3Voltage-2500)/mVperAmp20ASensor);
  //Second current sensor
  double readCZ4VtoAmps=analogRead(CZ4Amps);
  double CZ4Voltage=(readCZ4VtoAmps/1024)*5000;
  double CZ4Amps=((CZ4Voltage-2500)/mVperAmp20ASensor);
  //3
  double readCZ5VtoAmps=analogRead(CZ5Amps);
  double CZ5Voltage=(readCZ5VtoAmps/1024)*5000;
  double CZ5Amps=((CZ5Voltage-2500)/mVperAmp20ASensor);
  //4
  double readCZ6VtoAmps=analogRead(CZ6Amps);
  double CZ6Voltage=(readCZ6VtoAmps/1024)*5000;
  double CZ6Amps=((CZ6Voltage-2500)/mVperAmp20ASensor);
  Serial.println(CZ6Amps);
}
void tempHumidity()
{
  float temp = htu.readTemperature();
  float rel_hum = htu.readHumidity();
  //Serial.print("Temp: "); Serial.print(temp); Serial.print(" C");
  //Serial.print("\t\t");
  //Serial.print("Humidity: "); Serial.print(rel_hum); Serial.println(" \%");
}
