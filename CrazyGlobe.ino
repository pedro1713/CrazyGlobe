#include <CapacitiveSensor.h>
const int CONTROL_ID = 1000;
const int SAMPLES = 10;
const int THRESHOLD = 125;

CapacitiveSensor   cs_1 = CapacitiveSensor(12,2);  
CapacitiveSensor   cs_2 = CapacitiveSensor(12,3);   
CapacitiveSensor   cs_3 = CapacitiveSensor(12,4);
CapacitiveSensor   cs_4 = CapacitiveSensor(12,5);
CapacitiveSensor   cs_5 = CapacitiveSensor(12,6);
CapacitiveSensor   cs_6 = CapacitiveSensor(12,7);
CapacitiveSensor   cs_7 = CapacitiveSensor(12,8);
CapacitiveSensor   cs_8 = CapacitiveSensor(12,9);
CapacitiveSensor   cs_9 = CapacitiveSensor(12,10);
CapacitiveSensor   cs_10 = CapacitiveSensor(12,11);
CapacitiveSensor   cs_11 = CapacitiveSensor(12,14);
CapacitiveSensor   cs_12 = CapacitiveSensor(12,15);
CapacitiveSensor   cs_13 = CapacitiveSensor(12,16);
CapacitiveSensor   cs_14 = CapacitiveSensor(12,17);
CapacitiveSensor   cs_15 = CapacitiveSensor(12,18);
CapacitiveSensor   cs_16 = CapacitiveSensor(12,19);
CapacitiveSensor   cs_17 = CapacitiveSensor(12,22);
CapacitiveSensor   cs_18 = CapacitiveSensor(12,23);

CapacitiveSensor   cs_19 = CapacitiveSensor(24,25);
CapacitiveSensor   cs_20 = CapacitiveSensor(24,26);
CapacitiveSensor   cs_21 = CapacitiveSensor(24,27);
CapacitiveSensor   cs_22 = CapacitiveSensor(24,28);
CapacitiveSensor   cs_23 = CapacitiveSensor(24,29);
CapacitiveSensor   cs_24 = CapacitiveSensor(24,30);
CapacitiveSensor   cs_25 = CapacitiveSensor(24,31);
CapacitiveSensor   cs_26 = CapacitiveSensor(24,32);
CapacitiveSensor   cs_27 = CapacitiveSensor(24,33);
CapacitiveSensor   cs_28 = CapacitiveSensor(24,34);
CapacitiveSensor   cs_29 = CapacitiveSensor(24,35);
CapacitiveSensor   cs_30 = CapacitiveSensor(24,36);
CapacitiveSensor   cs_31 = CapacitiveSensor(24,37);
CapacitiveSensor   cs_32 = CapacitiveSensor(24,38);
CapacitiveSensor   cs_33 = CapacitiveSensor(24,39);
CapacitiveSensor   cs_34 = CapacitiveSensor(24,40);
CapacitiveSensor   cs_35 = CapacitiveSensor(24,41);
CapacitiveSensor   cs_36 = CapacitiveSensor(24,42);

CapacitiveSensor   cs_37 = CapacitiveSensor(43,44);
CapacitiveSensor   cs_38 = CapacitiveSensor(43,45);
CapacitiveSensor   cs_39 = CapacitiveSensor(43,46);
CapacitiveSensor   cs_40 = CapacitiveSensor(43,47);
CapacitiveSensor   cs_41 = CapacitiveSensor(43,48);
CapacitiveSensor   cs_42 = CapacitiveSensor(43,49);
CapacitiveSensor   cs_43 = CapacitiveSensor(43,50);
CapacitiveSensor   cs_44 = CapacitiveSensor(43,51);
CapacitiveSensor   cs_45 = CapacitiveSensor(43,52);
CapacitiveSensor   cs_46 = CapacitiveSensor(43,53);
CapacitiveSensor   cs_47 = CapacitiveSensor(43,A15);
CapacitiveSensor   cs_48 = CapacitiveSensor(43,A14);
CapacitiveSensor   cs_49 = CapacitiveSensor(43,A13);
CapacitiveSensor   cs_50 = CapacitiveSensor(43,A12);
CapacitiveSensor   cs_51 = CapacitiveSensor(43,A11);
CapacitiveSensor   cs_52 = CapacitiveSensor(43,A10);
CapacitiveSensor   cs_53 = CapacitiveSensor(43,A9);
CapacitiveSensor   cs_54 = CapacitiveSensor(43,A8);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting up sensors");
}

void loop() {
  // put your main code here, to run repeatedly:
  int touched = -1;
  int index;
  long read_time[54];
  //unsigned long start,finish;
    //start = millis();
    index = 0;
    read_time[index++] = cs_1.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_2.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_3.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_4.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_5.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_6.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_7.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_8.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_9.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_10.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_11.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_12.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_13.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_14.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_15.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_16.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_17.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_18.capacitiveSensor(SAMPLES);
    
    read_time[index++] = cs_19.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_20.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_21.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_22.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_23.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_24.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_25.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_26.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_27.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_28.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_29.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_30.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_31.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_32.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_33.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_34.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_35.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_36.capacitiveSensor(SAMPLES);
    
    read_time[index++] = cs_37.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_38.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_39.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_40.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_41.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_42.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_43.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_44.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_45.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_46.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_47.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_48.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_49.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_50.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_51.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_52.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_53.capacitiveSensor(SAMPLES);
    read_time[index++] = cs_54.capacitiveSensor(SAMPLES);

  //finish = millis();
  //Serial.println(finish-start);
for(index=0; index < 54; index++){
    //Serial.print(index);
    //Serial.print("\t");
    //Serial.println(read_time[index]);
    if(read_time[index] > THRESHOLD){
      	touched = 1 + index + CONTROL_ID;
      	Serial.println(touched);
	      break;
    } 
}
                             
  delay(300);
}

