/**
 * @file Function.c
 * @author MOHAN BABU S (mohanbabu.s.2018.ece@ritchennai.edu.in)
 * @brief Header file for Smart_Dustbin are connected to AVR328 MCU GPIO pin
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
/**
 * @brief Initialization of pins
 * @return Declaration
 */
void setup() 
{       
    servo.attach(servoPin);  
    pinMode(4,INPUT);  
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    servo.write(90);         
    delay(1000);
    servo.write(3);
} 
/** 
 * @brief Measuring the distance
 * @return Getting Input values
 */
void measure() 
{  
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(15);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
dist = (duration/2) / 24;   
}
/** 
 * @brief Execution part
 * @return Part of Execution
 */
  void loop()
  { 
if (digitalRead(3)==1 && flag==0) 
{    
  servo.write(90); 
  delay(3000);       
  flag=1;            
}
if (digitalRead(3)==0 && flag==1) 
{ 
  servo.write(3);    
  delay(1000);       
  flag=0;         
}
  if (flag==0) {
  for (int i=0;i<=2;i++) {   
    measure();               
    aver[i]=dist;            
    delay(50);              
  }
  dist=(aver[0]+aver[1]+aver[2])/3;
} 
if (dist>10 && dist<30 && flag==0) 
{    
  servo.write(90);  
  delay(1000);       
  servo.write(3);    
  delay(1000);      
}
if (dist>30 && dist<60 && flag==0) 
{    
  servo.write(90);  
  delay(3000);       
  servo.write(3);    
  delay(1000);      
}
  }
