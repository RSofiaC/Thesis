//Regina Cantu ITP Thesis 2018 - Heartbeat

const int ledONE = 3;



void setup() {
  // Start off with the LED off.

  pinMode(ledONE, OUTPUT);

}

void loop() {
  long espera = random (100, 200);
    long espera1 = random (10, 50);
  digitalWrite(ledONE, HIGH);
  delay(espera);
   digitalWrite(ledONE, LOW);
   delay(espera1);
   digitalWrite(ledONE, HIGH);
  delay(espera);
  digitalWrite(ledONE, LOW);
   delay(espera1);
}


