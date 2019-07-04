void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600); 
  digitalWrite(8,HIGH); 
  digitalWrite(7,HIGH);
}
int income=0;
void loop(){
  while(Serial.available()>0){
    income=Serial.read();
    if(income>='0'&&income<='9'){
      income=income-int('0');
      Serial.println(income,DEC);
      go(income);
    }
  }
}

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
