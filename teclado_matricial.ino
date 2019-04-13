
#include <Keypad.h>

const byte Filas = 4;          //KeyPad de 4 filas
const byte Cols = 3;           //y 3 columnas

byte Pins_Filas[] = {11, 10, 9, 8};     //Pines Arduino para las filas.
byte Pins_Cols[] = { 7, 6, 5};     // Pines Arduino para las columnas.

char Teclas [ Filas ][ Cols ] =
{
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);


// int tiempo =0

String contrasenaFija = "1234";
String passw1 = "";
float inicio = 0, fin = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{

  if(teclado()){
    Serial.println("Hola");
  }else{
    Serial.println(":(");
  }

}


bool teclado(){
  char pulsacion = Teclado1.getKey() ;
  //    if (pulsacion != 0) {             // Si el valor es 0 es que no se

  if ( pulsacion) {
    passw1 = passw1 + pulsacion;
    Serial.println(passw1);      // se ha pulsado ninguna tecla
    inicio = millis();
  }

  if (passw1.length() < 4) {
    //Serial.println("siga digitando");
    fin = millis();
    if ((fin - inicio) >= 10000) {
      passw1 = "";
      //Serial.println(":(lkasdhjkasdjkahsdjkhasjkdh");
    }
  } else {
    if (passw1 == contrasenaFija ) {
      //Serial.println("Bienvenido");
      passw1 = "";
      return true;
    } else {
      //Serial.println(":(");
      passw1 = "";
      return false;
    }
  }
  
}
