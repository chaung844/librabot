 #include <Servo.h>
 Servo y;
 Servo b;
 Servo r;

 char val; // Data received from the serial port
 int ye = 1; // Set the pin to digital I/O 4
 int bu = 3;
 int re = 5;
 
 void setup() {
 pinMode(ye, OUTPUT); // Set pin as OUTPUT
 y.attach(2);
 Serial.begin(9600); // Start serial communication at 9600 bps
 }
 
 void loop() {
 while (Serial.available()) { // If data is available to read,
 val = Serial.read(); // read it and store it in val
 }
 if (val == 'A') { // If A was received
 digitalWrite(ye, LOW);
 y.write(180);
 } else {
 digitalWrite(ye, LOW); // Otherwise turn it OFF
 y.write(90);
 }
 delay(1000); // Wait 100 milliseconds for next reading
 }