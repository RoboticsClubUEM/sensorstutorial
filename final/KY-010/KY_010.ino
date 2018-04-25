/*
 * KY_010 - Fotointerruptor
 */

// CONSTANTES
#define ledPin 13
#define KY_010 3

// VARIABLES
int val;

// SETUP
void setup() {
	pinMode(ledPin, OUTPUT);   // pin del led como salida
	pinMode(KY_010, INPUT);    // pin del sensor como entrada
}

// LOOP
void loop () {
	val = digitalRead(KY_010);  			// almacenamos el valor en la variable val
	if (val == HIGH) {
		digitalWrite (ledPin, LOW);
		Serial.println("NO se detecta ningún objeto");
	}
	else {
		digitalWrite (ledPin, HIGH);
		Serial.println("Objeto detectado");
	}
	delay(1000);				// delay para no saturar el Serial monitor
}
