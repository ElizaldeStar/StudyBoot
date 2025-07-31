//----------------------------------------------------------------------------------------------------------------------------------//
const int potPin = A0; // Se selecciona el pin físico que se usara para comunicación
const int ledPin = 6; // Se selecciona el pin físico que se usara para el diodo Led.

int valPot = 0; // Se declara la variable que almacenara los datos del potenciómetro
int valLed = 0; // Se declara la variable que almacenara los datos del diodo Led.

void setup() {
  pinMode(ledPin, OUTPUT); // Se coloca el pin del diodo led en estado de salida con la función pinMode, ledPin en OUTPUT.
  Serial.begin(9600); // Se establece el inicio de la comunicación serial con la función begin a 9600b
}

void loop() {
  valPot = analogRead(potPin); // Se lee el valor del potenciómetro mediante la función analogRead en el potPin y se iguala a valPot.
  valLed = map(valPot, 0 , 1023, 0, 255); // Ahora se crea el mapa para ajustar la salida del potenciómetro con el PWM del led, con la variable valPot para lectura y valLed para PWM de salida.
  analogWrite(ledPin, valLed); // Escribe los datos obtenidos en el mapa en valLed para PWM.
  Serial.print(" Valor Pot: "); // Imprime el mensaje.
  Serial.print(valPot); // Imprime el valor de valPot.
  Serial.print(" Valor Led: "); // Imprime el mensaje.
  Serial.print(valLed); // Imprime el valor de valLed.
  Serial.print("%"); // Imprime el mensaje.
  Serial.println(); // Imprime un salto de línea.
  delay(10); // Tiempo de espera de 10 mili segundos.
}
//----------------------------------------------------------------------------------------------------------------------------------//
//
// EXPLOTACIÓN:
//
/*
 El programa inicia declarando una constante de tipo entera, que tendrá el pin físico seleccionado para usar en este  proyecto, de  la
 misma forma el segundo pin para el led, se crea una constante de tipo entera y se le asigna el pin de salida del Dido led.

 const int potPin = A0;
 const int ledPin = 6;

 Seguidamente, se crean 2 nuevas variables de tipo entero para guardar valores más adelante, se crea una para el potenciómetro y  otra
 para el diodo led. Estas se declaran en cero para evitar problemas futuros.

 int valPot = 0;
 int valLed = 0; 

 Ahora  es  momento  de  configurar  setup,  para  ello  se  usarán  2 instrucciones, la  prima como es costumbre es la de iniciar  las 
 comunicaciones desde la placa con el software usando la librería  Seria. Y la función  Begin  seguidamente del  número  de  bits   por
 segundo a la que se establecerá la comunicación en este  caso 9600,  la  segunda  instrucción es para inicializar el pin  seleccionado 
 para el led y colocarlo en modo salida, para esto  solicita  2  parámetros, uno  que es  el  valor  del pin físico o su variable y  el
 segundo la entrada o salida, en este caso es salida.

 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);

 Continuando con el programa en el área de loop,  primero  se  crea  una  instrucción  donde se  iguala el  valor de potPin dentro de la 
 variable entera valPot, cabe destacar que se puede omitir  esta variable y leer directamente, pero  es  mejor  siempre  guardarla  para
 procesarla después, lo que hace  la  instrucción  es que  valPot es  igual a la  lectura leída del análogo en el pin número A0 que está 
 seleccionado en la variable de potPin.

 valPot = analogRead(potPin);

 A continuación se hace uso de la variable valLed, esta se creó para usar la  función map, esta  función permite mapear directamente los
 valores y después escalarlos a otra frecuencia, porcentaje o salida, es decir se ajusta a la necesidad,  funciona de la siguiente forma,
 primero se coloca la variable que recibiría la lectura en este caso valPot, después los  2 dígitos indicaran cuál es el valor mínimo de
 lectura y el valor máximo, ya que este  es un  potenciómetro su valor  predeterminado es de 0  para  totalmente  cerrado  y  1023  para
 totalmente abierto, las siguientes 2 cifras representan la escala si se quiere en porcentaje se pone 0 y la escala en 100 para  obtener
 un porcentaje de 0 a 100, en este caso no está procesado sino mapeado para el PWM del led que su máximo es de 255, es decir de 0 a 255.

 valLed = map(valPot, 0 , 1023, 0, 255);

 Una vez creado el mapa es momento de aplicar los cambios a la salida PWM del diodo led en el Pin número 6 de Arduino, por lo  tanto,  se
 usa  la instrucción analogWrite y se le da 2 Parámetros, el primero es donde está el led en su pin físico, y el segundo  es el mapa  del
 PWM, donde enviara y escribirá que el diodo led tenga el mismo valor que lo obtenido en la lectura del potenciómetro.

 analogWrite(ledPin, valLed); 

 Para terminar y concluir el programa se usa una serie de mensajes impresos en pantalla para acomodar la información haciendo uso  de  la
 librería Serial y su función print y println.

 Serial.print(valPot); // Imprime el valor de valPot.
 Serial.print(" Valor Led: "); // Imprime el mensaje.
 Serial.print(valLed); // Imprime el valor de valLed.
 Serial.print("%"); // Imprime el mensaje.
 Serial.println(); // Imprime un salto de línea.
 delay(10); // Tiempo de espera de 10 mili segundos.


Code by ElizaldeStar
*/