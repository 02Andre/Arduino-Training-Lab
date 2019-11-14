/*Programmer: Andre 
 * Date: 11.6.19
 * Program: Blink
 * 
 * This program will turn on an LED for a specified amount of time, turn it
 * off, and back on in a while loop
 */

// initialize our LED to pin 13
int led = 13;

void setup() {
  // Using the Function pinMode to call the variable led and provide Output:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
}
