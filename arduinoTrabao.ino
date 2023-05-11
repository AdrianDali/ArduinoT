// Incluye la librería para el control de motores a pasos
#include <Stepper.h>

#define buttonMode 2

#define ledPin01 5
#define ledPin02 1
#define ledPin03 2
#define ledPin04 3
#define ledPin05 4
#define ledPin06 5
#define ledPin07 6

#define buttonPin01 7
#define buttonPin02 8
#define buttonPin03 9
#define buttonPin04 10 
#define buttonPin05 11
#define buttonPin06 12
#define buttonPin07 13

int ledPin[] = {ledPin01, ledPin02,ledPin03, ledPin04, ledPin05, ledPin06, ledPin07};
int buttonPin[] = {buttonPin01, buttonPin02, buttonPin03, buttonPin04, buttonPin05, buttonPin06, buttonPin07};

// Define el número de pasos por revolución del motor
const int stepsPerRevolution = 200;

// Define el número de pines utilizados para el control del motor
const int motorPins[] = {2, 3, 4, 5};

// Crea un objeto de la clase Stepper
Stepper myStepper(stepsPerRevolution, motorPins[0], motorPins[1], motorPins[2], motorPins[3]);

int index = 0; // rango de 0 a 70  

void setup() {
  pinMode(buttonMode, INPUT);
  Serial.begin(9600);
    for (int i = 0; i < 7; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
  for (int i = 0; i < 7; i++) {
    pinMode(buttonPin[i], INPUT);
  }

  for (int i = 0; i < 4; i++) {
    pinMode(motorPins[i], OUTPUT);
  }
}
void loop() {
  if(digitalRead(buttonMode) == HIGH){
    // modo manual 
    //Serial.println("Modo manual");
    int buttonPressed = 0;
  
    for (int i = 0; i < 7; i++) {
          if (digitalRead(buttonPin[i]) == LOW) {
          Serial.println("Boton presionado");
          buttonPressed = i + 1;
          break;
    }
  }
  
  switch (buttonPressed) {
    case 1:
      int aux = 0; 
      Serial.println(" CASOOOOOO01###################################################");
      if(index == 0){
        index = index + 7; 
        Serial.println("######################index #####################CASO 01");
        Serial.println(index);
        delay(2000);
        }
      else if (index == 1){
        index = index; 
        Serial.println("######################index ##################### CASO 02");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 2){
        index = index -7; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 3){
        index = index -14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 4){
        index = index -21; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 5){
        index = index -28; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 6){
        index = index - 35; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 7){
        index = index - 42; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      
      
        
      Serial.println("Caso 01");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
    case 2:
      Serial.println(" CASOOOOOO02###################################################");
      if(index == 0){
        index = index + 14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
        }
      else if (index == 1){
        index = index + 7; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 2){
        index = index ; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 3){
        index = index -7; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 4){
        index = index -14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 5){
        index = index -21; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 6){
        index = index - 28; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 7){
        index = index - 35; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }

      Serial.println("Caso 02");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
    case 3:
      Serial.println(" CASOOOOOO03###################################################");
      if(index == 0){
        index = index + 21; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
        }
      else if (index == 1){
        index = index + 14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 2){
        index = index + 7; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 3){
        index = index ; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 4){
        index = index - 7; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 5){
        index = index - 14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 6){
        index = index - 21; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 7){
        index = index - 28; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }

    
      Serial.println("Caso 03");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
    case 4:

            if(index == 0){
        index = index + 28; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
        }
      else if (index == 1){
        index = index + 21; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 2){
        index = index + 14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 3){
        index = index + 7 ; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 4){
        index = index ; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 5){
        index = index - 7; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 6){
        index = index - 14; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }
      else if (index == 7){
        index = index - 21; 
        Serial.println("######################index");
        Serial.println(index);
        delay(2000);
      }

      
    
      Serial.println("Caso 04");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
    case 5:

      
      Serial.println("Caso 05");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
    case 6:
      Serial.println("Caso 06");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
    case 7:
      Serial.println("Caso 07");
      // Gira el motor en un sentido
      myStepper.setSpeed(60); // Define la velocidad del motor en RPM
      myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
      delay(1000); // Espera 1 segundo antes de cambiar de dirección

      break;
  }
    
    
     
   
  }
  else{
    Serial.println("modo automatico");
    
  }
  

}
