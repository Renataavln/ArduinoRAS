#define LUZ_VERMELHA 13 //definição do pin do led vermelho
#define LUZ_AMARELA 12  //definição do pin do led amarelo
#define LUZ_VERDE 7     //definição do pin do led verde

void setup(){
  pinMode(LUZ_VERMELHA, OUTPUT);
  pinMode(LUZ_AMARELA, OUTPUT);
  pinMode(LUZ_VERDE, OUTPUT);
}

void loop(){
  int duracaoVermelha = 10000; //duração da luz vermelha no semáforo
  int duracaoAmarela = 5000;   //duração da luz amarela no semáforo
  int duracaoVerde = 25000;    //duração da luz ver no semáforo
  
  digitalWrite(LUZ_VERDE, HIGH);
  delay(duracaoVerde);
  digitalWrite(LUZ_VERDE, LOW);
  
  digitalWrite(LUZ_AMARELA, HIGH);
  delay(duracaoAmarela);
  digitalWrite(LUZ_AMARELA, LOW);
  
  digitalWrite(LUZ_VERMELHA, HIGH);
  delay(duracaoVermelha);
  digitalWrite(LUZ_VERMELHA, LOW);
  
}