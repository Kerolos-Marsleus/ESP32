const int touchPin = 4;
const int ledPin = 16;


const int threshold = 10;
// variable to store the touch pin value;
int touchValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);    // time to open the serial monitor
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  touchValue = touchRead(touchPin);
  Serial.print(touchValue);

  if(touchValue < threshold){
    digitalWrite(ledPin, HIGH);
    Serial.println(" LED ON ");
  }else{
    digitalWrite(ledPin, LOW);
    Serial.println(" LED OFF ");
  }
  
}
