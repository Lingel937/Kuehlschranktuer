#include <kuelschranktuer.h>
bool moveMotor()    {
    // Move the motor to the next position
    // Add your motor control code here
    return true; // Return true if the motor moved successfully, false otherwise
}
  
  
String checkUser(byte *user) {
  for (int i = 0; i < nUsers; i++) {
    if (user[0] == userbytes[i][0] && user[1] == userbytes[i][1] && user[2] == userbytes[i][2] && user[3] == userbytes[i][3]) {
      return usernames[i];
    }
  }
  return "Unknown User";
}