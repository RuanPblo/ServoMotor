#include <Servo.h>
Servo SM;
#define pot A5
void setup() {
  SM.attach(3);
   pinMode(pot,INPUT);
}

void loop() {
  int ler = analogRead(pot);
  SM.write(map(ler,0,1023,0,180));
}
