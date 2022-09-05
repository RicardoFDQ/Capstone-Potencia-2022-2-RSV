void PWM_init(void);
void PWM_frec(int duty);
int m;
int pwm = P2_5;
int pwm2 = 27;

void setup() {
  pinMode(26, INPUT); //6.3
  Serial.begin(57600);
  PWM_init();
}

void loop() {
  m = analogRead(26)/16;
  Serial.println(m);
  PWM_frec(m); 
  
}

void PWM_init(void) {
  analogFrequency(200);
  analogWrite(pwm, 125);
  }

void PWM_frec(int duty) {
  analogWrite(pwm, duty);
}
