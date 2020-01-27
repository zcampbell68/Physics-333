void setup() {
 pinMode(13, OUTPUT);

}

void loop() {
int i,j;
for (i=0; i<100; i++){
digitalWrite(13, HIGH);
delay(i/5);
digitalWrite(13, LOW);
delay((100-i)/5);
}
}
