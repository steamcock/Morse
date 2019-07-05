void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);//f
  pinMode(11,OUTPUT);//b
  pinMode(2, OUTPUT);//r
  pinMode(3, OUTPUT);//l
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
          case 'f':
              forward();
              break;
            case 'b':
              backward();
              break;
            case 'l':
              left();
              break;
            case 'r':
              right();
              break;
            case 's':
              stop();
              break;
            default:
              break;
        }
    }
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(8,HIGH);
}

void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
}

void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(3,HIGH);
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(2,HIGH);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
