void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);

}

void loop() {

digitalWrite(13, HIGH);
delay(20);
digitalWrite(12, HIGH);
digitalWrite(13,LOW);
delay(20);
digitalWrite(11, HIGH);
digitalWrite(12,LOW); 
delay(20);
digitalWrite(10, HIGH); 
digitalWrite(11,LOW);
delay(20);
digitalWrite(9, HIGH);
digitalWrite(10,LOW);
delay(20); 
digitalWrite(8, HIGH);
digitalWrite(9,LOW); 
delay(20);
digitalWrite(9, HIGH);
digitalWrite(8,LOW);
delay(20);
digitalWrite(10, HIGH);
digitalWrite(9,LOW);
delay(20);
digitalWrite(11, HIGH);
digitalWrite(10,LOW);
delay(20);
digitalWrite(12, HIGH);
digitalWrite(11,LOW);
delay(20);

 
    
  }
