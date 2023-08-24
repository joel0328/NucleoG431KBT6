/***************
****************
Linuxhint.com
****************
****************/

#include <Wire.h>  /*Wire library Included*/
 
byte val = 0;
HardwareSerial SerialPort(0); // use UART2

void setup() {
  pinMode(2, OUTPUT);
  SerialPort.begin(15200, SERIAL_8N1, 34, 35); 
} 
 
void loop() {
digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(1000);                       // wait for a second
SerialPort.print(1);
delay(5000);
SerialPort.print(0);
delay(5000);
digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
delay(1000);
}


