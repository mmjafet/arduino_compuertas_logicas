// Definir pines para botones y LED
const int boton1Pin = 2;   // Pin para el botón 1
const int boton2Pin = 3;   // Pin para el botón 2
const int ledPin = 13;     // Pin para el LED

void setup() {
  // Configurar pines de entrada para los botones
  pinMode(boton1Pin, INPUT);  // Sin pull-up interno
  pinMode(boton2Pin, INPUT);  // Sin pull-up interno
  
  // Configurar pin de salida para el LED
  pinMode(ledPin, OUTPUT);

  // Apagar el LED al inicio
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Leer el estado de los botones
  int estadoBoton1 = digitalRead(boton1Pin);
  int estadoBoton2 = digitalRead(boton2Pin);
  
  // Si ambos botones no están presionados (HIGH en cualquier otra opción)
  if (estadoBoton1 == LOW && estadoBoton2 == LOW) {
    digitalWrite(ledPin, LOW);  // Encender el LED
  } else {
    digitalWrite(ledPin, HIGH);   // Apagar el LED
  }
}