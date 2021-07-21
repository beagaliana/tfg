const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int humedad = analogRead(sensorPin);
  
  Serial.print(humedad);

  if(humedad < 500) {  
    Serial.println(" - Muy humedo");
  } else {
    Serial.println(" - Muy seco");
  }
}
