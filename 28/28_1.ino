void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600); 
  
}
String comdata="";
String com="0000<=n<=9999";
//Serial.println(com);
int p;
int i;
int temp;
int pp;
void loop(){

digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);

  while(Serial.available()>0){
    p=Serial.parseInt();
    Serial.println(p);}
      pp=p;
      
      digitalWrite(9,LOW);
      temp=pp%10;
      go(temp);//Serial.println(temp);
      pp=int(pp/10);
      digitalWrite(9,HIGH); 
    
            
      digitalWrite(8,LOW);
      temp=pp%10;
      go(temp);//Serial.println(temp);
      pp=int(pp/10);
      digitalWrite(8,HIGH); 

            
      digitalWrite(7,LOW);
      temp=pp%10;
      go(temp);//Serial.println(temp);
      pp=int(pp/10);
      digitalWrite(7,HIGH); 

            
      digitalWrite(6,LOW);
      temp=pp%10;
      go(temp);//Serial.println(temp);
      pp=int(pp/10);
      digitalWrite(6,HIGH); 
    
    
 


  
    
}

int income;
void go(int income){
  if (income&1)
  digitalWrite(2,HIGH);
  else
  digitalWrite(2,LOW);
  if ((income>>1)&1)
  digitalWrite(3,HIGH);
  else
  digitalWrite(3,LOW);
  if ((income>>2)&1)
  digitalWrite(4,HIGH);
  else
  digitalWrite(4,LOW);
  if ((income>>3)&1)
  digitalWrite(5,HIGH);
  else
  digitalWrite(5,LOW);
}
