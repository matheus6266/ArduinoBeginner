#include <Arduino.h>

int tempo_sinal = 1000;
int pino_led_vermelho = 10;
int pino_led_amarelo = 9;
int pino_led_verde = 8;
int button = 2;

void setup() {
  // put your setup code here, to run once:

  pinMode(pino_led_vermelho, OUTPUT);
  pinMode(pino_led_amarelo, OUTPUT);
  pinMode(pino_led_verde, OUTPUT);
  pinMode(button, INPUT);
  

}

void liga_led_vermelho() {

  digitalWrite(pino_led_vermelho, HIGH);
  delay(tempo_sinal);
  digitalWrite(pino_led_vermelho, LOW);
  delay(tempo_sinal);

}

void liga_led_amarelo() {

  digitalWrite(pino_led_amarelo, HIGH);
  delay(tempo_sinal);
  digitalWrite(pino_led_amarelo, LOW);
  delay(tempo_sinal);

}

void liga_led_verde() {

  digitalWrite(pino_led_verde, HIGH);
  delay(tempo_sinal);
  digitalWrite(pino_led_verde, LOW);
  delay(tempo_sinal);

}

void loop() {
  // put your main code here, to run repeatedly:
  tempo_sinal = 2000;
  
  liga_led_verde();  

  liga_led_vermelho();
  liga_led_amarelo();

  
}