void setup() {
 pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);


}

void loop() {
 
int i;
i = random(1,100);
digitalWrite(11,HIGH);
delay(i);
digitalWrite(11,LOW);
delay(100-i);

digitalWrite(11,LOW);

digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
delay(i);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
delay(100-i);



digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
delay(i);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
delay(100-i);


digitalWrite(8,HIGH);
delay(i);

digitalWrite(8,LOW);
delay(100-i);

digitalWrite(8,LOW);
delay(100);

i = random(1,100);
digitalWrite(10,HIGH);
delay(i);
digitalWrite(10,LOW);
delay(100-i);

digitalWrite(10,LOW);

digitalWrite(11,HIGH);
digitalWrite(9,HIGH);
delay(i);
digitalWrite(11,LOW);
digitalWrite(9,LOW);
delay(100-i);



digitalWrite(12,HIGH);
digitalWrite(8,HIGH);
delay(i);
digitalWrite(12,LOW);
digitalWrite(8,LOW);
delay(100-i);


digitalWrite(13,HIGH);
delay(i);

digitalWrite(13,LOW);
delay(100-i);

digitalWrite(13,LOW);
delay(100);

;}
