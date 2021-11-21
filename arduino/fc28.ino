const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(sensorPin);
  
  Serial.print(moisture);

  if(moisture < 500) {  
    Serial.println(" - Moisturized");
  } else {
    Serial.println(" - Dry");
  }
}
