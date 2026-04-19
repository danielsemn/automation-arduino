// Definição dos pinos para os segmentos do display
int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8;
// Pinos extras (LEDs) e Botão
int vermelho = 10, amarelo = 11, verde = 12; 
int bot = 9;
int i;

//leds

int red = 13, green = A0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(bot, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

// Funções para cada número
void limpaDisplay() {
  digitalWrite(a, LOW); digitalWrite(b, LOW); digitalWrite(c, LOW);
  digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void numero0() {
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void numero1() {
  digitalWrite(a, LOW);  digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, LOW);  digitalWrite(e, LOW);  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void numero2() {
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, LOW);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void numero3() {
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, LOW);  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void numero4() {
  digitalWrite(a, LOW);  digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, LOW);  digitalWrite(e, LOW);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void numero5() {
  digitalWrite(a, HIGH); digitalWrite(b, LOW);  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, LOW);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void numero6() {
  digitalWrite(a, HIGH); digitalWrite(b, LOW);  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void numero7() {
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, LOW);  digitalWrite(e, LOW);  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void numero8() {
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void numero9() {
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, LOW);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

// Seletor de números
void dado(int n) {
  switch (n) {
    case 0: numero0(); break;
    case 1: numero1(); break;
    case 2: numero2(); break;
    case 3: numero3(); break;
    case 4: numero4(); break;
    case 5: numero5(); break;
    case 6: numero6(); break;
    case 7: numero7(); break;
    case 8: numero8(); break;
    case 9: numero9(); break;
  }
}

void loop() {
  int estado = digitalRead(bot);

  if (estado == HIGH) {
    digitalWrite(verde, 0);
    digitalWrite(amarelo, 1);
    delay(2000);
    digitalWrite(red, LOW);
    digitalWrite(amarelo, 0);
    digitalWrite(vermelho, HIGH);
    digitalWrite(green, HIGH);
    dado(5);
    delay (1000);
    dado(4);
    delay(1000);
    dado(3);
    delay (1000);
    dado(2);
    delay (1000);
    dado(1);
    delay (1000);
    dado(0);
    delay (1000);
    digitalWrite(vermelho, 0);
    digitalWrite(green, LOW);
;    
  } 
  else { digitalWrite(verde, 1);
  digitalWrite(green, LOW);
          digitalWrite(red, HIGH);}
 
}