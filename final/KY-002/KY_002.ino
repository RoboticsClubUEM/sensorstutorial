/*
 * KY_002 - Sensor de vibración
 */

// CONSTANTES
#define ledPin 13
#define KY_002 3

// SETUP
void setup() {
	pinMode(ledPin, OUTPUT);   // pin del led como salida
	pinMode(KY_002, INPUT);    // pin del sensor como entrada
}

// LOOP
void loop () {
	val = digitalRead(KY_002);  			// almacenamos el valor en la variable val
	if (val == HIGH) {
		digitalWrite (ledPin, LOW);
		Serial.println("NO se detecta ninguna vibración");
	}
	else {
		digitalWrite (ledPin, HIGH);
		Serial.println("Vibración detectada");
	}
	delay(1000);				// delay para no saturar el Serial monitor
}
