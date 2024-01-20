const int pinPWM = 11; // Broche PWM D11 sur Arduino Nano

void setup() {
  // Aucune initialisation nécessaire dans cet exemple
}

void loop() {
  // Générer un signal PWM à un niveau de 100 sur la broche D11
  analogWrite(pinPWM, 100);
}
