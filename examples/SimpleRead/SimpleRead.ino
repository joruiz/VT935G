/*
  SimpleRead
  Read luminosity sensor value and print it in luxes and foot-candles.
 
  Connections:
    sensor output to pin A3 of Arduino

  This example code is in the public domain.
*/

#include <VT935G.h>

#define INPUT_PIN  A2

VT935G lumSensor(INPUT_PIN);

void setup() {

  Serial.begin(9600);
  Serial.println("Luminosity read example:"); 
}

void loop() {

  float luxes = lumSensor.readLux();
  Serial.print("Luxes: ");
  Serial.print(luxes);
  float fc = lumSensor.readFc();
  Serial.print("Foot-candle: ");
  Serial.println();
  delay(1000);
}
