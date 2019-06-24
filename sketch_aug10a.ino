int Red = 48;
int Blue = 50;
int Yellow = 52;
void setup() {
  // put your setup code here, to run once:
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Yellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int t = 1000;
  for(int i = 0;i < 20;i++){
    RaiseAllLEDS(t);
    LowerAllLEDS(t);
    t = t - 50;
  }
   for(int i = 0;i < 20;i++){
    RaiseAllLEDS(t);
    LowerAllLEDS(t);
    t = t +  50;
  }
}

void RaiseAllLEDS(int delayTime){
    digitalWrite(Red, HIGH);
    delay(delayTime);
    digitalWrite(Blue, HIGH);
    delay(delayTime);
    digitalWrite(Yellow, HIGH);
    delay(delayTime);
}

void LowerAllLEDS(int t){
    digitalWrite(Red, LOW);
    delay(t);
    digitalWrite(Blue, LOW);
    delay(t);
    digitalWrite(Yellow, LOW);
    delay(t);
}


