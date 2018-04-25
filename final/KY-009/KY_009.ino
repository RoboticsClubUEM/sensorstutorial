/*
* KY_009 - Módulo SMD RGB
*/

// CONSTANTES
#define R 11
#define G 10
#define B 9

// VARIABLES
int val;

// SETUP
void setup() {
  pinMode(R, OUTPUT);   // pin del led como salida
  pinMode(G, OUTPUT);   // pin del led como salida
  pinMode(B, OUTPUT);   // pin del led como salida
}

// LOOP
void loop() {
	// descendente
  for (val = 255; val > 0; val--) {
    analogWrite(R, val);
    analogWrite(G, 128-val);
    analogWrite(B, 255-val);
    delay(10);  // delay de 10ms para que sea visible el cambio
  }

	// ascendente
  for (val = 0; val < 255; val++) {
    analogWrite(R, val);
    analogWrite(G, 128-val);
    analogWrite(B, 255-val);
    delay(10);  // delay de 10ms para que sea visible el cambio
  }
}
