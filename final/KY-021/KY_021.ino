/*
 * KY_021 - Mini reed switch
 */

// CONSTANTES
#define ledPin 13
#define KY_021 2

// VARIABLES
int val;

// SETUP
void setup() {
	pinMode(ledPin, OUTPUT);   // pin del led como salida
	pinMode(KY_021, INPUT);    // pin del sensor como entrada
	Serial.begin(9600);
}

// LOOP
void loop () {
	val = digitalRead(KY_021);  			// almacenamos el valor en la variable val
	if (val == HIGH) {
		digitalWrite (ledPin, LOW);
		Serial.println("NO se detecta ningún magnético");
	}
	else {
		digitalWrite (ledPin, HIGH);
		Serial.println("Campo magnético detectado");
	}
	delay(1000);				// delay para no saturar el Serial monitor
}
