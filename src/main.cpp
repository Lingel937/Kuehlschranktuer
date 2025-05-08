#include <Arduino.h>
#include <MFRC522.h>
#include <Servo.h>


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



String checkUser(byte *user) {
  for (int i = 0; i < nUsers; i++) {
    if (user[0] == userbytes[i][0] && user[1] == userbytes[i][1] && user[2] == userbytes[i][2] && user[3] == userbytes[i][3]) {
      return usernames[i];
    }
  }
  return "Unknown User";
}

bool moveMotor()    {
  // Move the motor to the next position
  // Add your motor control code here
  return true; // Return true if the motor moved successfully, false otherwise
}


