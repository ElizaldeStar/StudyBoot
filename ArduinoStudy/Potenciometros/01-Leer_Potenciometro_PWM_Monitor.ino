//----------------------------------------------------------------------------------------------------------------------------------//

const int valPot = A0; // Se declara una variable constante entera que recibe el pin fisico seleccionado para usarse.
int valor = 0; // se crea una variable entera para recibir el valor del potenciometro y se inicia en 0.

void setup() {
  Serial.begin(9600); // Se establece la comunicacion del puerto a 9600 Bits por segundo.
}

void loop() {
  valor = analogRead(valPot); // Se iguala el contenido de la variable valor a la lectura analogica del potenciometro.
  Serial.println(valor); // Usa la funcion serial para imprimir el valor guardado en la variable valor.
  delay(10); // crea un retraso de 10 mili segundos.
}

//----------------------------------------------------------------------------------------------------------------------------------//
//
// DOCUMENTACION:
//
// Para poder leer el rango de un potenciómetro en la plataforma Arduino, no es necesario usar pinMode, ya que este es únicamente para
// entradas y salidas digitales, en este circuito se inicia como cualquier otro, la diferencia es que en este se usa la entrada A0 que
// es la entrada analogía, a continuación su funcionamiento explicado:
//
// Primero se declara una variable constante de tipo entera para definir el pin  que  se usara, es el  puente físico  entre software y
// hardware.
//
// const int valPot = A0;
//
// Después se crea otra variable de tipo entera para almacenar el valor generado por el potenciómetro, esta debe inicializarse en 0 al
// igual que todas las variables que no contengan nada a menos que sea de tipo string.
//
// int valor = 0; 
//
// Ahora en la configuración setup del programa se establecerá directamente la función Serial y se le indicará que índice comunicación 
// haciendo uso de begin, esta requiere 1 parámetro y es la velocidad en barios o bits con el que enviará la información.
//
// Serial.begin(9600); 
//
// Dentro del loop se crea una instrucción para igualar la variable valor a la lectura de la función analogRead y se le indica que tome
// lo  que esté  pasando por la variable  valPot, significa  que  la función de  lectura del potenciómetro llamada analogRead tomara la
// lectura de la variable valPot que  es donde se  guardan los datos  recibidos del  potenciómetro y  la colocara dentro de la variable
// valor, la variable valor no es necesaria en este programa se coloca a modo de ejemplo de como se debe almacenar  la información  del
// potenciómetro para poderse usar después en cualquier otra parte.
//
// valor = analogRead(valPot);
//
// Finalmente, se usa Seria.Print para imprimir la variable valor y poder observar su valor en el monitor Arduino o en cualquier monitor 
// de tipo tty.
//
// Serial.println(valor); 
//
// La función print se le agrega  ln para que de un salto de línea y no quede todo en horizontal.
//
// code by ElizaldeStar