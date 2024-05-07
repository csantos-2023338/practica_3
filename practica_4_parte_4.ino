/*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Relevadores y visualizadores
   Paulo Calito 2020265
   Fecha: 03 de mayo 2024
   
*/
 
#define INTERRUPTOR1 8
#define INTERRUPTOR2 2

int i = 0;
void setup() {
  pinMode (INTERRUPTOR1, INPUT);
  pinMode (INTERRUPTOR2, INPUT);
  Serial.begin(9600);
}
void loop() {
 if(digitalRead(INTERRUPTOR1)==HIGH){
   if(i <= 99) {
     Serial.println(i);
     i += 1;
     delay(100);
   }   

 }
  if(digitalRead(INTERRUPTOR2)==HIGH){
     Serial.println(i);
     i -= 1;
     delay(100);
   }   


}
