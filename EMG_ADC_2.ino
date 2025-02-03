// Acquisition of data from Arduino ADC and conversion to readable voltage value
// Performs averaging operation before printing the value 
#include <math.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = 0;
  float valueSum = 0;
  for (int i=0; i<5; i++) {
    float sensorValue = analogRead(A1);
    float voltageValue = sensorValue*5.00/1023.00;
    valueSum += voltageValue;
  }
  float avgValue = valueSum/5;
  Serial.println(avgValue-2.5);
  delay(10);
}