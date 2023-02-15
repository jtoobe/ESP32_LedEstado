// Constantes para los pines
const int PULSADOR = 35;
const int LedPin = 32;

// Variable para almacenar el estado del PULSADOR
int estado;

void setup(){
    // PULSADOR configurado como entrada
    pinMode(PULSADOR,INPUT);
    // LED configurado como salida
    pinMode(LedPin,OUTPUT);
}
  
void loop() {
  // Si el pulsador es pulsado cuando el LED está apagado...
  if(digitalRead(PULSADOR) && estado==LOW){
    // ... se enciende el LED
    digitalWrite(LedPin, HIGH);
    // Se establece un retraso de medio segundo entre pulsaciones
    delay(500);
    // El estado se queda con un valor de HIGH (LED encendido)
    estado=HIGH;
  } 
  
  // Si el pulsador es pulsador cuando el LED está encendido...
  if(digitalRead(PULSADOR) && estado==HIGH){
  // ... se apaga el LED
    digitalWrite(LedPin, LOW);
    // Se establece un retraso de medio segundo entre pulsaciones
    delay(500);
    // El estado se queda con un valor de LOW (LED apagado)
    estado=LOW;   
  }
}
