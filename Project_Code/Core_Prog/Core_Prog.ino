#include <Servo.h>
Servo myservo;
int pos = 0;
const int buttonPin = 6;
int buttonState = 0;

const int LED = 3;
const int PIR = 7;
int pirState = 0;

void setup() {
  // put your setup code here, to run once:
myservo.attach(2);

pinMode(LED, OUTPUT);
pinMode(PIR, INPUT);

pinMode(buttonPin, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    for (pos = 0; pos <= 180; pos += 1) 
    {
    myservo.write(pos);              
    delay(15);
    }
                          }
    else{
    pos=0;
        }

        //LED
         pirState = digitalRead(PIR);
        if(pirState == LOW) {
          digitalWrite(LED, HIGH); 
                            }
        else if(pirState == HIGH) {
          digitalWrite(LED, LOW);
        }
            }

void pinsInit()
{
}


