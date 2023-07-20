int ar;
int dr;
int m1 = 6;
int val;
void setup() {
 pinMode(A0,INPUT);
 pinMode(4,INPUT);
 pinMode(m1,OUTPUT);
 
 Serial.begin(9600);

}

void loop() {
ar=analogRead(A0);
dr = digitalRead(4);
Serial.println(ar);
Serial.println(dr);
delay(1000);
//float per = (ar * 100./1023.);
//float mper = 100. - per ;
//Serial.println(mper);
//delay(500); 
if(dr == 1){
  digitalWrite(m1,1);
  }
 else
 {
  digitalWrite(m1,0);
  }

}
