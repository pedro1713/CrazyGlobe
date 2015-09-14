#include <CapacitiveSensor.h>

const int CONTROL_ID = 0;

CapacitiveSensor sensors[54];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int i,j; 

  for(i=0; i<53; i++){
    j = i+1;
    sensors[i] = CapacitiveSensor(0,j);
  }
  sensors[i] = CapacitiveSensor(0,A15);
  Serial.println("Starting up");
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  int touched = -1;
  long read_time;
  
  for(i=0; i < 54; i++){
    read_time = sensors[i].capacitiveSensor(10);

    if(read_time > 180){
      touched = i + CONTROL_ID;
      Serial.print(touched);
      break;
    }
  }
  if(touched == -1){
    Serial.print(touched);
  }
  else{
    touched = -1;
  }
}
