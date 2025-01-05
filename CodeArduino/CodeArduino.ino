const int pinButton = 5; 
const int LedVerte = 8; 
const int LedRouge = 6;
const int LedJaune = 7; 
const int pinPWM = 11;   
int pwmValues[] = {255, 150, 0};  //3 vitesses definies pr le ventilateur
int iterator = 2; 
int buttonState = HIGH; 

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(pinPWM, OUTPUT);
  pinMode(LedVerte, OUTPUT);
  pinMode(LedRouge, OUTPUT);
  pinMode(LedJaune, OUTPUT);
  
  analogWrite(pinPWM, pwmValues[iterator]); //Vitesse maximum à l'allumage
  digitalWrite(LedRouge, HIGH);digitalWrite(LedVerte, LOW);digitalWrite(LedJaune, LOW); //Led rouge On à l'allumage
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(pinButton); //Lecture de l'état du bouton$


  //Changement de vitesse à chaque appuis
  if (buttonState == LOW) { 

    if (iterator == 2) {
      iterator = 0;
    } else {
      iterator++;
    }

  //Allumage des LEDs en fonction de la vitesse du ventilateur
  if(iterator == 2){ digitalWrite(LedRouge, HIGH);digitalWrite(LedVerte, LOW);digitalWrite(LedJaune, LOW); Serial.println("ROUGE");}
  else if(iterator == 1){ digitalWrite(LedRouge, LOW);digitalWrite(LedVerte, LOW);digitalWrite(LedJaune, HIGH);Serial.println("JAUNE");}
  else { digitalWrite(LedRouge, LOW);digitalWrite(LedVerte, HIGH);digitalWrite(LedJaune, LOW);Serial.println("VERT");}
      
  analogWrite(pinPWM, pwmValues[iterator]);
  delay(500);  // Ajout d'un délai pour éviter les rebonds du bouton
  }





  
}
