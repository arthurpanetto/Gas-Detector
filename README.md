# Gas Sensor Buzzer Project

Este é um projeto simples que utiliza um sensor de gás para detectar níveis específicos e emite um som através de um buzzer quando o valor lido ultrapassa um limite definido.

## Componentes Necessários

- Sensor de Gás
- Buzzer
- Placa Arduino

## Configuração do Hardware

Certifique-se de conectar o sensor de gás ao pino analógico A0 na placa Arduino. O buzzer deve ser conectado ao pino digital 13.

## Código Fonte

O código fonte está no arquivo [gas_sensor_buzzer.ino](gas_sensor_buzzer.ino).

```cpp
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
```

## Explicação

1. **Variáveis**: `gas` armazena o valor lido do sensor de gás, e `piezo` é o pino ao qual o buzzer está conectado.

2. **Configuração do Pino**: No método `setup()`, configuramos o pino A0 como entrada para o sensor de gás e o pino do buzzer como saída.

3. **Loop Principal**: O método `loop()` realiza a leitura do valor analógico do sensor de gás. Se o valor lido for maior que 510, o buzzer emite um som com uma frequência de 600 Hz por 200 milissegundos, seguido por um atraso de 500 milissegundos.

## Notas

Certifique-se de ajustar o valor de limite (`510` neste exemplo) conforme necessário para o seu sensor de gás específico. Este é apenas um ponto de partida, e os valores podem variar dependendo do sensor utilizado.