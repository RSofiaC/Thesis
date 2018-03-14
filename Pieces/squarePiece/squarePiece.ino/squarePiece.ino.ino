//Regina Cantu ITP Thesis 2018 - Heartbeat

const int ledONE = 11;
const int ledTWO = 10;
const int ledTHREE  = 9;



void setup() {
  // Start off with the LED off.

  Serial.begin(9600);
  pinMode(ledONE, OUTPUT);
  pinMode(ledTWO, OUTPUT);
  pinMode(ledTHREE, OUTPUT);
}

void loop() {
  long espera = random (200, 800);
    long espera1 = random (200, 800);
      long espera2 = random (200, 800);
  digitalWrite(ledONE, HIGH);
  delay(espera);
   digitalWrite(ledONE, LOW);
   delay(espera1);
  //Serial.println (espera);
  digitalWrite(ledTWO, HIGH);
   delay(espera2);
      digitalWrite(ledTWO, LOW);
   delay(espera);
  // Serial.println (espera);
  digitalWrite(ledTHREE, HIGH);
   delay(espera1);
      digitalWrite(ledTHREE, LOW);
   delay(espera2);
  // Serial.println (espera);
}


