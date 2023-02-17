//define color pins
const int redPin = 6;
const int greenPin = 5;
const int bluePin = 3;
//define GND's pin
const int led3 = 10;
const int led1 = 11;
const int led2 = 9;
//define colors
int red;
int green;
int blue;
//define Brightnesses
int Br1;
int Br2;
int Br3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  
}

void loop() {
  red = 0;
  green = 0;
  blue = 0;
  Br1 = 250;
  Br2 = 150;
  Br3 = 50;
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
  analogWrite(led1, Br1);
  analogWrite(led2, Br2);
  analogWrite(led3, Br3);


}
