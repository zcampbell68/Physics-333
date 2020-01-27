void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int Fast = 500;
  int Slow = 1000;
  digitalWrite(13, HIGH);
  delay(Fast);
 digitalWrite(13, LOW);
  delay(Fast);
   digitalWrite(13, HIGH);
  delay(Fast);
 digitalWrite(13, LOW);
  delay(Fast);
   digitalWrite(13, HIGH);
  delay(Fast);
 digitalWrite(13, LOW);
  delay(Fast);
  digitalWrite(13, HIGH);
  delay(Slow);
 digitalWrite(13, LOW);
  delay(Slow);
  digitalWrite(13, HIGH);
  delay(Slow);
 digitalWrite(13, LOW);
  delay(Slow);
  digitalWrite(13, HIGH);
  delay(Slow);
 digitalWrite(13, LOW);
  delay(Slow);
  digitalWrite(13, HIGH);
  delay(Fast);
 digitalWrite(13, LOW);
  delay(Fast);
   digitalWrite(13, HIGH);
  delay(Fast);
 digitalWrite(13, LOW);
  delay(Fast);
   digitalWrite(13, HIGH);
  delay(Fast);
 digitalWrite(13, LOW);
  delay(Fast);
}
