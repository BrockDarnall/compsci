
int whitePin = 11;
int redPin = 10;
int greenPin = 9;
int bluePin = 6;
int yellowPin = 5;
int sp = 3;


int brightness = 0;
int fade = 5;



void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(whitePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}



void loop() {
 brightness = 0;
analogWrite(whitePin, brightness);
 analogWrite(redPin, brightness);
 analogWrite(greenPin, brightness);
 analogWrite(bluePin, brightness);
 analogWrite(yellowPin, brightness);
  
  brightness = 0;
   
  brightness = 0;
  while (brightness < 255) {
    
 analogWrite(whitePin, brightness);
    delay(50);
    brightness = brightness + fade;
  }
 analogWrite(whitePin, brightness);

  brightness = 0;
  while (brightness < 255) {
    
 analogWrite(redPin, brightness);
  
    delay(50);
    tone (sp, 2000, 30);
  if (brightness < 255) {
    brightness = brightness + fade;
  }
  }
  
  brightness = 0;
  while (brightness < 255) {
    
 analogWrite(greenPin, brightness);
    delay(50);
    tone (sp, 3000, 30);
  if (brightness < 255) {
    brightness = brightness + fade;
  }
  }
  
  brightness = 0;
  while (brightness < 255) {
    
 analogWrite(bluePin, brightness);
    delay(50);
    tone (sp, 4000, 30);
  if (brightness < 255) {
    brightness = brightness + fade;
  }
  }

     brightness = 0;
  while (brightness < 255) {
    
 analogWrite(yellowPin, brightness);
    delay(50);
    tone (sp, 5000, 30);
  if (brightness < 255) {
    brightness = brightness + fade;
  }
  }


brightness = 255;
while (brightness > 0) {
    
 analogWrite(whitePin, brightness);
 analogWrite(redPin, brightness);
 analogWrite(greenPin, brightness);
 analogWrite(bluePin, brightness);
 analogWrite(yellowPin, brightness);
    delay(50);
  if (brightness >= 0) {
    brightness = brightness - fade;
  }
  }
  




}





