#include <Servo.h>
#include <Wire.h>
#include <NewPing.h>
#include <LiquidCrystal_I2C.h>


#define RB1_PIN 2  //a
#define RB2_PIN 3  //b
#define RB3_PIN 4  //c
#define RF1_PIN 5  //d
#define RF2_PIN 6  //e
#define RF3_PIN 7  //f
#define LF1_PIN 8  //g
#define LF2_PIN 9  //h
#define LF3_PIN 10 //i
#define LB1_PIN 11 //j
#define LB2_PIN 12 //k
#define LB3_PIN 13 //l

#define TRIGGER_PIN_1 15
#define ECHO_PIN_1 14
#define TRIGGER_PIN_2 17
#define ECHO_PIN_2 16

NewPing sonar_1(TRIGGER_PIN_1, ECHO_PIN_1);
NewPing sonar_2(TRIGGER_PIN_2, ECHO_PIN_2);

// Initialize the LCD library with the appropriate pins for display
LiquidCrystal_I2C lcd(0x27, 16, 2); // Change the address to match your LCD module

// Send a ping and get the distance in centimeters for ultraonic sensor
int distance_1 = sonar_1.ping_cm();
int distance_2 = sonar_2.ping_cm();

int a = 100; // 2
int b = 150; // 3
int c = 90; // 4
int d = 45; // 5  +15
int e = 150; // 6
int f = 90; // 7
int g = 90; // 8
int h = 30; // 9
int i = 90; // 10
int j = 100; // 11   
int k = 40; // 12   +10
int l = 90; // 13

Servo servos[12];

void setup() {
  Serial.begin(9600);
  initializeDisplay();
  check_distance();
  move_decision();
  for (int i = 0; i < 12; i++) {
    servos[i].attach(i + 2);  // Attach servos to pins 2 to 13 (assuming the sensor shield is connected to Arduino Mega)f
  }
}



void loop() {
  if(Serial.available()>0)
  {
    char a = Serial.read();
    Serial.println(a);
    if(a == '1')
    Hardsit(1);
    if(a == '2')
    sit_to_stand(1);
    if(a == '3')
    halfSit(1);
    if(a == '4')
    walkDogForward(1);
    if(a == '5')
    walkDogBackward(1);
    if(a == '6')
    stand_to_sit(1);
    if(a == '7')
    turnRight(1);
    if(a == '8')
    turnLeft(1);
    if(a == '9')
    hardStand(1);
  }
  delay(50);
  Hardsit(1);
}
