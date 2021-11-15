char received;

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(38400);
  Serial.println("Slave Start!");

  
}

void loop() // run over and over
{ 
  if (Serial.available()>0)
  {
    received = Serial.read();  
    Serial.print(received);
    //Serial.write("hello");
  }
}
