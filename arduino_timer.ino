int sensorPin = 10;    // select the input pin for the read
int RelayPin = 11;      // select the pin for the Trigger
int ResetPin = 5;      // select the pin for the Reset
//int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the RelayPin as an OUTPUT:
  pinMode(RelayPin, OUTPUT);
  pinMode(ResetPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}


void loop() {
  // read the value from the sensor:
  if (digitalRead(sensorPin) == HIGH) { //if the digital value of D10 is high then
  delay(2000);
  digitalWrite(RelayPin, HIGH); //write digital pin 11 high
  digitalWrite(ResetPin, HIGH); //write reset pin 5 high
  }
  else {
  digitalWrite(RelayPin, LOW); //if it is higher than 600, make pin 11 low
  digitalWrite(ResetPin, LOW); //reset pin low
  }
  }
