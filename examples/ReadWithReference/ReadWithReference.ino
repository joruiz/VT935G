/*
  ReadDistance
  Read distance in centimetres.
 
  This example code is in the public domain.
 */

#include <TMP36.h>

#define INPUT_PIN      A0
#define REFERENCE_PIN  A1

TMP36 tempSensor(INPUT_PIN, REFERENCE_PIN);

void setup() {

  Serial.begin(9600);
  Serial.println("Temperature Read example"); 
    
}

void loop() {

  float temp = tempSensor.read();
  Serial.print("Temperature: ");
  Serial.println(temp);
  delay(1000);
}
