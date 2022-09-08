
int LED_D1 = 15;

void setup() {

  pinMode(LED_D1, OUTPUT);
  
}

void loop() {

  digitalWrite(LED_D1, HIGH);
  delay(1000);
  digitalWrite(LED_D1, LOW);
  delay(1000);

}
