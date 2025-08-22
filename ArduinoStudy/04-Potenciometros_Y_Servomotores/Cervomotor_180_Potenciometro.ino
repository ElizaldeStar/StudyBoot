//----------------------------------------------------------------------------------------------------------------------------------//
#include <Servo.h>  // Importa la librería Servo de Arduino para control de servomotores.

const int pot = A0; // Se selecciona el pin físico que se usara para comunicación.
const int servo = 9; // Se selecciona el pin físico que usara el servomotor.
int lectura = 0; // Se crea una variable de tipo entera para almacenar el valor del potenciómetro.
int angulo = 0; // Se crea una variable de tipo entera para almacenar el valor angular del servomotor.

Servo myservo; // Creación de un objeto virtual para comunicar el servomotor con el mundo físico.

void setup() {
  Serial.begin(9600); // Se establece el inicio de la comunicación serial con la función begin a 9600b
  myservo.attach(servo); // Se selecciona el pin que usara el servomotor que se defino arriba.
}

void loop() {
  lectura = analogRead(pot); // Se lee el valor del potenciómetro mediante la función analogRead.
  angulo = map(lectura, 1,1023,0,180); // Se iguala la variable angulo al mapa de lectura del potenciometro y se configura en grados.
  myservo.write(angulo); // Se lee el valor del potenciómetro mediante la función analogRead en el potPin y se iguala a valPot.
  Serial.print("EL anuglo es: "); // Imprime el mensaje.
  Serial.print(angulo); // Imprime el valor de angulo.
  Serial.print(" Valor Pot: "); // Imprime el mensaje.
  Serial.print(lectura); // Imprime el valor de lectura.
  Serial.println(); // Imprime un salto de línea.
  delay(10); // Da una espera de 10 mili segundos antes de la siguiente instruccion.
}
//----------------------------------------------------------------------------------------------------------------------------------//
//
// EXPLOTACIÓN:
/*
 Este programa, ya que utiliza servomotores, usa librerías externas que deben ser importadas, para iniciar se importara la librería de
 control de servomotores Servo.h.
 
 #include<Servo.h>

 A continuación se crean dos variables constantes de tipo entero con la intención de usarlas  para seleccionar los pines  físicos  del
 Arduino que usaran el potenciómetro y el servomotor.

 const int pot = A0;
 const int servo = 9;

 Después se crean 2 variables de tipo enteras con la  intención de  usarlas  para almacenar  y tratar la  información  del mapa y  los
 valores del ángulo  ajustados, lectura  tomara los datos del potenciómetro y ángulo  tomara  los  datos de la función map, siempre se
 igualan a 0 para evitar problemas futuros.

 int lectura = 0;
 int angulo = 0;

 A continuación se crea un objeto virtual para comunicar nuestro servomotor físico con el software, para ello se utiliza:

 Servo myservo;

 Primero se  iguala la librería Servo al objeto es muy importante que la libera se escriba correctamente como Servo y no sin mayúscula, 
 ya que si no dará un error porque esa palabra está  reservada  para la misma, en  cuanto al nombre myservo puede  ser cualquier nombre
 este es simplemente el objeto que recibirá la conexión.

 Ahora es momento de iniciar la configuración inicial del software, para ello se usa la librería Serial y su función begin,  esto  crea
 una conexión entre  el Arduino y el monitor  con el mismo también se puede enviar y recibir comandos, por ahora únicamente se enfocará 
 en monitorear un canal de salida para ver el resultado final.

 Para configurar el pin y o puerto de salida de nuestro servomotor se usa Servo y su función attach que recibe como parámetro el puerto 
 o pin donde este se encuentra conectado donde se escribirían los cambios del propio servomotor, es decir el cable naranja de control.

 En el apartado del bucle se declaran 2  variables simples  primero se  iguala la  variable de ángulo  a  analogRead  que  recibe  como
 parámetro el valor del potenciómetro, y la  variable ángulo que está igualada a  la función map que recibe como parámetro base lectura 
 que contiene el valor del potenciómetro, con  un valor mínimo de  0 y un valor máximo  de 1023 que es el valor máximo permitido en ese
 canal, seguido del valor mínimo que tendrá el servomotor y el valor máximo que tendrá el servomotor de esta forma se obtiene el ángulo 
 en el que el propio servomotor se moverá, finalmente se utiliza la función con la variable  del servo para  escribir los datos  que en 
 este caso es myservo.write que recibe como parámetro el ángulo con el contenido ajustado del mapa donde se escribirán los cambios para 
 que este gire.

 Para completar el monitoreo sé usarla la librería Serial para imprimir  mensaje y el estado de cada una de las variables en el monitor 
 del software Arduino o cualquier software de monitor que se usa.

 Lo que hace este programa es manipular el movimiento de 0 a 180 del servomotor atreves del potenciómetro.
 
*/