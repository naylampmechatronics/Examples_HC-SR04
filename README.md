# Examples_HC-SR04
Ejemplos para el sensor ultrasónico HC-SR04

Información detallada en  [Tutorial HC-SR04](https://naylampmechatronics.com/blog/10_tutorial-arduino-y-sensor-ultrasonico-hc-sr04.html)

## Contenido
* **DistanciaSerial:** Obtiene la distancia en centímetros y lo envía por el hardware serial (puede visualizar las mediciones desde el monitor serial del IDE Arduino)
* **Proximidad:** Sensor HC-SR04 como un sensor discreto, a partir de una distancia como umbral definimos si existe presencia o no de un objeto cercano, dependiendo si la distancia es mayor o menor al umbral, activamos o apagamos una salida digital(LED)
 
## Requerimientos
 **Software**
  * IDE Arduino
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * [HC-SR04](https://naylampmechatronics.com/sensores-proximidad/10-sensor-ultrasonido-hc-sr04.html)
  * LED (para ejemplo Proximidad)
  
## Conexiones
Pin HC-SR04| Pin Arduino 
----|------
VCC | 5V 
TRIG | D2 
ECHO | D3 
GND | GND 

Las conexiones son las mismas para cualquier modelo de arduino

Se pueden usar pines diferentes al D2 y D3 modificando las líneas de código correspondientes
 
## Licencia
 Creado por el equipo de Naylamp Mechatronics bajo dominio público
 
## Links 
 * [Tutorial de Arduino y sensor ultrasónico HC-SR04](https://naylampmechatronics.com/blog/10_tutorial-arduino-y-sensor-ultrasonico-hc-sr04.html)
 * [Sensor Ultrasonido HC-SR04](https://naylampmechatronics.com/sensores-proximidad/10-sensor-ultrasonido-hc-sr04.html)
