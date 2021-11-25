int cm = 0;

long readDistanceInches(int triggerPin, int echoPin) {

  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}

void setup() {
  Serial.begin(9600);

}

void loop() {
 
 cm = 0.01655 * readDistanceInches(7, 7);
 
  Serial.print("The object is ");
  Serial.print(cm);
  Serial.println(" cm apart");

  delay(100);
}
