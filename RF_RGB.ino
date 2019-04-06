

int CD0 =28;
int AD1 =34;
int BD2 =40;
int XD3 =46;
int LED1 =35;  //VERDE
int LED2 =41;  //AZUL
int LED3 =47;    //ROJO


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(CD0,INPUT_PULLUP);
pinMode(AD1,INPUT_PULLUP);
pinMode(BD2,INPUT_PULLUP);
pinMode(XD3,INPUT_PULLUP);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:



  if (digitalRead(CD0) == HIGH) {

digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
    
  }

 if (digitalRead(AD1) == HIGH) {

digitalWrite(LED2,LOW);
digitalWrite(LED1,LOW);
digitalWrite(LED3,HIGH);
    
  }

if (digitalRead(BD2) == HIGH) {

digitalWrite(LED2,LOW);
digitalWrite(LED1,HIGH);
digitalWrite(LED3,LOW);
    
  }
if (digitalRead(XD3) == HIGH) {

digitalWrite(LED2,LOW);
digitalWrite(LED1,LOW);
digitalWrite(LED3,LOW);
    
  }


}
