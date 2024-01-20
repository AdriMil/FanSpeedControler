const int pinButton = 5; 
const int LedVerte = 8; 
const int LedRouge = 7;
const int LedJaune = 6; 
const int pinPWM = 11;   
int pwmValues[] = {255, 150, 0};  //3 vitesses definies pr le ventilateur
int iterator = 0; 
int buttonState = HIGH; 

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(pinPWM, OUTPUT);
  pinMode(LedVerte, OUTPUT);
  pinMode(LedRouge, OUTPUT);
  pinMode(LedJaune, OUTPUT);
  
  analogWrite(pinPWM, pwmValues[iterator]); //Vitesse maximum à l'allumage
  digitalWrite(LedRouge, HIGH);digitalWrite(LedVerte, LOW);digitalWrite(LedJaune, HIGH); //Led verte On à l'allumage
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(pinButton); //Lecture de l'état du bouton

  //Changement de vitesse à chaque appuis
  if (buttonState == HIGH) { 
    if (iterator == 2) {
      iterator = 0;
    } else {
      iterator++;
    }

  //Allumage des LEDs en fonction de la vitesse du ventilateur
  if(iterator == 2){ digitalWrite(LedRouge, LOW);digitalWrite(LedVerte, HIGH);digitalWrite(LedJaune, HIGH);}
  else if(iterator == 1){ digitalWrite(LedRouge, HIGH);digitalWrite(LedVerte, HIGH);digitalWrite(LedJaune, LOW);}
  else { digitalWrite(LedRouge, HIGH);digitalWrite(LedVerte, LOW);digitalWrite(LedJaune, HIGH);}
      
  analogWrite(pinPWM, pwmValues[iterator]);
  delay(500);  // Ajout d'un délai pour éviter les rebonds du bouton
  }





  
}
