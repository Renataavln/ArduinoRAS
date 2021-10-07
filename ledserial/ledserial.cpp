#define LED_AZUL 13
#define LED_AMARELO 12
#define LED_BRANCO 8

void setup(){
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_BRANCO, OUTPUT);
  Serial.begin(9600);
}

String cor;

void loop(){
  if(Serial.available() > 0){
    cor = Serial.readStringUntil('\n');
    
    cor.toUpperCase();
    
    if(cor ==  "AZUL"){
      digitalWrite(LED_AZUL, HIGH);
      delay(1000);
      digitalWrite(LED_AZUL, LOW);
      
    }else if(cor == "AMARELO"){
      digitalWrite(LED_AMARELO, HIGH);
      delay(1000);
      digitalWrite(LED_AMARELO, LOW);
      
    }else if(cor == "BRANCO"){
      digitalWrite(LED_BRANCO, HIGH);
      delay(1000);
      digitalWrite(LED_BRANCO, LOW);
      
    }
  }
  
}