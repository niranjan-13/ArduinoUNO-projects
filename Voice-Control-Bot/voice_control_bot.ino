int rIR;
int lIR;
int rM1=10;
int rM2=5;
int lM1=3;
int lM2=5;
String voice;

void setup() {
  pinMode(rM1,OUTPUT);
  pinMode(rM2,OUTPUT);
  pinMode(lM1,OUTPUT);
  pinMode(lM2,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(8,1);
  digitalWrite(11,1);

 while(Serial.available() > 0){
   voice = Serial.readString();
   Serial.println(voice);
   delay(700);}
  if(voice == "forward")
  {
    forward();
    }
  else if(voice == "right")
    {right();
      }
  else if(voice == "left")
  {left();
    }
  else if(voice == "stop")
  {
    Stop();
    }
}

void forward()
  {
    digitalWrite(rM1,1);
    digitalWrite(rM2,0);

    digitalWrite(lM1,1);
    digitalWrite(lM2,0);
    
   }


void right()
{
    digitalWrite(rM1,0);
    digitalWrite(rM2,0);

    digitalWrite(lM1,1);
    digitalWrite(lM2,0);
}
void left()
{
    digitalWrite(rM1,1);
    digitalWrite(rM2,0);

    digitalWrite(lM1,0);
    digitalWrite(lM2,0);
}
void Stop()
{
    digitalWrite(rM1,0);
    digitalWrite(rM2,0);

    digitalWrite(lM1,0);
    digitalWrite(lM2,0);
   
}
