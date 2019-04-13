
float a = 10.7 , b = 5 , resultado = 0;
char tecla = 'z';
String  operacion = "";



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  //Serial.available()

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.read(tecla);

  switch (tecla) {

    case 'a':
      operacion = "suma";
      resultado = suma(a, b);
 //     imprimir(operacion, a, b, resultado);
      break;
    case 'b':
      operacion = "resta";
      resultado = resta(a, b);
//      imprimir(operacion, a, b, resultado);
      break;
    case 'c':
      operacion = "multiplicacion";
      resultado = multiplicacion(a, b);
//      imprimir(operacion, a, b, resultado);
      break;
  case 'd':
      operacion = "division";
      resultado = division(a, b);
//      imprimir(operacion, a, b, resultado);
      break;
    //case 'p':
      //imprimir();
     // break;

  }
}


float suma(a, b) {

  return resultado = a + b;

}



float resta(a, b) {

  return resultado = a - b;

}

float multiplicacion(a, b) {

  return resultado = a * b;

}

float division(a, b) {

  return resultado = a / b;

}


//String imprimir(operación, a, b, resultado) {

  //Serial.println(operación, a, b, resultado);

//}
