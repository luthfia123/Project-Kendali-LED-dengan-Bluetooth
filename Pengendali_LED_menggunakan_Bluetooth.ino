//pengendalian LED

int m1=A0;
int m2=A1;
int m3=A2;
int h=225;
int l=0;
String motion; 

void setup () {
  Serial.begin (9600);
  pinMode(m1,OUTPUT);
   pinMode(m2,OUTPUT);
    pinMode(m3,OUTPUT);
}

void loop(){
  Serial.println("silahkan ketik 'p' untuk menyalakan semua LED, 's' untuk mematikan LED");
  Serial.println("silahkan ketik 'r' untuk menyalakan red, ketik 'y' untuk menyalakan yellow, ketik 'b' untuk menyalakan blue");
  while(Serial.available()==0){}

  motion=Serial.readString();
  if(motion=="p"){
    analogWrite(m1,h);
    analogWrite(m2,h);
    analogWrite(m3,h);
  }

  if(motion=="s"){
    analogWrite(m1,l);
    analogWrite(m2,l);
    analogWrite(m3,l);
  }
  if(motion=="r"){
    analogWrite(m1,h);
    analogWrite(m2,l);
    analogWrite(m3,l);
  }
  if(motion=="y"){
    analogWrite(m1,l);
    analogWrite(m2,h);
    analogWrite(m3,l);
  }
  if(motion=="b"){
    analogWrite(m1,l);
    analogWrite(m2,l);
    analogWrite(m3,h);
  }
}
