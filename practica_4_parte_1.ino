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
int D2 =(2);
int D3 =(3);
int D4 =(4);
int D5 =(5);
int INTERRUPTOR1 = (8);
int INTERRUPTOR2 = (9);
int INTERRUPTOR3 = (10);
int Seleccionar = 1;
 
void setup()
{
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
pinMode (8, INPUT);
pinMode (9, INPUT);
pinMode (10, INPUT);
}
 
void loop()
{
    if(digitalRead(INTERRUPTOR1) == HIGH){
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
delay(1000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
  delay(1000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
 delay(1000);
digitalWrite (D2, LOW);
digitalWrite (D3, HIGH);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
   delay(1000);
digitalWrite (D2, HIGH);
digitalWrite (D3, HIGH);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
   delay(1000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(1000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(1000);
digitalWrite (D2, LOW);
digitalWrite (D3, HIGH);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(1000);
digitalWrite (D2, HIGH);
digitalWrite (D3, HIGH);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(1000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, HIGH);
  delay(1000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, HIGH);
    delay(1000);
  }
  if(digitalRead(INTERRUPTOR2) == HIGH){
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
delay(2000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
  delay(2000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
 delay(2000);
digitalWrite (D2, LOW);
digitalWrite (D3, HIGH);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
   delay(2000);
digitalWrite (D2, HIGH);
digitalWrite (D3, HIGH);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
   delay(2000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(2000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(2000);
digitalWrite (D2, LOW);
digitalWrite (D3, HIGH);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(2000);
digitalWrite (D2, HIGH);
digitalWrite (D3, HIGH);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(2000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, HIGH);
  delay(2000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, HIGH);
    delay(2000);
  }
  if(digitalRead(INTERRUPTOR3) == HIGH){
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
delay(3000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
  delay(3000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
 delay(3000);
digitalWrite (D2, LOW);
digitalWrite (D3, HIGH);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
   delay(3000);
digitalWrite (D2, HIGH);
digitalWrite (D3, HIGH);
digitalWrite (D4, LOW);
digitalWrite (D5, LOW);
   delay(3000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(3000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(3000);
digitalWrite (D2, LOW);
digitalWrite (D3, HIGH);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(3000);
digitalWrite (D2, HIGH);
digitalWrite (D3, HIGH);
digitalWrite (D4, HIGH);
digitalWrite (D5, LOW);
   delay(3000);
digitalWrite (D2, LOW);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, HIGH);
  delay(3000);
digitalWrite (D2, HIGH);
digitalWrite (D3, LOW);
digitalWrite (D4, LOW);
digitalWrite (D5, HIGH);
    delay(3000);
  }
}  
