#define LED_VERMELHO 13 //definição do pin do led vermelho
#define LED_AZUL 7  //definição do pin do led verde

unsigned long tempoAtual; //definição da variável que vai receber o tempo que o circuito tá ligado
unsigned long tempoComparacaoVermelho = 0; //variável que recebe o tempo que o led vermelho ligou pela última vez
unsigned long tempoComparacaoAzul = 0; //variável que recebe o tempo que o led azul ligou pela última vez
int tempoVermelho = 1000; //tempo que o led vermelho tem que ligar
int tempoAzul = 500;      //tempo que o led azul tem que ligar

void setup(){
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}

void DefinirVermelho(){
  if(tempoAtual - tempoComparacaoVermelho == tempoVermelho){ //compara para ver se o tempo de ligação do arduino - a última vez que o led piscou é igual ao tempo de ligação
     tempoComparacaoVermelho = tempoAtual;
    digitalWrite(LED_VERMELHO, !digitalRead(LED_VERMELHO));
  }
}

void DefinirAzul(){
  if(tempoAtual - tempoComparacaoAzul == tempoAzul){ //compara para ver se o tempo de ligação do arduino - a última vez que o led piscou é igual ao tempo de ligação
     tempoComparacaoAzul = tempoAtual;
    digitalWrite(LED_AZUL, !digitalRead(LED_AZUL));
  }
}

void loop(){
  tempoAtual = millis();
  DefinirVermelho();
  DefinirAzul();
}