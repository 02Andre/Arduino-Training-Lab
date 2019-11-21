/*/*Programmer: Andre 
 * Date: 11.6.19
 * Program: Blink
 * 
 * This program will turn on an LED for a specified amount of time, turn it
 * off, and back on in a while loop
 *
 * 
 * 
 * 
 * Programmer: Andre 
 * Date: 11.14.19
 * Program: digitalRead() - the Serial Port
 * 
 * Reads a Digital input on pin2, prints the result to the serial monitor
 */
// initialize our LED to pin 13
int led = 13;
//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  //initializes, serial communication at 9600 bits per second
  Serial. begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);
  // Using the Function pinMode to call the variable led and provide Output:
  pinMode(led, OUTPUT);
  
}

void loop() {
  //read the input pin
  int buttonState = digitalRead(pushButton);
  //print out the state of the button
  Serial.println(buttonState);
  delay(250); // delay in between readings for stability
    // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
  

}
