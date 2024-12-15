const int buttonPin = 4;
const int ledPin = 16;


// variable to store the pushbutton State
int buttonState = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(buttonPin);
  // print the status of the button;
  Serial.println(buttonState);

  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}
