//----------------------------------------------------------------------------------------------------------------------------------//
// Encendido y apagado de diodo led por pulso PWM.
const int ledPin = 8; // Define la variable constante entera para el número de pin seleccionado a usar.

void setup() {
  pinMode(ledPin, OUTPUT); // Define la configuración del pin mediante el contenedor del pin y el estado I/O
}

// Dentro del bucle se crea un ciclo de tipo for con un contador que varia el PWM
void loop() {
  // Inicio del bucle for.
  for (int i = 0; i <= 255; i++){
    analogWrite(ledPin, i); // Toma el pin seleccionado y envia el contenido de i al pin de salida.
    delay(100); // crea un retrazo de 100 mili segundos para poder observar mejor en el ociloscopio.
  }

// Este ciclo es el mismo que el de arriba pero invertido para pasar de 255 a 0.
  for (int i = 255; i >=0; i--){
    analogWrite(ledPin, i); // Toma el pin seleccionado y envia el contenido de i al pin de salida.
    delay(100); // crea un retrazo de 100 mili segundos para poder observar mejor en el ociloscopio.
  }

}

// DOCUMENTACION:
//----------------------------------------------------------------------------------------------------------------------------------//
// Este código está creado con la intención de poder ver en el osciloscopio la señal del PWM, de  esta forma  se puede ver y  apreciar
// como se puede variar o mejor dicho como se varía desde un bucle for.
//
// Doy inicio al código creando una variable global de tipo constante entera para definir el pin que usaré para el resto del  proyecto
// y de esta forma asegurar que no se mueva o lo cambie por accidente con alguna variable u otro número.
//
//const int ledPin = 8; 
//
// Dentro de setup se debe lanzar la configuración inicial,  es  decir que  en  este  bloque se  configura  el inicio del Arduino y se
// establece la comunicación con el exterior, para eso se usa.
//
// pinMode(ledPin, OUTPUT);
//
// Que es una función y normalmente se usa con 2 parámetros, el primero es el número del pin donde se aplicara el estado sea entrada o
// salida I/O y finalmente el estado, en este caso no se usó un número sino una variable constante  entera global  declarada al inicio
// del programa, donde ledPin es el número del pin a usar y configurado en setup y OUTPUT indica que ese pin será de tipo salida PWM.
//
// Dentro del bucle primario, es decir (loop), se crean 2 bucles for, con la intención de hacer que la señal PWM, pueda variar y  este 
// apague y encienda el led y su luminosidad de la siguiente forma.
//
// Primero se crea el bucle for, y se le da un contador de tipo entero que es igual a 0 para que indie desde cero, después se le da la
// condición y es que mientras ese contador llamado i, sea menor o igual a 255 el bucle seguirá en ejecución y finalmente se le inicia
// que el contador debe subir 1 con i++.
//
// for (int i = 0; i <= 255; i++)
//
// Esto hace que cada vez que la condición no se cumpla, entonces suba el valor de i hasta llegar a 255 y romper el ciclo for.
//
// Al aumentar 1 vez el ciclo for se ejecutan las instrucciones que están  dentro del  mismo en el  orden en el que  se escribieron  y
// después regresa al ciclo y suma otro y ejecuta de nuevo hasta que el bucle se rompa al completar la condición.
//
// Los ejecutables son:
//
// analogWrite(ledPin, i);
// delay(100);
//
// Donde analogWrite es la función encargada de escribir cambios en tiempo real sobre el pin seleccionado, este pide 2 parámetros,  el
// número de pin seleccionado y el dato que va a imprimir o escribir, entonces esta función dice que escribirá en el pin número 8  los
// datos enteros guardados en la variable i que es el contador y ese es el PWM que va a variar gracias  a ese valor, después hace  una 
// espera de 100 milis segundos para verlo correctamente en el osciloscopio, finalmente el bucle siguiente hace lo contrario, es decir 
// este primer bucle va de 0 a 255 y cuando este se rompe ya no hay más que hacer y entra en  el segundo for, haciendo que la variable 
// quede en 255 y el segundo for indica que si la variable i está en 255 entonces le reste 1 y escriba los cambios sobre el PWM  hasta
// finalizar el ciclo.
//
//By ElizaldeStar



