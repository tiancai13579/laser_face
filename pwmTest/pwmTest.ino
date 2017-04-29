int pin_pwm = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);  
  pinMode(11, OUTPUT);  
  Serial.begin(9600);
  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);  
  TCCR2B = _BV(CS22) | _BV(CS21) | _BV(CS20);  
  OCR2A = 10;  
  OCR2B = 5; 
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i<15;i++){
    OCR2A = i;
    Serial.println(i);
    delay(2000);
  }
}
