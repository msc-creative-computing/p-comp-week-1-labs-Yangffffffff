
int switchState = 0;
void setup(){
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(2,INPUT);
}
void loop(){
 switchState = digitalRead(2);
 // this is a comment
   if (switchState == LOW) {
 // the buton is not pressed
 digitalWrite(12, HIGH); // green LED
 digitalWrite(11, HIGH); // yellow LED
 digitalWrite(10, LOW); // red LED
 }
 else { // the buton is pressed
 digitalWrite(12, LOW);
 digitalWrite(11, HIGH);
 digitalWrite(10, HIGH);
 delay(250); // wait for a quarter second
 // toggle the LEDs
 digitalWrite(12, HIGH);
 digitalWrite(11, LOW);
 digitalWrite(10, HIGH);
 delay(500); // wait for a quarter second
 }
} // go back to the beginning of the loop
