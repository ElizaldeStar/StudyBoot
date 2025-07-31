const int ledPin = 8;  //           Selecciona el (GPIO15) de la RPY Pico donde se enviara el pulso de encendido, esto es solo
//                                  una variable constante que contiene el (GPIO) que se usara.
void setup() {
  pinMode(ledPin, OUTPUT);  //    Se coloca pin mode a modo de seleccion de pin en variable  y se pone en estado  de  salida
}  //                             pinMode siempre pide 2 parametros, el (GPIO) a usar y el estado (OUTPU/INPUT).

void loop() {
  digitalWrite(ledPin, HIGH);  // Enciende el led escribiendo los cambios sobre el (GPIO) seleccionado y colocandolo en alto
  delay(1000);                 //                Espera 1 segundo para hacer la siguiente instruccion.
  digitalWrite(ledPin, LOW);   //  Apaga el led
  delay(1000);                 //                Espera 1 segundo para hacer la siguiente instruccion.
}

// Documentación:
//
// Para poder encender y apagar un led usando Arduino es necesario establecer primero el número de pin que  se va a utilizar,
// esto lo que indica es que pin físico se usara a modo de puerto o conexión, para ello se usa  una variable  común  de tipo
// entera, pero para mí esta debe de colocarse como una constante, ya que este valor no cambiara y el lenguaje es c++ /(cpp)
// para los amigos.
//
// const int ledPin=8;
//
// Se declara una constante de tipo entera bajo el nombre de ledPin, y finalmente se iguala al número de pin que se utilizara,
// en este caso será el 8.
//
// Continuando con la configuración del setup, se debe colocar el estado inicial del pin mediante su función, para ello se usa
// la función  (pinMode) que llama a 2 parámetros, esta función le indica al pin utilizado en que modo debe ponerse, para ello
// el primer parámetro solicitado es cual es el pin que recibirá esta función, es decir el número o variable que lo contiene y
// el segundo parámetro el tipo de modo, si es entrada, salida u otra cosa, en este caso es OUTPUT, dejando la línea  de  esta
// forma.
//
// pinMode(ledPin, OUTPUT);
//
// Ahora para la parte del loop es necesario indicar una función que haga que la puerta o el PMW se ponga en alto o en bajo se
// usa la función (digitalWrite) algo así como escribir los cambios y esta función tiene 2 parámetros nuevamente el primero es
// el pin que se colocara en alto o bajo, en este caso su variable  definida desde  el inicio, y  después el  estado que  este
// tendrá, como queremos encenderlo entonces su valor será (HIGH), dejando la instrucción de la siguiente forma.
//
// digitalWrite(ledPin, HIGH);
// La siguiente instrucción es un (delay) su función es esperar o dar un tiempo de espera, esta solo tiene un parámetro  y  es
// su número en unidades de tiempo donde 1000 = a 1 segundo.
//
// delay(1000);
//
// finalmente, para apagar el led, se usa exactamente la misma función que se usó para encender y este es: digitalWrite con sus
// 2 parámetros, el primero donde se aplicará el cambio que es la variable que lo contiene ledPin, y el otro el estado, LOW  en
// este caso para apagarlo.
//
// digitalWrite(ledPin, LOW);
//
//
// EXPLICACION BREVE:
// Este código  hace que el  led  conectado al pin 8 del Arduino, en su parte positiva mande una señal PWM para encender el led
// con toda su intensidad de un golpe, este envía el pulso por el  pin 8, pasa por su parte  positiva y de  después  cruza a la
// parte negativa, que está conectada a una resistencia de 220  ohmios,  y a  su vez  su extremo a GND del propio Arduino, para
// poder alimentar al diodo led, cuando entre en ejecución primero se configura  el  número  de  pin en  una variable constante,
// después se establece la comunicación con el propio  pin colocando  el pin en modo  salida, finalmente en  la  parte del loop,
//  se establece que se creara un bucle infinito donde el diodo leed recibirá la señal PWM en alto, esperará 1 segundo, después
// abajará la señal PWM abajo y se apagará, esperará 1 segundo y volverá a repetir el mismo ciclo una y otra vez.
//
// By ElizaldeStar.