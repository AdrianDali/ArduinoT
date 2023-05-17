// Incluye la librería para el control de motores a pasos
#include <Stepper.h>

#define STEP 24
#define DIR 23

#define STEP2 25
#define DIR2 26



#define buttonMode 33

#define ledPin01 24
#define ledPin02 25
#define ledPin03 26
#define ledPin04 27
#define ledPin05 28
#define ledPin06 29
#define ledPin07 30
#define ledPin08 31
#define ledPin09 32
#define ledPin10 33

#define buttonPin08 7
#define buttonPin01 0
#define buttonPin02 1
#define buttonPin03 2
#define buttonPin04 3
#define buttonPin05 4
#define buttonPin06 5
#define buttonPin07 6

#define enable 22

int ledPin[] = { ledPin01, ledPin02, ledPin03, ledPin04, ledPin05, ledPin06, ledPin07, ledPin08, ledPin09, ledPin10 };
int buttonPin[] = { buttonPin01, buttonPin02, buttonPin03, buttonPin04, buttonPin05, buttonPin06, buttonPin07, buttonPin08 };
int posicion = 0;
// Define el número de pasos por revolución del motor
const int stepsPerRevolution = 200;

// Define el número de pines utilizados para el control del motor
//const int motorPins[] = { 2, 3, 4, 5 };

// Crea un objeto de la clase Stepper
//Stepper myStepper(stepsPerRevolution, motorPins[0], motorPins[1], motorPins[2], motorPins[3]);

int index = 0;  // rango de 0 a 70
int actual = 0;
void setup() {
  ApagarLeds();
  //motor a pasos arduini
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(enable, OUTPUT);
  digitalWrite(enable, HIGH);
  digitalWrite(DIR, HIGH);

  //motor 2 arduini
  pinMode(STEP2, OUTPUT);
  pinMode(DIR2, OUTPUT);


  pinMode(buttonMode, INPUT_PULLUP);
  Serial.begin(9600);
  for (int i = 0; i < 10; i++) {
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
  int  hola = 0; 
  if(hola == 0){
  //if (digitalRead(buttonMode) == HIGH) {
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
        digitalWrite(ledPin[0], HIGH);
        Serial.println("##################Serial 01");
        if (index == 0) {
          actual = index;
          index = index;
          
        
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          
          Serial.println("######################index #####################CASO 01");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index - 8;
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index ##################### CASO 02");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index - 16;   
          RegresoSegundoMotor();      
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index - 24;   
          RegresoSegundoMotor();      
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index - 32;   
          RegresoSegundoMotor();      
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {

          actual = index;
          index = index - 40;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index - 48;   
          RegresoSegundoMotor();      
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {

          actual = index;
          index = index - 56;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        }

        break;
      case 2:
        ApagarLeds();
        digitalWrite(ledPin[1], HIGH);
        Serial.println("##################Serial02");
        if (index == 0) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index - 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index - 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index - 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index - 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index - 40;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index - 48;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        }

        // Gira el motor 1 revolución (360 grados)
        delay(1000);  // Espera 1 segundo antes de cambiar de dirección
        break;
      case 3:
        ApagarLeds();
        digitalWrite(ledPin[2], HIGH);
        Serial.println("##################Serial03");
        if (index == 0) {
          actual = index;
          index = index + 16;     
            
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          Serial.println("Activacion del segundo motor");
          MovimientoSegundoMotor();  
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index - 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index - 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index - 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index - 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index - 40;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        }

        // Gira el motor 1 revolución (360 grados)
        delay(1000);  // Espera 1 segundo antes de cambiar de dirección


        //Código a ejecutar si variable es igual a 3
        break;
      case 4:
        ApagarLeds();
        digitalWrite(ledPin[3], HIGH);
        Serial.println("###################Serial04");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index;
          index = index + 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index + 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index - 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index - 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index - 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index - 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        }

        //Código a ejecutar si variable es igual a 4
        break;
      case 5:
        ApagarLeds();
        digitalWrite(ledPin[4], HIGH);
        Serial.println("####################Serial05");
        Serial.println("###################Serial04");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index;
          index = index + 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index + 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index + 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index - 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index - 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index - 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        }

        //Código a ejecutar si variable es igual a 5
        break;
      case 6:
        ApagarLeds();
        digitalWrite(ledPin[5], HIGH);
        Serial.println("#$###################Serial06");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index;
          index = index + 40;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index + 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index + 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index + 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index - 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index - 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        }
        //Código a ejecutar si variable es igual a 6
        break;
      case 7:
        ApagarLeds();
        digitalWrite(ledPin[6], HIGH);
        Serial.println("#$###################Serial07");
        Serial.println(" CASOOOOOO04###################################################");
        if (index == 0) {
          actual = index;
          index = index + 48;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index + 40;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index + 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index + 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index + 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index - 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
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
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 8) {
          actual = index;
          index = index + 48;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 16) {
          actual = index;
          index = index + 40;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 24) {
          actual = index;
          index = index + 32;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 32) {
          actual = index;
          index = index + 24;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 40) {
          actual = index;
          index = index + 16;         
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 48) {
          actual = index;
          index = index + 8;          
          RegresoSegundoMotor();
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
        } else if (index == 56) {
          actual = index;
          index = index;          
          calculo(actual, index);
          MovimientoSegundoMotor();
          
          Serial.println("######################index");
          Serial.println(index);
          delay(200);
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

void RegresoSegundoMotor(){
  if (posicion == 1) {
    digitalWrite(DIR2, HIGH);
    for (int i = 0; i < 2000; i++) {
      digitalWrite(STEP2, HIGH);
      delay(1);
      digitalWrite(STEP2, LOW);
      //delay(1);
    }
    posicion = 0;

  }
}

void MovimientoSegundoMotor() {

  if (posicion == 1) {
    digitalWrite(DIR2, HIGH);
    for (int i = 0; i < 2000; i++) {
      digitalWrite(STEP2, HIGH);
      delay(1);
      digitalWrite(STEP2, LOW);
      //delay(1);
    }
    posicion = 0;

  } else if (posicion == 0) {
    digitalWrite(DIR2, LOW);
    for (int i = 0; i < 2000; i++) {
      digitalWrite(STEP2, HIGH);
      delay(1);
      digitalWrite(STEP2, LOW);
      //delay(1);
    }
    posicion = 1; 

  }
}

int calculo(int actual, int siguiente) {
  int aux = siguiente - actual;
  if (aux < 0) {
    
    Serial.println("######################SE RESTARA LA INFORMACION######################");
    aux = aux * 100;
    digitalWrite(DIR, LOW);
    for (int i = 0; i > aux; i--) {
      //Serial.println("MOVIMIENTO DEL MOTRO");
      //Serial.println(i);
      digitalWrite(STEP, HIGH);
      delay(1);
      digitalWrite(STEP, LOW);
      //delay(1);
    }
  } else {
    
    Serial.println("#############SE SUMARA LA INFORMACION#############################");
    aux = aux * 100;
    digitalWrite(DIR, HIGH);
    for (int i = 0; i < aux; i++) {
      digitalWrite(STEP, HIGH);
      delay(1);
      digitalWrite(STEP, LOW);
      //delay(1);
    }
  }
  return aux;
}

int Linealizacion(int distancia){

  nueva = distancia * 200;
  return distancia; 




}
