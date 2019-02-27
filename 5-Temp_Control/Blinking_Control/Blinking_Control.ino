void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int analogValue = analogRead(A0);
  float analogVoltage = analogValue * 3.3 / 1023 ;
  float temperature = analogVoltage / 0.01 ;
  
  Serial.println(temperature);

  int rate = map(temperature , 28 , 50 , 2000 , 250);
  digitalWrite(D1,HIGH);
  delay(rate);
  digitalWrite(D1,LOW);
  delay(rate);
  
}