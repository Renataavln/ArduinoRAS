#define LUZ_VERMELHA 13 //definição do pin do led vermelho
#define LUZ_AMARELA 12  //definição do pin do led amarelo
#define LUZ_VERDE 8     //definição do pin do led verde
#define BOTAO 4

void setup(){
  pinMode(LUZ_VERMELHA, OUTPUT);
  pinMode(LUZ_AMARELA, OUTPUT);
  pinMode(LUZ_VERDE, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop(){
  int duracaoAmarela = 5000;
  int duracaoVerde = 10000;
  int duracaoVermelhaAcionado = 2000;
  int estadoDoBotao = digitalRead(BOTAO);
  
  if(estadoDoBotao == HIGH){
    delay(duracaoVermelhaAcionado);
    digitalWrite(LUZ_VERMELHA, LOW);
  
    digitalWrite(LUZ_AMARELA, HIGH);
    delay(duracaoAmarela);
    digitalWrite(LUZ_AMARELA, LOW);
  
    digitalWrite(LUZ_VERDE, HIGH);
    delay(duracaoVerde);
    digitalWrite(LUZ_VERDE, LOW);
  }else{
    digitalWrite(LUZ_VERMELHA, HIGH);
  }
}