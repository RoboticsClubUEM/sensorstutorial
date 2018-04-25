/*
 * KY-031 - Sensor de impacto
 */

// CONSTANTES
#define KY_031 10

// VARIABLES
int knockVal = HIGH;          // velocidad de detección
boolean impacto = false;
unsigned long ultimoImpacto;  // variable que guarda el tiempo de choque
int tiempoImpacto = 500;      // tiempo de la "alarma"

// SETUP
void setup() {
  Serial.begin(9600);           // puerto serie para el mensaje
  pinMode(KY_031, INPUT) ;      // input del sensor KY-031
}

// LOOP
void loop() {
  knockVal = digitalRead(KY_031) ;  // leemos el pin 10 para saber si el sensor ha detectado un impacto
  if (!knockVal) {                  // Si el sensor detecta un golpe
    ultimoImpacto = millis();       // guarda el tiempo de impacto
    if (!impacto) {
      Serial.println("Detectado impacto");
      impacto = true;
    }
  }
  else {
    if( (millis()-ultimoImpacto) > tiempoImpacto  &&  impacto) {
      Serial.println("Todo tranquilo");
      impacto = false;
    }
  }
}
