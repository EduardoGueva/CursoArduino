int led=11;
int potenciometro=A0;
int brillo;

void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  brillo=analogRead(potenciometro)/4;
  analogWrite(led,brillo);
}
