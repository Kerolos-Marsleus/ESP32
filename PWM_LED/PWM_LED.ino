const int ledPin = 16;
const int ledPin2 = 17;
const int ledPin3 = 5;

// setting PWM Properties
const int freq = 5000;        // switching between high and low 5000 times in a second --> 1/5000 = 200 microseconds. Within these 200 microseconds the duty cycly control how long the signal remains high
const int ledChannel  = 0;    // there are 16 channels in esp32, each channel can independently control a PWM output pin
const int resolution = 8;     // the duty cycle is a value between 0 and 255



void setup() {
  // put your setup code here, to run once:
  // configure the LED PWM functionalities
  ledcSetup(ledChannel, freq, resolution);
  
  // Attach the channel to the GPIO pins
  ledcAttachPin(ledPin, ledChannel);
  ledcAttachPin(ledPin2, ledChannel);
  ledcAttachPin(ledPin3, ledChannel);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int dutyCycle = 0; dutyCycle <=255; dutyCycle++){
    ledcWrite(ledChannel, dutyCycle);
    delayMicroseconds(500);
  }
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(ledChannel, dutyCycle);
    delayMicroseconds(500);
  }

}
