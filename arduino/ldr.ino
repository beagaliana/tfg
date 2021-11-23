
int sensorPin = A0;  
int sensorValue = 0;
int ledPin = 13;

void setup() {
  pinMode(2, OUTPUT); 
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue < 700) //setting a threshold value
    digitalWrite(2,HIGH); //turn relay ON
  else digitalWrite(2,LOW); //turn relay OFF
  delay(100);

}




