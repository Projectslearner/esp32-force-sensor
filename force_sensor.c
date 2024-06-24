/*
    Project name : ESP32 Force Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-force-sensor
*/

const int forceSensorPin = 34; // Analog pin connected to the force sensor
const int calibrationFactor = 1000; // Adjust this based on your sensor and setup

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(forceSensorPin, INPUT); // Set force sensor pin as input
}

void loop() {
  // Read analog value from the force sensor
  int forceValue = analogRead(forceSensorPin);

  // Calculate force based on sensor reading and calibration factor
  float force = map(forceValue, 0, 4095, 0, calibrationFactor);

  // Print force value to Serial Monitor
  Serial.print("Force: ");
  Serial.print(force);
  Serial.println(" N");

  delay(1000); // Add a delay before the next reading
}
