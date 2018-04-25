/*
 * KY_012 - Buzzer activo
 */

// CONSTANTES
#define KY_012 8

// SETUP
void setup() {
	pinMode(KY_012, OUTPUT);     // pin del sensor como salida
}

// LOOP
void loop() {										// simplemente es un "holamundo"
	digitalWrite(KY_012, HIGH);   // lo ponemos en HIGH para que emita
	delay(500);	   								// lo matenemos 0.5s encendido
	digitalWrite(KY_012, LOW);    // lo ponemos en LOW para que no emita
	delay(500);  									// lo matenemos 0.5s apagado
}
