/*
 * KY-019 - relay
 */

// CONSTANTES
#define KY_019 10

// SETUP
void setup() {
  pinMode(KY_019, OUTPUT);  // pin del relay como salida
}

// LOOP
void loop() {
	digitalWrite(KY_019, HIGH);  	// encender el relay
		delay(1000);                // [NO] esta conectado
								                // [NC] no esta conectado

	digitalWrite(KY_019, LOW);  	// apagar el relay
	delay(1000);                  // [NO] no esta conectado
                                // [NC] esta conectado

}
