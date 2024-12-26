const int potPin = 34;

int potValue = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);      // the resolution is 12 bits of ADC so we can read from 0 to 4095
  Serial.println(potValue);
  delay(100);
}
