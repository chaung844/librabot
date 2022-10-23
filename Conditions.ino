#include <Servo.h>
Servo y;
Servo b;
Servo r;
int pos = 0;
void setup() {
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  y.attach(2);
  b.attach(4);
  r.attach(6);
}

void loop() {
if (pos = 1) 
{
digitalWrite(1, HIGH);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
y.write(180);
b.write(90);
r.write(90);
delay(500);
}
else if (pos =2) 
{
digitalWrite(1, LOW);
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
y.write(90);
b.write(180);
r.write(90);
delay(500);
}
else if (pos =3)
{
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
y.write(90);
b.write(90);
r.write(0);
delay(500);
}
else 
{
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
y.write(90);
b.write(90);
r.write(90);
delay(500);
}
}
