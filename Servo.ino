1. #include <Servo.h> // declare a call to the Servo.h library
2. servo myservo; // create a servo object
3. int pos = 0; // The variable pos is used to store the servo position.
4. void setup() {
5. myservo.attach(9); // Attach the servo on pin 9 to the declared servo object.
6. }
7.
8. void loop() {
9. for(pos = 0; pos < 180; pos += 1){ // Turn the servo from 0° to 180°.
increasing 1° each time.
10. myservo.write(pos); // Write the angle to the servo.
11. delay(15); // Delay 15ms for the servo to turn to the specified position.
12. }
12. }
13. for(pos = 180; pos>=1; pos-=1) { // turn the servo from 180° back to 0°.
decrease by 1° each time.
14. myservo.write(pos); // Write the angle to the servo. 15. delay(15); // Write the angle to the servo.
15. delay(15); // Delay 15ms for the servo to turn to the specified position.
16.

Translated with www.DeepL.com/Translator (free version)
