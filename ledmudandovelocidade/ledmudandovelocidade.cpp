#define BOTAO_RAPIDO 4
#define BOTAO_LENTO 7
#define LED_VERMELHO 13
#define LED_AMARELO 12

int tempo = 1000;

void setup(){
  pinMode(BOTAO_RAPIDO, INPUT); 
  pinMode(BOTAO_LENTO, INPUT); 
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
}

void loop(){
  int estadoDoBotaoRapido = digitalRead(BOTAO_RAPIDO);
  int estadoDoBotaoLento = digitalRead(BOTAO_LENTO);
  
  if(estadoDoBotaoRapido == HIGH){
    tempo /= 2;
    digitalWrite(LED_VERMELHO, HIGH);
    delay(tempo);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    delay(tempo);
    digitalWrite(LED_AMARELO, LOW);
  }else if(estadoDoBotaoLento == HIGH){
    tempo *= 2;
    digitalWrite(LED_VERMELHO, HIGH);
    delay(tempo);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    delay(tempo);
    digitalWrite(LED_AMARELO, LOW);
  }else{
    digitalWrite(LED_VERMELHO, HIGH);
    delay(tempo);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    delay(tempo);
    digitalWrite(LED_AMARELO, LOW);
  }

}