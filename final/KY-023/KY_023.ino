/*
 * KY_023 - Joystick
 */

// CONSTANTES
#define X A1
#define Y A0
#define press  2

// VARIABLES
int pos_X = 0;
int pos_Y = 0;
int press = 0;

// SETUP
void setup() {
  Serial.begin(9600);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(press, INPUT_PULLUP);
}

// LOOP
void loop() {
  pos_X = analogRead(X);
  pos_Y = analogRead(Y);
  pressState = digitalRead(press);
  // mostramos la pos de X
  Serial.print("X: ");
  Serial.print(pos_X);
  // mostramos la pos de Y
  Serial.print(" | Y: ");
  Serial.print(pos_Y);
  // mostramos si el boton esta presionado
  Serial.print(" | press: ");
  Serial.println(press);
  delay(1000);
}
