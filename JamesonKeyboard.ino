
#include "Keyboard.h"

int sensorPin1 = A0;
int sensorPin2 = A1;
int sensorPin3 = A2;
int sensorPin4 = A3;
int sensorPin5 = A4;
int sensorPin6 = A5;
int sensorPin7 = 9;
int sensorPin8 = 8;
void setup() {
  // open the serial port:
  Serial.begin(9600);
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  pinMode(sensorPin4, INPUT);
  pinMode(sensorPin5, INPUT);
  pinMode(sensorPin6, INPUT);
  pinMode(sensorPin7, INPUT);
  pinMode(sensorPin8, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // check for incoming serial data:

    // read incoming serial data:
    char inChar = Serial.read();
    // Type the next ASCII value from what you received:

    
    if (digitalRead(sensorPin1)) {
      Keyboard.press(KEY_LEFT_ARROW); 
      Serial.println("1");
    }
    else
    {
      Keyboard.release(KEY_LEFT_ARROW); 
    }
    
    if (digitalRead(sensorPin2)) {  
      Keyboard.press(KEY_UP_ARROW); 
      Serial.println("2");
    }
    else
    {
      Keyboard.release(KEY_UP_ARROW); 
    }
    
    if (digitalRead(sensorPin6)) {
      Keyboard.press(KEY_DOWN_ARROW); 
      Serial.println("6");
    }
    else
    {
      Keyboard.release(KEY_DOWN_ARROW); 
    }

    if (digitalRead(sensorPin5)) {
      Keyboard.press(KEY_RIGHT_ARROW); 
      Serial.println("5");
    }
    else
    {
      Keyboard.release(KEY_RIGHT_ARROW); 
    }

        
    if (digitalRead(sensorPin3)) {
      Keyboard.press(KEY_UP_ARROW); 
      Serial.println("3");
    }
    else
    {
      Keyboard.release(KEY_UP_ARROW); 
    }
    
 
    if (digitalRead(sensorPin3)) {
      Keyboard.press(KEY_TAB); 
      Serial.println("3");
    }
    else
    {
      Keyboard.release(KEY_TAB); 
    }
    

     if (digitalRead(sensorPin8)) {
      Keyboard.press(KEY_HOME); 
      Serial.println("8");
    }
    else
    {
      Keyboard.release(KEY_HOME); 
    }

        if (digitalRead(sensorPin4)) {
      Keyboard.press(KEY_END); 
      Serial.println("4");
    }
    else
    {
      Keyboard.release(KEY_END); 
    }
    
    
}
