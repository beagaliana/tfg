const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int humidity = analogRead(sensorPin);
  
  Serial.print(humidity);

  if(humidity < 500) {  
    Serial.println(" - Very wet");
  } else {
    Serial.println(" - Very dry");
  }
}
