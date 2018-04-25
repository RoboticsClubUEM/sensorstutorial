/*
* KY_006 - Buzzer pasivo
*/

// CONSTANTES
#define KY_006 8

// SETUP
void setup() {
	pinMode(KY_006, OUTPUT);    // pin del sensor como salida
}

// LOOP
void loop() {
	// emitimos un sonido
	for (int i = 0; i < 80; i++) {
		digitalWrite(KY_006, HIGH);   // lo ponemos en HIGH para que emita
		delay(1);
		digitalWrite(KY_006, LOW);    // lo ponemos en LOW para que no emita
		delay(1);
	}

  // modificamos el sonido
	for (int j = 0; j < 100; j++) {
		digitalWrite(KY_006, HIGH);
		delay(2);
		digitalWrite(KY_006, LOW);
		delay(2);
	}
}
