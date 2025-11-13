// MASTER
#include <Wire.h>

void setup() {
  Wire.begin(); // Join I2C bus as master
  Serial.begin(9600);
  delay(1000); // Give some time for setup
}

void loop() {
  Wire.beginTransmission(8); // Address of slave (must match slave's Wire.begin(8))
  Wire.write("Hello from Master");
  Wire.endTransmission();

  Serial.println("Sent to Slave: Hello from Master");

  delay(1000); // Send every 1 second
}

//---------------------------------------------------------
// SLAVE
#include <Wire.h>

void setup() {
  Wire.begin(8);        // Set I2C address to 8
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}

void loop() {
  // Do nothing in loop
}

void receiveEvent(int bytes) {
  while (Wire.available()) {
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();
}