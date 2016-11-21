// I2C communications
#include <Wire.h>
// Libraries for matrix
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"

Adafruit_8x8matrix matrix = Adafruit_8x8matrix();

void setup() {
  Serial.begin(9600);
  // Send data to the serial port
  // helps with troubleshooting
  Serial.println("8x8 LED Matrix Test");

  // set the address
  matrix.begin(0x70);  
}

void loop() {  
  // clear display 
  matrix.clear(); 
  // set (start pixel x,y end pixel, ON)     
  matrix.drawLine(0,0, 7,7, LED_ON);
  // write RAM to matrix 
  matrix.writeDisplay();
  delay(500);
  }


