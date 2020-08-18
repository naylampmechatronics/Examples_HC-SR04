/*
 Distancia Serial

 Ejemplo para el sensor ultrasónico HC-SR04, obtiene la distancia en centímetros y lo envía por el hardware serial (puede visualizar las mediciones desde el monitor serial del IDE Arduino)
 
 Conexiones:
  -------------------
  HC-SR04  -> Arduino 
  -------------------
  pin VCC  -> 5V 
  pin TRIG -> D2 
  pin ECHO -> D3 
  pin GND  -> GND 
  -------------------
  *Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines

 Ejemplo creado por Naylamp Mechatronics con dominio público
 
 Última modificación el 17/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/10_tutorial-arduino-y-sensor-ultrasonico-hc-sr04.html
   -https://github.com/naylamp Mechatronics/Examples_HC-SR04

 */
const int Trigger = 2;   //Pin digital 2 para el Trigger del sensor
const int Echo = 3;   //Pin digital 3 para el Echo del sensor

void setup() {
  Serial.begin(9600);//iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}

void loop()
{

  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(100);          //Hacemos una pausa de 100ms
}
