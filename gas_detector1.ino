int gas;              // Variável para armazenar o valor lido do sensor de gás
int piezo = 13;       // Pino digital ao qual o buzzer está conectado

void setup() {
  pinMode(A0, INPUT);      // Configura o pino A0 como entrada
  pinMode(piezo, OUTPUT);  // Configura o pino do buzzer como saída
}

void loop(){
  gas = analogRead(A0);    // Lê o valor analógico do pino A0 e armazena na variável gas

  if(gas > 510){           // Verifica se o valor de gas é maior que 510
    tone(piezo, 600, 200); // Emite um som no buzzer com frequência de 600 Hz por 200 milissegundos
    delay(500);            // Aguarda 500 milissegundos
  }
}
