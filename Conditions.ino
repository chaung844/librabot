#include <Servo.h>
Servo r;
Servo b;

int pos = 0;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  r.attach(4);
  b.attach(8);
  Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0) {
    // read the incoming byte:
    pos = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(pos, DEC);
  }
if (pos == 65)
{
digitalWrite(2, HIGH);
r.write(180);
delay(5000);
}
else{
digitalWrite(2, LOW);
r.write(90);
delay(500);
}
if (pos == 66)
{
digitalWrite(6, HIGH);
b.write(180);
delay(5000);
}
else{
digitalWrite(6, LOW);
b.write(90);
delay(500);
}
}
