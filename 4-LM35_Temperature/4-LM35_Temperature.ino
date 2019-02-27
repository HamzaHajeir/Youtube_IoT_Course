void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Serial.print("Flash size: ");
  Serial.println(ESP.getFlashChipSize(), DEC);

  pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int analogValue = analogRead(A0);
  float analogVoltage = analogValue * 3.3 / 1023 ;
  float temperature = analogVoltage / 0.01 ;
  
  Serial.println(temperature);

  if(temperature > 25){
    digitalWrite(D1,HIGH);
  }
  else {
    digitalWrite(D1,LOW);
  }
}
