
/**
 * @file project_main.c
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
void main()
{
    void setup();
    void measure();
    void loop();
}
