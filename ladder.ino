int whitePin = 5;
int redPin = 10;
int greenPin = 8;
int bluePin = 12;
int yellowPin = 7;






void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(whitePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}



void loop() {
  
delay(1000);
  
  analogWrite(bluePin, 255);
  delay(1000);
 analogWrite(redPin, 255);
 delay(1000);
 analogWrite(greenPin, 255);
 delay(1000);
  analogWrite(yellowPin, 255);
 delay(1000);
 analogWrite(whitePin, 255);
    delay(1000);
  
    
    analogWrite(bluePin, 0);
   delay(1000);
 analogWrite(redPin, 0);
 delay(1000);
 analogWrite(greenPin, 0);
 delay(1000);
  analogWrite(yellowPin, 0);
 delay(1000);
 analogWrite(whitePin, 0);
    delay(50);
  
  

  }
  






