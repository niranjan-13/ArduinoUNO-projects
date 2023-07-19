#include <Servo.h>
Servo serv;

int trig = 4;
int echo = 5;
int dist;
long dt;
int led=2;
int m1 = 3;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  serv.attach(m1);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}
void loop() {
digitalWrite(9,1);
  
  digitalWrite(trig,0);
  delayMicroseconds(2); 
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);

  dt= pulseIn(echo,1);

  dist = (0.034*dt/2);
  Serial.print("Distance = ");
  Serial.println(dist);
  
  if (dist <50)
  {
    serv.write(180);
    delay(500);
    }
    else if (dist >50)
  {
    serv.write(0);
    delay(100);
    
    }

}
