
int sensorPin = A0;   // select the input pin for ldr
int sensorValue = 0;  // variable to store the value coming from the sensor
int ledPin = 13;

void setup() {
  pinMode(2, OUTPUT); //pin connected to the relay
  Serial.begin(9600); //sets serial port for communication
  pinMode(ledPin, OUTPUT);
}
void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); //prints the values coming from the sensor on the screen
  if(sensorValue < 700) //setting a threshold value
    digitalWrite(2,HIGH); //turn relay ON
  else digitalWrite(2,LOW); //turn relay OFF
  delay(100);

  if (sensorValue <=5) {
    digitalWrite(ledPin, HIGH);
    Serial.println("LDR is DARK, LED is ON");

  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("---------------");

  }

}




