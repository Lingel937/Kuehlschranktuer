#include <Arduino.h>
#include <MFRC522.h>
#include <Servo.h>
#define ks kuelschrankservo

#define servoPin 9
#define SS_PIN 10
#define RST_PIN 9
Servo kuelschrankservo;
MFRC522 mfrc522(SS_PIN, RST_PIN);
bool moveMotor();
String checkUser(byte *user);




// Nutzer-IDs

#define nUsers 9

byte  userbytes[nUsers][4] = {  
    {0xB3, 0x73, 0x9B, 0x0D}, // Aaron
    {0xB3, 0x4C, 0x53, 0x99}, // Speedy
    {0x33, 0xCA, 0x4C, 0x99}, // Theo
    {0xF3, 0xC3, 0x21, 0x0C}, // MR BIG
    {0x3A, 0xFF, 0xBF, 0x5F}, // Ceylin
    {0x02, 0xB8, 0xC0, 0x5F}, //Phillipp
    {0x63, 0xAD, 0x88, 0x0D}, //Tom Cruz
    {0x33, 0x03, 0x63, 0x99}, // Joda
    {0x47, 0x1F, 0xC0, 0x5F}  // LeLo
};
  
String usernames[nUsers] = {
    "Aaron" ,
    "Speedy", 
    "Theo", 
    "MR BIG", 
    "Ceylin",
    "Pillipp", 
    "Tom Cruz", 
    "Joda", 
    "LeLo" 
};
  