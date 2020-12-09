int sensorPin = A1;    // select the input pin for the read
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
  if(analogRead(sensorPin) >= 220) { //if the analog value of A1 is more than 600 then
  // Analog Voltage Measured = (ADC) * ( 5 ) / (1023)
  // ADC = Analog Voltage Measured * 1023 / 5
  digitalWrite(RelayPin, HIGH); //write digital pin 11 high
  digitalWrite(ResetPin, HIGH); //write reset pin 5 high
  }
  else {
  digitalWrite(RelayPin, LOW); //if it is higher than 600, make pin 11 low
  digitalWrite(ResetPin, LOW); //reset pin low
  }
  }
