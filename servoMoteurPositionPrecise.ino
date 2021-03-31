//https://projetsdiy.fr/piloter-servomoteur-arduino/

#include <Servo.h>
// angle de 0° à 180°
// sens aiguille d'une montre 0 -> 180
// inverse 180 -> 0

Servo myservo;           // création de l'objet myservo 

//cable jaune sur 6
int pin_servo = 6;       // Pin 6 sur lequel est branché le servo sur l'Arduino si vous utilisez un ESP32 remplacez le 6 par 4 et si vous utilisez un ESP8266 remplacez le 6 par 2
int position = 90;       // Position souhaitée

void setup() {
  myservo.attach(pin_servo);  // attache le servo au pin spécifié sur l'objet myservo
  myservo.write(position);
}

void loop() {}
