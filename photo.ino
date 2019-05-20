
int redPin= 7;
int greenPin = 6;
int bluePin = 5;
 int ldrPin = A0;  //the number of the LDR pin

int color = 1;
 
void setup() {
 
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
}
 
void loop() {
 
  int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value
 
  
 
   



    analogWrite(redPin, 255);
    
     ldrStatus = analogRead(ldrPin);;
      

     


 while (ldrStatus <=300) {
  Serial.println("LDR is DARK, LED is ON");
     analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
   delay(1000);
   int color = 3;
    ldrStatus = analogRead(ldrPin);;
 
 while (ldrStatus <=50) {
  Serial.println("LDR is DARK, LED is ON");
 analogWrite(redPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);
   int color = 1;
    ldrStatus = analogRead(ldrPin);;
 }
 
 analogWrite(bluePin, 0);
   ldrStatus = analogRead(ldrPin);
 
 }
 
 while (ldrStatus <=300) {
  Serial.println("LDR is DARK, LED is ON");
     analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
   delay(1000);
   int color = 3;
    ldrStatus = analogRead(ldrPin);;
 
 
  ldrStatus = analogRead(ldrPin);
    

   
 
 }

  
  analogWrite(greenPin, 0);
   ldrStatus = analogRead(ldrPin);
}
