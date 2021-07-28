int collector1 = 12;
int collector2 = 13;
int m = 0;
int n = 0;
 
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(collector1, OUTPUT);
  pinMode(collector2, OUTPUT);
 
}
 
void zero(){
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

}
 
void one(){
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

}
 
void two(){
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

}
 
void three(){
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

}
 
void four(){
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}
 
void five(){
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}
 
void six(){
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}
 
void seven(){
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}
 
void eight(){
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

}
 
void nine(){
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

}
 
void display_seg(int collector1, int collector2, int counter){
    digitalWrite(collector1,LOW);
    digitalWrite(collector2,HIGH);
 
    switch(counter) {
    case 0:
        zero();
        break;
   case 1:
      one();
      break;  
   case 2:
      two();
      break;
   case 3:
      three();
      break;
   case 4:
      four();
      break;
   case 5:
      five();
      break;
   case 6:
      six();
      break;
   case 7:
      seven();
      break;
   case 8:
      eight();
      break;
   case 9:
      nine();
      break;
  }  
}

void loop()
{
  for(int o = 0; o < 50; o++){
    display_seg(collector1,collector2,m);
    delay(10);
    display_seg(collector2,collector1,n);
    delay(10);
  }
  m++;
  if(m > 9){
    m = 0;
    n++;
  }
  if(n > 9)n = 0;
}