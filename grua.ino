
//incluir la libreria servo
#include <Servo.h>
//Definicion de los servos  son los dos motores de la grua 
Servo servo1;
Servo servo2;

// se declara la variable  de los servomotares se inicia en 90° por que son servomotores de 180°
int eje1=90;
int eje2=90;

void setup(){  

  // se declara en donde este los servomotores en los pines que este
  servo1.attach(7);
  servo2.attach(6);
  // se inicializa los servo motores
  servo1.write(90);
  servo2.write(90);
}
void loop(){
  //SERVO 1
  // direccion en la que se le esta dando al jostick
  // es el limite para que reconozca 
  if (analogRead(0)<200 && eje1<180){
    eje1++;
    servo1.write(eje1);
  }
  if (analogRead(0)>700 && eje1>0){
    eje1--;
    servo1.write(eje1);
  }
  //SERVO 2

  // sirve para mover en el otro eje el jostick con sus limites
  if (analogRead(1)<200 && eje2<180){
    eje2++;
    servo2.write(eje2);
  }
  if (analogRead(1)>700 && eje2>0){
    eje2--;
    servo2.write(eje2);
  }
  //velocidad en la que se ejecuta codigo
  delay(15);
}