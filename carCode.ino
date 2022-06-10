#define RXD2 16
#define TXD2 17

void setup() {
  // Note the format for setting a serial port is as follows: Serial2.begin(baud-rate, protocol, RX pin, TX pin);
  Serial.begin(9600);
  //Serial1.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
}

void loop() { //Choose Serial1 or Serial2 as required
  while (Serial2.available()) {
    Serial2.print(1);
    delay(1000);
    Serial2.print(0);
    delay(1000);
  }
} 