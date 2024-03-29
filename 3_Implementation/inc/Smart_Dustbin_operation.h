/**
 * @file Smart_Dustbin_operation.h
 * @author MOHAN BABU S (mohanbabu.s.2018.ece@ritchennai.edu.in)
 * @brief Header file for Smart_Dustbin are connected to AVR328 MCU GPIO pin
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <Servo.h>   
#define trigPin 12    
#define echoPin 11
#define servoPin 7
Servo servo;
long duration, dist, average;   
int flag=0; 
long aver[3];
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