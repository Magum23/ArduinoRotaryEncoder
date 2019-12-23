#define encA 3
#define encB 4

int counter = 0;
int lastPosA;
int lastPosB;
int currPosA;
int currPosB;

void setup() {
Serial.begin(9600);
pinMode(encA, INPUT);
pinMode(encB, INPUT);
}

void loop() {
currPosA = digitalRead(encA);
currPosB = digitalRead(encB);
if ((currPosA != lastPosA)){
  if ((currPosA == 0) and (currPosB == 0)){
    counter--;
    Serial.println(counter);
  }
  if ((currPosA == 1) and (currPosB == 0)){
    counter++;
    Serial.println(counter);
    }
lastPosA = currPosA;
lastPosB = currPosB;
}}
