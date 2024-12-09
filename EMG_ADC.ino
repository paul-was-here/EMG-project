//ADC for EMG output
#include <stdio.h>
#include <math.h>

int DataPin = A0;
int digitalValue = 0;
float analogValue = 0.00;
int DataRefreshDelay = 10000; //ms

void setup() {
  Serial.begin(9600);
}

void loop() {
  int Counter = 0;
    while(Counter <= 10000) {
      digitalValue = analogRead(DataPin);
      analogValue = (digitalValue * 5)/1023;
      printf("%f\n",analogValue);
      delay(10);
      Counter += 10;
    }
  printf("10 sec");
}