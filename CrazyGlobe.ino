
#include <CapacitiveSensor.h>
const int CONTROL_ID = 0;

CapacitiveSensor   cs_1 = CapacitiveSensor(13,0);  
CapacitiveSensor   cs_2 = CapacitiveSensor(13,1);   
CapacitiveSensor   cs_3 = CapacitiveSensor(13,2);
CapacitiveSensor   cs_4 = CapacitiveSensor(13,3);
CapacitiveSensor   cs_5 = CapacitiveSensor(13,4);
CapacitiveSensor   cs_6 = CapacitiveSensor(13,5);
CapacitiveSensor   cs_7 = CapacitiveSensor(13,6);
CapacitiveSensor   cs_8 = CapacitiveSensor(13,7);
CapacitiveSensor   cs_9 = CapacitiveSensor(13,8);
CapacitiveSensor   cs_10 = CapacitiveSensor(13,9);
CapacitiveSensor   cs_11 = CapacitiveSensor(13,10);
CapacitiveSensor   cs_12 = CapacitiveSensor(13,11);
CapacitiveSensor   cs_13 = CapacitiveSensor(13,12);
CapacitiveSensor   cs_14 = CapacitiveSensor(13,14);
CapacitiveSensor   cs_15 = CapacitiveSensor(13,15);
CapacitiveSensor   cs_16 = CapacitiveSensor(13,16);
CapacitiveSensor   cs_17 = CapacitiveSensor(13,17);
CapacitiveSensor   cs_18 = CapacitiveSensor(13,18);
CapacitiveSensor   cs_19 = CapacitiveSensor(13,19);
CapacitiveSensor   cs_20 = CapacitiveSensor(13,20);
CapacitiveSensor   cs_21 = CapacitiveSensor(13,21);
CapacitiveSensor   cs_22 = CapacitiveSensor(13,22);
CapacitiveSensor   cs_23 = CapacitiveSensor(13,23);
CapacitiveSensor   cs_24 = CapacitiveSensor(13,24);
CapacitiveSensor   cs_25 = CapacitiveSensor(13,25);
CapacitiveSensor   cs_26 = CapacitiveSensor(13,26);
CapacitiveSensor   cs_27 = CapacitiveSensor(13,27);
CapacitiveSensor   cs_28 = CapacitiveSensor(13,28);
CapacitiveSensor   cs_29 = CapacitiveSensor(13,29);
CapacitiveSensor   cs_30 = CapacitiveSensor(13,30);
CapacitiveSensor   cs_31 = CapacitiveSensor(13,31);
CapacitiveSensor   cs_32 = CapacitiveSensor(13,32);
CapacitiveSensor   cs_33 = CapacitiveSensor(13,33);
CapacitiveSensor   cs_34 = CapacitiveSensor(13,34);
CapacitiveSensor   cs_35 = CapacitiveSensor(13,35);
CapacitiveSensor   cs_36 = CapacitiveSensor(13,36);
CapacitiveSensor   cs_37 = CapacitiveSensor(13,37);
CapacitiveSensor   cs_38 = CapacitiveSensor(13,38);
CapacitiveSensor   cs_39 = CapacitiveSensor(13,39);
CapacitiveSensor   cs_40 = CapacitiveSensor(13,40);
CapacitiveSensor   cs_41 = CapacitiveSensor(13,41);
CapacitiveSensor   cs_42 = CapacitiveSensor(13,42);
CapacitiveSensor   cs_43 = CapacitiveSensor(13,43);
CapacitiveSensor   cs_44 = CapacitiveSensor(13,44);
CapacitiveSensor   cs_45 = CapacitiveSensor(13,45);
CapacitiveSensor   cs_46 = CapacitiveSensor(13,46);
CapacitiveSensor   cs_47 = CapacitiveSensor(13,47);
CapacitiveSensor   cs_48 = CapacitiveSensor(13,48);
CapacitiveSensor   cs_49 = CapacitiveSensor(13,49);
CapacitiveSensor   cs_50 = CapacitiveSensor(13,50);
CapacitiveSensor   cs_51 = CapacitiveSensor(13,51);
CapacitiveSensor   cs_52 = CapacitiveSensor(13,52);
CapacitiveSensor   cs_53 = CapacitiveSensor(13,53);
CapacitiveSensor   cs_54 = CapacitiveSensor(13,A15);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting up sensors");
}

void loop() {
  // put your main code here, to run repeatedly:
  int touched = -1;
  long read_time;

    read_time = cs_1.capacitiveSensor(10);

    if(read_time > 180){
      touched = 1 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_2.capacitiveSensor(10);

    if(read_time > 180){
      touched = 2 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_3.capacitiveSensor(10);

    if(read_time > 180){
      touched = 3 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_4.capacitiveSensor(10);
    
    if(read_time > 180){
      touched = 4 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_5.capacitiveSensor(10);

    if(read_time > 180){
      touched = 5 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_6.capacitiveSensor(10);

    if(read_time > 180){
      touched = 6 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_7.capacitiveSensor(10);

    if(read_time > 180){
      touched = 7 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_8.capacitiveSensor(10);

    if(read_time > 180){
      touched = 8 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_9.capacitiveSensor(10);

    if(read_time > 180){
      touched = 9 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_10.capacitiveSensor(10);

    if(read_time > 180){
      touched = 10 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_11.capacitiveSensor(10);

    if(read_time > 180){
      touched = 11 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_12.capacitiveSensor(10);

    if(read_time > 180){
      touched = 12 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_13.capacitiveSensor(10);

    if(read_time > 180){
      touched = 13 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_14.capacitiveSensor(10);
    
    if(read_time > 180){
      touched = 14 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_15.capacitiveSensor(10);

    if(read_time > 180){
      touched = 15 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_16.capacitiveSensor(10);

    if(read_time > 180){
      touched = 16 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_17.capacitiveSensor(10);

    if(read_time > 180){
      touched = 17 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_18.capacitiveSensor(10);

    if(read_time > 180){
      touched = 18 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
        
    read_time = cs_19.capacitiveSensor(10);

    if(read_time > 180){
      touched = 19 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_20.capacitiveSensor(10);

    if(read_time > 180){
      touched = 20 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_21.capacitiveSensor(10);

    if(read_time > 180){
      touched = 21 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_22.capacitiveSensor(10);

    if(read_time > 180){
      touched = 22 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_23.capacitiveSensor(10);

    if(read_time > 180){
      touched = 23 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_24.capacitiveSensor(10);

    if(read_time > 180){
      touched = 24 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_25.capacitiveSensor(10);

    if(read_time > 180){
      touched = 25 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }    
    
    read_time = cs_26.capacitiveSensor(10);

    if(read_time > 180){
      touched = 26 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_27.capacitiveSensor(10);

    if(read_time > 180){
      touched = 27 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_28.capacitiveSensor(10);

    if(read_time > 180){
      touched = 28 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_29.capacitiveSensor(10);
    
    if(read_time > 180){
      touched = 29 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }        
        
    read_time = cs_30.capacitiveSensor(10);

    if(read_time > 180){
      touched = 30 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_31.capacitiveSensor(10);

    if(read_time > 180){
      touched = 31 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_32.capacitiveSensor(10);

    if(read_time > 180){
      touched = 32 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_33.capacitiveSensor(10);

    if(read_time > 180){
      touched = 33 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_34.capacitiveSensor(10);

    if(read_time > 180){
      touched = 34 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_35.capacitiveSensor(10);

    if(read_time > 180){
      touched = 35 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }    
    
    read_time = cs_36.capacitiveSensor(10);

    if(read_time > 180){
      touched = 36 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_37.capacitiveSensor(10);

    if(read_time > 180){
      touched = 37 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_38.capacitiveSensor(10);

    if(read_time > 180){
      touched = 38 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_39.capacitiveSensor(10);

    if(read_time > 180){
      touched = 39 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_40.capacitiveSensor(10);

    if(read_time > 180){
      touched = 40 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_41.capacitiveSensor(10);
    
    if(read_time > 180){
      touched = 41 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_42.capacitiveSensor(10);

    if(read_time > 180){
      touched = 42 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_43.capacitiveSensor(10);
    
    if(read_time > 180){
      touched = 43 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_44.capacitiveSensor(10);

    if(read_time > 180){
      touched = 44 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_45.capacitiveSensor(10);

    if(read_time > 180){
      touched = 45 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }    
    
    read_time = cs_46.capacitiveSensor(10);

    if(read_time > 180){
      touched = 46 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_47.capacitiveSensor(10);

    if(read_time > 180){
      touched = 47 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_48.capacitiveSensor(10);

    if(read_time > 180){
      touched = 48 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_49.capacitiveSensor(10);

    if(read_time > 180){
      touched = 49 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }
    
    read_time = cs_50.capacitiveSensor(10);

    if(read_time > 180){
      touched = 50 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }    
        
    read_time = cs_51.capacitiveSensor(10);

    if(read_time > 180){
      touched = 51 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_52.capacitiveSensor(10);

    if(read_time > 180){
      touched = 52 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_53.capacitiveSensor(10);

    if(read_time > 180){
      touched = 53 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    }

    read_time = cs_54.capacitiveSensor(10);

    if(read_time > 180){
      touched = 54 + CONTROL_ID;
      Serial.print(touched);
      goto end;
    } 
                                   
  end:
  if(touched == -1){
    Serial.print(touched);
  }
  else{
    touched = -1;
  }
}

