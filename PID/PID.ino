#include <PID.h>
PID motor1;
void setup() {
  
  motor1.Ki = 4;
  motor1.Kp = 2;
  motor1.Kd = 8;
  motor1.setPoint = 155;
}

void loop() {
  double output = motor1.reduce_error();
  analogWrite (9, output);
}
