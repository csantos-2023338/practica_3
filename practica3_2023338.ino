/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto Electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catálogo de Productos.
   Nombre:Carlos Josue Samuel Santos Martinez
   Fecha: 19 de abril
*/
int pausa = 0;
int Seleccionar = 1;
int boton1 = 8;
int boton2= 2;

struct datos_de_productos {
  char nombres[100];
  byte cantidad;
};
datos_de_productos producto1 = {"Tortrix", 75};
datos_de_productos producto2 = {"Takis", 75};
datos_de_productos producto3 = {"Coca-cola",35};
datos_de_productos producto4 = {"Pepsi", 35};
 
void setup(){
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);;
  Serial.begin(5600);
  Serial.println("Inventario de maquina espendedora:");
 
}
 void loop() {
   
  if(digitalRead(boton1) == LOW){
  Seleccionar--;
    if(Seleccionar < 1){
      Seleccionar = 4;
    }
    delay(1200);
  }
  if(digitalRead(boton2) == LOW){
  Seleccionar++;
    if(Seleccionar > 4){
      Seleccionar = 1;
    }
    delay(1200);
  }

  if(Seleccionar == 1){
    Serial.println("┏━━━━━━━━━━━━━━━━━━━━━━━┓");
    Serial.println("Producto 1:");
    Serial.print("Nombre:");
    Serial.println(producto1.nombres);
    Serial.print("Cantidad en stock:");
    Serial.println(producto1.cantidad);
    Serial.println("calorias:479");
    Serial.println("cantidad de producto: 28g");
    
  }
  if(Seleccionar == 2){
    Serial.println("┏━━━━━━━━━━━━━━━━━━━━━━━┓");
    Serial.println("Producto 2:");
    Serial.print("Nombre:");
    Serial.println(producto2.nombres);
    Serial.print("Cantidad en stock:");
    Serial.println(producto2.cantidad);
    Serial.println("calorias:578");
    Serial.println("cantidad de producto: 45g");
  }
  if(Seleccionar == 3){
    Serial.println("┏━━━━━━━━━━━━━━━━━━━━━━━┓");
    Serial.println("Producto 3:");
    Serial.print("Nombre:");
    Serial.println(producto3.nombres);
    Serial.print("Cantidad en stock:");
    Serial.println(producto3.cantidad);
    Serial.println("calorias: 2000 kcal");
    Serial.println("cantidad de producto: 250ml");
  }
  if(Seleccionar == 4){
    Serial.println("┏━━━━━━━━━━━━━━━━━━━━━━━┓");
    Serial.println("Producto 4:");
    Serial.print("Nombre:");
    Serial.println(producto4.nombres);
    Serial.print("Cantidad en stock:");
    Serial.println(producto4.cantidad);
    Serial.println("calorias: 2000 kcal");
    Serial.println("cantidad de producto: 250ml");
  }
}