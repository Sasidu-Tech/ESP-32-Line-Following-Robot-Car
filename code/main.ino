//Developer :- Sasidu - Tech

#define ENA 15
#define IN1 2
#define IN2 4

#define IN3 16
#define IN4 17
#define ENB 19

#define LEFT_IR 34
#define RIGHT_IR 35

void setup() {
  Serial.begin(115200);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LEFT_IR, INPUT);
  pinMode(RIGHT_IR, INPUT);

  analogWrite(ENA, 120);
  analogWrite(ENB, 120);
}

void loop() {

  int left = digitalRead(LEFT_IR);
  int right = digitalRead(RIGHT_IR);

  Serial.print("Left: ");
  Serial.print(left);
  Serial.print(" Right: ");
  Serial.println(right);

  if(left == 0 && right == 0){
    forward();
  }
  else if(left == 1 && right == 0){
    leftTurn();
  }
  else if(left == 0 && right == 1){
    rightTurn();
  }
  else{
    stopMotor();
  }

  delay(50);
}

void forward(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void leftTurn(){

  analogWrite(ENA, 60);
  analogWrite(ENB, 110);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void rightTurn(){

  analogWrite(ENA, 110);
  analogWrite(ENB, 60);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

void stopMotor(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}
