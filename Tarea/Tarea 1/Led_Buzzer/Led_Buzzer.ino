int pb1=5;
int pb2=6;
int led1=7;
int led2=8;
int Buzzer=9;

void setup(){
  
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(Buzzer,OUTPUT);

}

void loop(){

  if(digitalRead(pb1)!=HIGH){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW);
  }
  
    if(digitalRead(pb2)!=HIGH){
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led2,LOW);
  }
  
    if(digitalRead(pb1)==HIGH&&digitalRead(pb2)==HIGH){
    digitalWrite(Buzzer,HIGH);
  }else{
    digitalWrite(Buzzer,LOW);
  }

}
