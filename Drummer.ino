int direcR = 12;
int brakeR = 9;
int spdR = 3;

int direcL = 13;
int brakeL = 8;
int spdL = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(direcR, OUTPUT);
  pinMode(brakeR, OUTPUT);
  pinMode(direcL, OUTPUT);
  pinMode(brakeL, OUTPUT);

  digitalWrite(direcR, LOW);
  digitalWrite(brakeR, LOW);
  analogWrite(spdR, 255);

  digitalWrite(direcL, LOW);
  digitalWrite(brakeL, LOW);
  analogWrite(spdL, 255);
  
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

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

  digitalWrite(direcL, HIGH);
  digitalWrite(brakeL, LOW);
  analogWrite(spdL, 255);

  delay(120);
  digitalWrite(brakeR, HIGH);
  delay(10);

  delay(1000);

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

  digitalWrite(direcL, HIGH);
  digitalWrite(brakeL, LOW);
  analogWrite(spdL, 255);

  delay(120);
  digitalWrite(brakeR, HIGH);
  delay(10);

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

  digitalWrite(direcL, HIGH);
  digitalWrite(brakeL, LOW);
  analogWrite(spdL, 255);

  delay(120);
  digitalWrite(brakeR, HIGH);
  delay(10);

  delay(1000);
}
