/*
 Proximidad

 Usamos el sensor ultrasónico HC-SR04 como un sensor discreto, a partir de una distancia como umbral definimos si existe presencia o no de un objeto cercano,
 dependiendo si la distancio es mayor o menor al umbral, activamos o apagamos una salida digital(LED)
 
 Conexiones:
  -------------------
  HC-SR04  -> Arduino 
  -------------------
  pin VCC  -> 5V 
  pin TRIG -> D2 
  pin ECHO -> D3 
  pin GND  -> GND 
  -------------------
  LED --> D4 (con resistencia min 220k)
  -------------------
  *Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines

 Ejemplo creado por Naylamp Mechatronics con dominio público
 
 Última modificación el 17/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/10_tutorial-arduino-y-sensor-ultrasonico-hc-sr04.html
   -https://github.com/naylampmechatronics/Examples_HC-SR04

 */
 
const int Trigger = 2;   //Pin digital 2 para el Trigger del sensor
const int Echo = 3;   //Pin digital 3 para el Echo del sensor
const int LED = 4;   //Pin digital 4 para el Echo del sensor

int umbral_cm=20; // Distancia(cm) máxima para considerar como objeto cercano

void setup() {
  //Serial.begin(9600);//descomentar para monitorear distancia
  pinMode(Trigger, OUTPUT); //pin Trigger como salida
  pinMode(Echo, INPUT);  //pin Echo como entrada
  pinMode(LED, OUTPUT); //pin LED como salida
  digitalWrite(Trigger, LOW);//Inicializamos el pin con estada bajo
  digitalWrite(LED, LOW);//Inicializamos el pin (LED apagado)
}

void loop()
{

  long distancia=sensar_cm(); //obtenemos la distancia
  //Serial.println(distancia); //descomentar para monitorear distancia
  if(distancia<umbral_cm) //si la distancia es inferior al umbral
  {
    digitalWrite(LED, HIGH);//LED encendido
  }
  else
  {
    digitalWrite(LED, LOW);//LED apagado
  }

  delay(100);          //pausa de 100ms
}

long sensar_cm()
{
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm

  return(d);
}
