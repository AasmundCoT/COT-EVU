//Sebs start på en zumo-kode.

#include <Zumo32U4.h>

//https://www.pololu.com/docs/0J63
//TODO: imu, 

const int ENA = 9; //Motor 1
const int IN1 = 15; //Wheel direction 1
const int ENB = 10; //Motor 2
const int IN2 = 16; //Wheel direction 2

const int lineSensorValues[5] = {0,0,0,0,0};

Zumo32U4LineSensors lineSensors;
Zumo32U4Buzzer buzzer;
Zumo32U4Motors motors;
Zumo32U4ProximitySensors proxSensors;

int8_t data[4];
int8_t pos;

void calibrateLineSensors() //From sketch
{
  for(uint8_t i = 0; i < 120; i++)
  {
    if (i > 30 && i <= 90)
    {
      motors.setSpeeds(-200, 200);
    }
    else
    {
      motors.setSpeeds(200, -200);
    }

    lineSensors.calibrate();
  }
  motors.setSpeeds(0, 0);
}

//Turn the car left or right (turns with the frontwheels)
void drive(uint8_t ENB_val, uint8_t ENA_val, uint8_t l_dir, uint8_t r_dir) {
  //Eks: 150, 60, 1, 1 => Venstre motor: 160/255. H Motor: 60/255. V: fram. H: fram.
  
  analogWrite(ENA, ENA_val);
  analogWrite(ENB, ENB_val);
  
  digitalWrite(IN1, l_dir==0);
  digitalWrite(IN2, r_dir==0);
}

void setup() {
  lineSensors.initFiveSensors();
  proxSensors.initFrontSensor();
  
  Serial1.begin(9600);
  Serial.begin(9600);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);

  delay(100);

  buzzer.play(">g32>>>>>c32");
  Serial.println("Setup complete");
}

void loop() {
  Serial.print("\nLoop: ");
  delay(10);

  while(Serial1.available()) {
    delay(20);
    char received = (char)Serial1.read();
    Serial.print("recieved command: ");
    Serial.println(received); //Print data to Serial Monitor 

    switch(received) {
      case 'c': //kalibrer linjefølger
        calibrateLineSensors();
        break;

      case 'p': //Send Front-proximity sine to målinger
        proxSensors.read();
        uint8_t leftValue = proxSensors.countsFrontWithLeftLeds();
        uint8_t rightValue = proxSensors.countsFrontWithRightLeds();
        Serial1.print(leftValue);
        Serial1.print(rightValue);
        break;
        
      case 'l': //linjesensorer
        pos = (int8_t)(lineSensors.readLine(lineSensorValues));
        Serial1.print(pos);
        break;

      case 'k': //Kjør!
        for(int i = 0; i < 4; i++){
          if(Serial1.available()){
            data[i] = Serial1.read();
            Serial.print(data[i]);
          }
        }
        drive(data[0], data[1], data[2], data[3]);  
        break;
    }
  }
}
