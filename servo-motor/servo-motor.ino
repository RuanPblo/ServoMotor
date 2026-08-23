#include <Servo.h>
Servo SM;
int min = 0;
int med = 90;
int max = 180;
void setup() {
  SM.attach(3);

}

void loop() {
  SM.write(min);
  delay(1000);
  SM.write(med);
  delay(1000);
  SM.write(max);
  delay(1000);
}
