/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catálogo de Productos.
   Dev: Carlos Santos
   Fecha: 28 de abril
*/
int leds[] = {3, 4, 5, 6, 7, 8, 9, 10};
int interruptor1 = 2;
int interruptor2 = 11;
int estado1=LOW;
int estado2=LOW; 
 
void setup(){
  for (int x = 0; x < 8; x++) {
    pinMode(leds[x], OUTPUT);
  }
  pinMode(interruptor1, OUTPUT);
  pinMode(interruptor2, OUTPUT);
  Serial.begin(9600);
}
 
 
void loop() {
  estado1=digitalRead(interruptor1);
  estado2=digitalRead(interruptor2);
  if (estado1 == HIGH) {
    delay(500);
    velocidad();
  }
  if (estado2 == HIGH) {
    delay(500);
    velocidad();
  }
}
void velocidad() {
  for (int x= 0; x< 8; x++) {
    digitalWrite(leds[x], HIGH);
    delay(500);
    digitalWrite(leds[x], LOW);
  }
  for (int x = 7;  x>= 0; x--) {
    digitalWrite(leds[x], HIGH);
    delay(500);
    digitalWrite(leds[x], LOW);
  }
}
