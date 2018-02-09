
/**
 * Lesson 2 - Excesice 1
    Turns on and off a LED ,using interrupt and button attach to pin 2
**/

// declare some varaibles

int buttonPin = 2;          //the pin to where the button is connected (for INT0)
int ledPin = 13;            //the led pin
byte interrputNum = 0;      // interrupt INT0 for PIN 2 
volatile boolean ledState = false; // the led is off



void setup()
{
  pinMode(buttonPin, INPUT);    //initialize the button pin as input 
  pinMode(ledPin, OUTPUT);     //initialize the led pin as output
  attachInterrupt(interrputNum, buttonPressedEvent, RISING);   //initialize the button pin as input 
}




void loop()
{
  
}


 void buttonPressedEvent(){

  // switch LED state
  ledState = !ledState;
  if(ledState){
     // put LED ON
     digitalWrite(ledPin, HIGH);
  }
  else{
    // put LED Off
    digitalWrite(ledPin, LOW);
  }
  
 }

