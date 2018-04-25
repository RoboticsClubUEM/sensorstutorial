/*
 * Módulo 7 segmentos
 */

// SETUP
void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// FUNCIONES
void display(int A, int B, int C, int D, int E, int F, int G) {
  // Se reciben 7 variables y se asignan a cada una de las salidas
  digitalWrite(7, A);
  digitalWrite(8, B);
  digitalWrite(9, C);
  digitalWrite(10, D);
  digitalWrite(11, E);
  digitalWrite(12, F);
  digitalWrite(13, G);
}

// LOOP
void loop() {
  // 0
  display(1, 1, 1, 1, 1, 1, 0);
  delay(1000);
  // 1
  display(0, 1, 1, 0, 0, 0, 0);
  delay(1000);
  // 2
  display(1, 1, 0, 1, 1, 0, 1);
  delay(1000);
  // 3
  display(1, 1, 1, 1, 0, 0, 1);
  delay(1000);
  // 4
  display(0, 1, 1, 0, 0, 1, 1);
  delay(1000);
  // 5
  display(1, 0, 1, 1, 0, 1, 1);
  delay(1000);
  // 6
  display(1, 0, 1, 1, 1, 1, 1);
  delay(1000);
  // 7
  display(1, 1, 1, 0, 0, 0, 0);
  delay(1000);
  // 8
  display(1, 1, 1, 1, 1, 1, 1);
  delay(1000);
  // 9
  display(1, 1, 1, 0, 0, 1, 1);
  delay(1000);
}
