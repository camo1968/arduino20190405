

int CD0 = 28;
int AD1 = 34;
int BD2 = 40;
int XD3 = 46;
int LED1 = 35; //VERDE
int LED2 = 41; //AZUL
int LED3 = 47; //RO
int BOTON = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(CD0, INPUT_PULLUP);
  pinMode(AD1, INPUT_PULLUP);
  pinMode(BD2, INPUT_PULLUP);
  pinMode(XD3, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

}

void loop() {
  


  if (digitalRead(AD1) == HIGH) {
    BOTON = 1;
    delay(200);
  }

  if (digitalRead(BD2) == HIGH) {
    BOTON = 2;
    delay(200);
  }

  if (digitalRead(CD0) == HIGH) {
    BOTON = 3;
    delay(200);
  }

  if (digitalRead(XD3) == HIGH) {
    BOTON = 4;
    delay(200);
  }


  switch (BOTON) {

    case 1:

      digitalWrite(LED2, LOW);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED3, LOW);
      Serial.println("se oprimió el botón B");
      

      break ;


    case 2:


      digitalWrite(LED2, LOW);
      digitalWrite(LED1, LOW);
      digitalWrite(LED3, HIGH);
Serial.println("se oprimió el botón A");
      
      break ;

    case 3:



      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);

Serial.println("se oprimió el botón C");
      
      break ;

    case 4:



      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
Serial.println("se oprimió el botón D");
      


      break ;



  }
}
