

const int MOTOR_A1 = 5;
const int MOTOR_A2 = 4;
const int ENA      = 3;
const int MOTOR_B1 = 7;
const int MOTOR_B2 = 6;
const int ENB      = 9;
void setup() {
  
  pinMode(MOTOR_A1, OUTPUT);
  pinMode(MOTOR_A2, OUTPUT);
  pinMode(MOTOR_B1, OUTPUT);
  pinMode(MOTOR_B2, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
turnLeft();
}
void turnRight() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 60);
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, HIGH);
  digitalWrite(MOTOR_B1, HIGH);
  digitalWrite(MOTOR_B2, LOW);
}
void Stop() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, LOW);
  digitalWrite(MOTOR_B1, LOW);
  digitalWrite(MOTOR_B2, LOW);

}
void turnLeft() {
  analogWrite(ENA, 60);
  analogWrite(ENB, 0);
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, HIGH);
  digitalWrite(MOTOR_B1, HIGH);
  digitalWrite(MOTOR_B2, LOW);

}
void moveForward() {
  analogWrite(ENA, 60);
  analogWrite(ENB, 60);
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, HIGH);
  digitalWrite(MOTOR_B1, HIGH);
  digitalWrite(MOTOR_B2, LOW);
 
}
