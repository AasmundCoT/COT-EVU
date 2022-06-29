#include <Zumo32U4.h>

//https://www.pololu.com/docs/0J63

const int ENA = 10; //Motor 1
const int IN1 = 16; //Wheel direction 1
const int ENB = 9; //Motor 2
const int IN2 = 15; //Wheel direction 2

int actual_l_val = 0;
int actual_r_val = 0;

int ideal_l_val = 0;
int ideal_r_val = 0;

int acc_const = 25;
int accPerSec = 200;
unsigned long prevAccMillis = 0;

const int lineSensorValues[5] = {0,0,0,0,0};

const unsigned int microSecPerByte = ceil(10.0 / 115200.0 * 100000);

unsigned long prevReadMillis = 0;
int readPerSec = 25;

Zumo32U4LineSensors lineSensors;
Zumo32U4Buzzer buzzer;
Zumo32U4Motors motors;
Zumo32U4ProximitySensors proxSensors;

int8_t data[2];
int8_t pos;

void calibrateLineSensors() {
  for(uint8_t i = 0; i < 120; i++) {
    if (i > 30 && i <= 90) {
      drive(-100,100);
    } else {
      drive(100,-100);
    }

    lineSensors.calibrate();
  }
  drive(0,0);
}

void drive(int8_t l_val, int8_t r_val) {
  digitalWrite(IN1, l_val>0?0:1);
  digitalWrite(IN2, r_val>0?0:1);
  
  l_val = 2*abs(l_val);
  r_val = 2*abs(r_val);
  
  analogWrite(ENA, l_val);
  analogWrite(ENB, r_val);
}

void accelerate(int8_t l_val, int8_t r_val){
  ideal_r_val = r_val;
  ideal_l_val = l_val;
}

void setup() {
  drive(0,0);
  
  lineSensors.initFiveSensors();
  proxSensors.initFrontSensor();
  
  Serial1.begin(115200);
  Serial.begin(115200);

  delay(100);
  buzzer.play(">g32>>>>>c32");
}

void loop() {
  if((millis()-prevAccMillis)>(1000/accPerSec)) {

    if(actual_l_val < ideal_l_val) {
      actual_l_val += acc_const;
    }
    if(actual_r_val < ideal_r_val) {
      actual_r_val += acc_const;
    }
    
    if(actual_l_val > ideal_l_val) {
      actual_l_val -= acc_const;
    }
    if(actual_r_val > ideal_r_val) {
      actual_r_val -= acc_const;
    }

    if(abs(actual_r_val - ideal_r_val) <= acc_const) {
      actual_r_val = ideal_r_val;
    }
    if(abs(actual_l_val - ideal_l_val) <= acc_const) {
      actual_l_val = ideal_l_val;
    }
    
    drive(actual_l_val, actual_r_val);
    
    prevAccMillis = millis();
  }
  
  while(Serial1.available()) {
    char received = (char)Serial1.read();
    //Serial.print("recieved command: ");
    //Serial.println(received); //Print data to Serial Monitor 

    switch(received) {
      case 'c': //kalibrer linjefølger
        calibrateLineSensors();
        break;

      case 'k': //Kjør!     
        delayMicroseconds(microSecPerByte*2*10);   
        for(int i = 0; i < 2; i++){
          if(Serial1.available()){
            data[i] = Serial1.read();
            //Serial.print(data[i]);
          }
        }
        while(Serial1.available()) Serial1.read();
        accelerate(data[0], data[1]);  
        break;
        
      default:
        break;
    } 
  }

  if((millis()-prevReadMillis)>(1000/readPerSec)) {
    proxSensors.read();
    int8_t leftValue = proxSensors.countsFrontWithLeftLeds();
    int8_t rightValue = proxSensors.countsFrontWithRightLeds();
    Serial1.write(leftValue+rightValue);

    pos = (int8_t)((lineSensors.readLine(lineSensorValues,QTR_EMITTERS_ON,1)/20)-100);
    Serial1.write(pos);

    prevReadMillis = millis();
  }
}
