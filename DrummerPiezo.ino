//piezo 1
int piezo = 5;

int reading = 0;

//right drumstick
int direcR = 12;
int brakeR = 9;
int spdR = 3;

//left drumstick
int direcL = 13;
int brakeL = 8;
int spdL = 11;

void setup() {
  Serial.begin(9600);

  pinMode(direcR, OUTPUT);
  pinMode(brakeR, OUTPUT);
  pinMode(direcL, OUTPUT);
  pinMode(brakeL, OUTPUT);

  //set both sticks to up position
  digitalWrite(direcR, LOW);
  digitalWrite(brakeR, LOW);
  analogWrite(spdR, 255);

  digitalWrite(direcL, LOW);
  digitalWrite(brakeL, LOW);
  analogWrite(spdL, 255);
  
  delay(1000);
}

void loop() {
  //read input from piezo
  reading = analogRead(piezo);
  Serial.println(reading);

  //if knock is over threshold then drum right
  if (reading > 30) {
    Serial.println("HIT");

    digitalWrite(direcR, HIGH);
    digitalWrite(brakeR, LOW);
    analogWrite(spdR, 255);

    digitalWrite(direcL, LOW);
    digitalWrite(brakeL, LOW);
    analogWrite(spdL, 255);
    
    delay(120);
    digitalWrite(brakeL, HIGH);
    delay(10);

    digitalWrite(direcR, LOW);
    digitalWrite(brakeR, LOW);
    analogWrite(spdR, 255);
  
    delay(120);
    digitalWrite(brakeR, HIGH);
    delay(10);
  }
  
  delay(100);
}

