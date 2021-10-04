#define BUZINA 13
#define BOTAO 4

void setup(){
  pinMode(BUZINA, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop(){
  int estadoDoBotao =  digitalRead(BOTAO);
  
  if(estadoDoBotao == HIGH){
   	digitalWrite(BUZINA, HIGH); 
  }else{
    digitalWrite(BUZINA, LOW);
  }
    
}