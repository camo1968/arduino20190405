char teclado = 's';
int x = 0 ;
int LED1 = 39;
int LED2 = 41;
int LED3 = 43;
int LED4 = 45;


void setup() {
  // put your setup code here, to run once:


  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {
    teclado = Serial.read();
    switch (teclado) {
      case 'A':

      for (int x = 0 ; x < 10 ; x++) {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
        delay(10);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
       delay(300);
      }
        break;

      case 'Z':
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        delay(2004);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
//        delay(104);
        break;

      case 'H':
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED4, HIGH);
        delay(500);
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
//        delay(104);
        break;

      default:
        delay(1000);

    }
  }
}
