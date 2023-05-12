// Incluye la librería para el control de motores a pasos
#include <Stepper.h>

#define STEP 2
#define DIR 1


#define buttonMode 21

#define ledPin01 14
#define ledPin02 15
#define ledPin03 16
#define ledPin04 17
#define ledPin05 18
#define ledPin06 19
#define ledPin07 20

#define buttonPin08 10
#define buttonPin01 3
#define buttonPin02 4
#define buttonPin03 5
#define buttonPin04 6
#define buttonPin05 7
#define buttonPin06 8
#define buttonPin07 9


int ledPin[] = { ledPin01, ledPin02, ledPin03, ledPin04, ledPin05, ledPin06, ledPin07 };
int buttonPin[] = { buttonPin01, buttonPin02, buttonPin03, buttonPin04, buttonPin05, buttonPin06, buttonPin07, buttonPin08 };

// Define el número de pasos por revolución del motor
const int stepsPerRevolution = 200;

// Define el número de pines utilizados para el control del motor
//const int motorPins[] = { 2, 3, 4, 5 };

// Crea un objeto de la clase Stepper
//Stepper myStepper(stepsPerRevolution, motorPins[0], motorPins[1], motorPins[2], motorPins[3]);

int index = 0;  // rango de 0 a 70
int actual =0;
void setup() {
  //motor a pasos arduini
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);


  pinMode(buttonMode, INPUT_PULLUP);
  Serial.begin(9600);
  for (int i = 0; i < 7; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
  for (int i = 0; i < 8; i++) {
    pinMode(buttonPin[i], INPUT_PULLUP);
  }

  //for (int i = 0; i < 4; i++) {
  //  pinMode(motorPins[i], OUTPUT);
  //}
}
void loop() {
  if (digitalRead(buttonMode) == HIGH) {
    // modo manual
    //Serial.println("Modo manual");
    int buttonPressed = 0;

    for (int i = 0; i < 8; i++) {
      if (digitalRead(buttonPin[i]) == LOW) {
        Serial.println("Boton presionado");

        buttonPressed = i + 1;
        Serial.println(buttonPressed);
        break;
      }
    }

    switch (buttonPressed) {
      case 1:
        ApagarLeds();
        digitalWrite(ledPin[1], HIGH);
        Serial.println("##################Serial 01");
        if (index == 0) {
          actual = index;
          index = index;
          calculo(actual, index);
          Serial.println("######################index #####################CASO 01");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index;
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index ##################### CASO 02");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index;
          index = index - 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index; 
          index = index - 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index; 
          index = index - 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index;
          index = index - 40;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index; 
          index = index - 48;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index; 
          index = index - 56;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }



        //Serial.println("Caso 01");
        // Gira el motor en un sentido
        //myStepper.setSpeed(60); // Define la velocidad del motor en RPM
        //myStepper.step(stepsPerRevolution); // Gira el motor 1 revolución (360 grados)
        delay(1000);  // Espera 1 segundo antes de cambiar de dirección

        //Código a ejecutar si variable es igual a 1
        break;
      case 2:
        ApagarLeds();
        digitalWrite(ledPin[2], HIGH);
        Serial.println("##################Serial02");
        if (index == 0) {
          actual = index; 
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index;
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index ;
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index; 
          index = index - 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index; 
          index = index - 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index;
          index = index - 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual =index;
          index = index - 40;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual =index ;
          index = index - 48;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }

        // Gira el motor 1 revolución (360 grados)
        delay(1000);  // Espera 1 segundo antes de cambiar de dirección
        break;
      case 3:
        ApagarLeds();
        digitalWrite(ledPin[3], HIGH);
        Serial.println("##################Serial03");
        if (index == 0) {
          actual = index;
          index = index + 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index;
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index;
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index;
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index;
          index = index - 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index; 
          index = index - 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index; 
          index = index - 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index ;
          index = index - 40;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }

        // Gira el motor 1 revolución (360 grados)
        delay(1000);  // Espera 1 segundo antes de cambiar de dirección


        //Código a ejecutar si variable es igual a 3
        break;
      case 4:
        ApagarLeds();
        digitalWrite(ledPin[4], HIGH);
        Serial.println("###################Serial04");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index;
          index = index + 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index;
          index = index + 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index ;
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index; 
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index; 
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index; 
          index = index - 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index;
          index = index - 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index; 
          index = index - 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }

        //Código a ejecutar si variable es igual a 4
        break;
      case 5:
        ApagarLeds();
        digitalWrite(ledPin[5], HIGH);
        Serial.println("####################Serial05");
        Serial.println("###################Serial04");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index; 
          index = index + 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index; 
          index = index + 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index; 
          index = index + 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index;
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index; 
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index ;
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index; 
          index = index - 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index;
          index = index - 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }

        //Código a ejecutar si variable es igual a 5
        break;
      case 6:
        ApagarLeds();
        digitalWrite(ledPin[6], HIGH);
        Serial.println("#$###################Serial06");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index; 
          index = index + 40;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index; 
          index = index + 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index; 
          index = index + 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index; 
          index = index + 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index; 
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index;
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index;
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index;
          index = index - 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }
        //Código a ejecutar si variable es igual a 6
        break;
      case 7:
        ApagarLeds();
        digitalWrite(ledPin[7], HIGH);
        Serial.println("#$###################Serial07");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index; 
          index = index + 48;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index; 
          index = index + 40;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index;
          index = index + 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index;
          index = index + 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index;
          index = index + 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index;
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index; 
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index;
          index = index - 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }
        //Código a ejecutar si variable es igual a 7
        break;
      case 8:
        ApagarLeds();
        digitalWrite(ledPin[7], HIGH);
        Serial.println("S######################Serial08");
        Serial.println("#$###################Serial07");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index; 
          index = index + 56;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 8) {
          actual = index;
          index = index + 48;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 16) {
          actual = index; 
          index = index + 40;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 24) {
          actual = index;
          index = index + 32;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 32) {
          actual = index;
          index = index + 24;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 40) {
          actual = index; 
          index = index + 16;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 48) {
          actual = index; 
          index = index + 8;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        } else if (index == 56) {
          actual = index;
          index = index;
          calculo(actual, index);
          Serial.println("######################index");
          Serial.println(index);
          delay(2000);
        }
        //Código a ejecutar si variable es igual a 8
        break;
      default:
        //Código a ejecutar si variable no coincide con ningún caso
        break;
    }






  } else {
    Serial.println("modo automatico");
  }
}


void ApagarLeds() {
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
}


int calculo(int actual, int siguiente) {
  int aux = siguiente - actual;
  Serial.println("RECIDUO DE LA RESTQA");
  Serial.println(aux);
  if (aux < 0) {
    digitalWrite(DIR, LOW);
    Serial.println("Se restara");
      aux = aux * 500;
    Serial.println("Nuevo auxiliar");
    Serial.println(aux);
    Serial.println("ENTRANDO AL FOR");
    digitalWrite(DIR, HIGH);
    for (int i = 0; i > aux; i--) {
      //Serial.println("MOVIMIENTO DEL MOTRO");
      //Serial.println(i);
      digitalWrite(STEP, HIGH);
      delay(1);
      digitalWrite(STEP, LOW);
      //delay(1);
    }
  } else {
    digitalWrite(DIR, HIGH);
    Serial.println("se sumara");
    aux = aux * 500;
    for (int i = 0; i < aux; i++) {
      digitalWrite(STEP, HIGH);
      delay(1);
      digitalWrite(STEP, LOW);
      //delay(1);
    }
  }
  return aux;
}
