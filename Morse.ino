#include <Morse.h>

#include <Morse.h>
 
int pin=(13);
 
void setup()
{
  pinMode(pin,OUTPUT);
  Serial.begin(9600);      //设定的波特率
}
 
void dot()
{
 digitalWrite(pin, HIGH);
 delay(250);
 digitalWrite(pin, LOW);
 delay(250);
}
void dash()
{
 digitalWrite(pin, HIGH);
 delay(1000);
 digitalWrite(pin, LOW);
 delay(250);
}
void pause(){
  digitalWrite(pin,LOW);
  delay(250*2);
}
void cut(){
  digitalWrite(pin,LOW);
  delay(250*4);
}

void go(char c){
  switch(c){
    case 'a':dot();dash();break;
    case 'b':dash();dot();dot();dot();break;
    case 'c':dash();dot();dash();dot();break;
    case 'd':dash();dot();dot();break;
    case 'e':dot();break;
    case 'f':dot();dot();dot();break;
    case 'g':dash();dash();dot();break;
    case 'h':dot();dot();dot();dot();break;
    case 'i':dot();dot();break;
    case 'j':dot();dash();dash();dash();break;
    case 'k':dash();dot();dash();break;
    case 'l':dot();dash();dot();dot();break;
    case 'm':dash();dash();break;
    case 'n':dash();dot();break;
    case 'o':dash();dash();dash();break;
    case 'p':dot();dash();dash();dot();break;
    case 'q':dash();dash();dot();dash();break;
    case 'r':dot();dash();dot();break;
    case 's':dot();dot();dot();break;
    case 't':dash;break;
    case 'u':dot();dot();dash();break;
    case 'v':dot();dot();dot();dash();break;
    case 'w':dot();dash();dash();break;
    case 'x':dash();dot();dot();dash();break;
    case 'y':dash();dot();dash();dash();break;
    case 'z':dash();dash();dot();dot();break;
    case ' ':cut();break;
    case '\t':cut();cut();break;
    default:;
  }
    pause();
}

String comdata = "";//声明字符串变量
 
void loop() 
{
  int l;
   while (Serial.available() > 0)  
    {
        comdata += char(Serial.read());
        delay(2);
    }
    
   if (comdata.length() > 0)
    {
       Serial.println(comdata);
       comdata = "";
       l=comdata.length();
       int i;
       for(i=0;i<l;i++){
        go(comdata[i]);
       }
    }
}
