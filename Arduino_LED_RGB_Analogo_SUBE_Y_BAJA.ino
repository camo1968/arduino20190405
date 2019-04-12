#define GREEN 11
#define RED 6
#define BLUE 5
#define DELAYTIME 7
#define TOPE 500


// conectar el RF

int BUTTON_C_D0 = 28;
int BUTTON_B_D1 = 34;
int BUTTON_A_D2 = 40;
int BUTTON_D_D3 = 46;
char BOTON = 'Z';




void setup()
{
  pinMode(RED, OUTPUT);
  digitalWrite(RED, LOW);
  pinMode(BLUE, OUTPUT);
  digitalWrite(BLUE, LOW);
  pinMode(GREEN, OUTPUT);
  digitalWrite(GREEN, LOW);
  Serial.begin (9600);


  pinMode(BUTTON_C_D0, INPUT_PULLUP);
  pinMode(BUTTON_B_D1, INPUT_PULLUP);
  pinMode(BUTTON_A_D2, INPUT_PULLUP);
  pinMode(BUTTON_D_D3, INPUT_PULLUP);


}

void loop()
{




  if (digitalRead(BUTTON_B_D1) == HIGH) {
    BOTON = 'R';
    delay(200);
  }

  if (digitalRead(BUTTON_A_D2) == HIGH) {
    BOTON = 'B';
    delay(200);
  }

  if (digitalRead(BUTTON_C_D0) == HIGH) {
    BOTON = 'G';
    delay(200);
  }

  if (digitalRead(BUTTON_D_D3) == HIGH) {
    BOTON = 'N';
    delay(200);
  }


  switch (BOTON) {


    // for (variable índice; condición; incrementador)Este Bucle hace que se incremente desde i 0 a i 256 incrementadonse en una unidad cada vez

    case 'R':

      for (int i = 0; i < TOPE; i += 1)
      {
        analogWrite(RED, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.
        Serial.println(i);
        delay(DELAYTIME);// Es el que hace que el cambio de intensidad no se de de manera inmediata
      }

      for (int i = TOPE; i > 100; i = i - 1)
      {
        analogWrite(RED, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.
        Serial.println(i);
        delay(DELAYTIME);// Es el que hace que el cambio de intensidad no se de de manera inmediata
      }

      delay(3000);


      digitalWrite(RED, LOW);

      BOTON = 'Z';

      break ;

    case 'B':


      for (int i = 0; i < TOPE; i += 1)
      {
        analogWrite(BLUE, i / 10);
        Serial.println(i);
        delay(DELAYTIME);
      }

      for (int i = TOPE; i > 100; i = i - 1)
      {
        analogWrite(BLUE, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.
        Serial.println(i);
        delay(DELAYTIME);// Es el que hace que el cambio de intensidad no se de de manera inmediata
      }

      delay(3000);


      digitalWrite(BLUE, LOW);

      BOTON = 'Z';


      break;

    case 'G':

      for (int i = 0; i < TOPE; i += 1)
      {
        analogWrite(GREEN, i / 10);
        Serial.println(i);
        delay(DELAYTIME);
      }

      for (int i = TOPE; i > 100; i = i - 1)
      {
        analogWrite(GREEN, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.
        Serial.println(i);
        delay(DELAYTIME);// Es el que hace que el cambio de intensidad no se de de manera inmediata
      }

      delay(3000);


      digitalWrite(GREEN, LOW);

      BOTON = 'Z';

      break;

    case 'N':
      for (int i = 0; i < TOPE; i += 1)
      {
        analogWrite(GREEN, i / 10);
        analogWrite(BLUE, i / 10);
        analogWrite(RED, i / 10);
        Serial.println(i);
        delay(DELAYTIME);
      }

      for (int i = TOPE; i > 100; i = i - 1)
      {
        analogWrite(GREEN, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.
        analogWrite(BLUE, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.
        analogWrite(RED, i / 10); // Hace que el PIN se comporte segùn la funciòn FOR.

        Serial.println(i);
        delay(DELAYTIME);// Es el que hace que el cambio de intensidad no se de de manera inmediata
      }

      delay(3000);


      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, LOW);
      digitalWrite(RED, LOW);
      BOTON = 'Z';

      break;



  }

}
