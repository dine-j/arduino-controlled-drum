//AF_DCMotor motorL(2, MOTOR12_64KHZ);
//AF_DCMotor motorR(2, MOTOR12_64KHZ);
int motor = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//  motorL.setSpeed(150);
//  motorR.setSpeed(150);
  pinMode(motor, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  int sensorValue = analogRead(A0);
//  float voltage = sensorValue * (5.0 / 1023.0);
//  delay(500);
//  Serial.println(voltage);
//  motorL.run(FORWARD);
//  delay(1000);
//  motorL.run(BACKWARD);
//  motorR.run(FORWARD);
//  delay(1000);
//  motorR.run(BACKWARD);
//  motorL.run(RELEASE);
//  delay(1000);
//  motorR.run(RELEASE);
  analogWrite(motor, 150);
}
