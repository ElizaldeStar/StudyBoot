//----------------------------------------------------------------------------------------------------------------------------------//
const int potPin = A0; // Se declara con una constante entera el pin físico que se usara.
int valPot = 0; // Variable entera que contiene el valor obtenido de la lectura analógica del potenciometro.
int valor = 0; // Variable entera que tendrá el valor del mapa generado.

void setup() {
  Serial.begin(9600); // Uso de la librería serial para iniciar comunicaciones a 9600.
}

void loop() {
  valPot = analogRead(potPin); // Se iguala valPot con la función read para capturar el pin seleccionado.
  valor = map(valPot, 1, 1023, 0, 100); // Se crea el mapa de valores para ajustar el porcentaje leído y asignarlo a valor.
  Serial.print("El valor es: "); // Se imprime en pantalla el mensaje.
  Serial.print(valPot); // Se imprime valPot después del mensaje sobre la misma línea.
  Serial.print(" %"); // Se imprime un espacio y el %.
  Serial.print(valor); // Se imprime el valor registrado y convertido por la función map.
  Serial.println(); // Da un simple salto de línea para continuar imprimiendo.
  delay(10);  // Crea una espera o retardo de 10 mili segundos.
}
//----------------------------------------------------------------------------------------------------------------------------------//
// DOCUMENTACION:
/*
 Explicación del código:

 Primero se declara una variable constante de tipo entera para almacenar el número del pin físico que se usara como  conexión entre  el
 software y el hardware.

 const int valPot = A0;

 Después  se  crea una  variable  de tipo  entera para almacenar el valor del potenciómetro, aunque en este código no es necesario y se 
 puede omitir, lo coloque a modo de ver el panorama completo de como se debe tratar los datos en variables.

 int valor = 0;

 Después, en  la configuración setup, se abren las comunicaciones seriales entre el Arduino y la PC o plataforma, con la función  begin
 se le indica que inicie la comunicación y se haga a 9600 bits por segundo,  que es el estándar

 Serial.begin(9600); 

 Después, en el loop, se iguala la variable valor con el valor de lectura análoga y se entrega como parámetro el pin que está recibiendo
 la información valPot. Esto es para que la variable valor obtenga el mismo valor que valPot.

 valor = analogRead(valPot); 

 Después se usa la función serial y se indica con la función println para que imprima valPot y dé un salto de línea.

 Finalmente, se da un pequeño delay con la intención de hacer que espere un poco antes de ejecutar el siguiente bucle.

code by ElizaldeStar
*/