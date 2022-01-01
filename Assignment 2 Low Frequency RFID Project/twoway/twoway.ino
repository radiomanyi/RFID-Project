int val;
void setup() {
  Serial.begin(9600); // opensserial port, sets data rate to 9600 bps   
  while(Serial.read()>= 0){}//clear serialbuffer  
}
 
void loop() {
  if (Serial.available() > 0) {  
    delay(100); // 等待数据传完  
    int numdata = Serial.available();  
    val=Serial.read();
    Serial.println(val); 
    if(val==49)
    {
      Serial.println("Test OK");  
      Serial.println(val);  
    }
    while(Serial.read()>=0){} //清空串口缓存  
  }  
  // put your main code here, to run repeatedly:
}
