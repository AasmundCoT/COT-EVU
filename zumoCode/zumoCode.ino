//Sebs start på en zumo-kode.

#include <Zumo32U4.h>

//https://www.pololu.com/docs/0J63
//TODO: imu, 

const int ENB = 9; //Motor 1 right
const int IN2 = 15; //Wheel direction 1
const int ENA = 10; //Motor 2 left
const int IN1 = 16; //Wheel direction 2

const int lineSensorValues[5] = {0,0,0,0,0};

unsigned long prevReadMillis = 0;
int readPerSec = 10;

Zumo32U4LineSensors lineSensors;
Zumo32U4Buzzer buzzer;
Zumo32U4Motors motors;
Zumo32U4ProximitySensors proxSensors;

int8_t data[4];
int8_t pos;

#define FORWARD 1
#define BACKWARD 0

void calibrateLineSensors() //From sketch
{
  for(uint8_t i = 0; i < 120; i++)
  {
    if (i > 30 && i <= 90)
    {
      drive(200,200,BACKWARD,FORWARD);
    }
    else
    {
      drive(200,200,FORWARD,BACKWARD);
    }

    lineSensors.calibrate();
  }
  drive(0,0,FORWARD,FORWARD);
}

//Turn the car left or right (turns with the frontwheels)
void drive(uint8_t ENA_val, uint8_t ENB_val, uint8_t l_dir, uint8_t r_dir) {
  //Eks: 150, 60, 1, 1 => Venstre motor: 160/255. H Motor: 60/255. V: fram. H: fram.

  if(abs(ENA_val-100)>100) { ENA_val=100+100*(abs(ENA_val-100)/(ENA_val-100)); }
  if(abs(ENB_val-100)>100) { ENB_val=100+100*(abs(ENB_val-100)/(ENB_val-100)); }
  //Serial.println(ENA_val);
  //Serial.println(ENB_val);
  
  analogWrite(ENA, ENA_val);
  analogWrite(ENB, ENB_val);
  
  digitalWrite(IN1, l_dir==0);
  digitalWrite(IN2, r_dir==0);
}

void setup() {
  lineSensors.initFiveSensors();
  proxSensors.initFrontSensor();
  
  Serial1.begin(115200);
  Serial.begin(115200);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);

  delay(100);

  buzzer.play(">g32>>>>>c32");
  Serial.println("Setup complete");

  drive(0,0,1,1);

}

void loop() {
  delay(10);

  while(Serial1.available()) {
    delay(20);
    char received = (char)Serial1.read();
    //Serial.print("recieved command: ");
    //Serial.println(received); //Print data to Serial Monitor 

    switch(received) {
      case 'c': //kalibrer linjefølger
        calibrateLineSensors();
        break;

      case 'k': //Kjør!        
        for(int i = 0; i < 4; i++){
          if(Serial1.available()){
            data[i] = Serial1.read();
            //Serial.print(data[i]);
          }
        }
        Serial.println();
        drive(data[0], data[1], data[2], data[3]);  
        break;
        
      default:
        break;
    } 
  }

  if((millis()-prevReadMillis)>(1000/readPerSec)) {
    proxSensors.read();
    uint8_t leftValue = proxSensors.countsFrontWithLeftLeds();
    uint8_t rightValue = proxSensors.countsFrontWithRightLeds();
    //Serial.print("Prox data: ");
    //Serial.print(leftValue+rightValue);
    //Serial.print(" ");
    Serial1.write(leftValue+rightValue);

    pos = (int8_t)((lineSensors.readLine(lineSensorValues,QTR_EMITTERS_ON,1)/20)-100);
    //Serial.print("  Line data: ");
    //Serial.println(pos);
    Serial1.write(pos);

    prevReadMillis = millis();
  }
}
