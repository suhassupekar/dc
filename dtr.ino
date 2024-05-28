int blue=2;
int white=4;
int green=6;
int red=8;
int yellow=10;
int arr[5]={blue,white,green,red,yellow};






void setup() {
  // put your setup code here, to run once:
 pinMode(blue,OUTPUT);
 pinMode(white,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(red,OUTPUT);
 pinMode(yellow,OUTPUT);
}


void loop()
 
  // put your main code here, to run repeatedly:
{
int v = analogRead(A0);
if (100>v){
digitalWrite(2,HIGH);
delay(130);
digitalWrite(2,LOW);
}
if (100>=v){
digitalWrite(2,HIGH);
delay(130);
digitalWrite(2,LOW);
}

else if (200>=v && v>100 ){
digitalWrite(2,HIGH);
delay(130);
digitalWrite(2,LOW);
}

else if (300>=v && v>200 ){
digitalWrite(2,HIGH);
delay(130);
digitalWrite(2,LOW);
}

else if (400>=v && v>300 ){
digitalWrite(2,HIGH);
delay(130);
digitalWrite(2,LOW);
}
else if (500>=v && v>400 ){
digitalWrite(2,HIGH);
delay(130);
digitalWrite(2,LOW);
}
}

int h = dht11.readHumidity();
int t = dht11.read temperature();
Serial.print(h);
Serial.print(",")
Serial.print(t);
Serial.print(",")






