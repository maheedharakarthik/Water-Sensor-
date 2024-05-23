// Define the pin for the water sensor
const int waterSensorPin = A0;  // Analog pin A0

void setup() {
  // Start serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Read the value from the water sensor
  int sensorValue = analogRead(waterSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Water Sensor Value: ");
  Serial.println(sensorValue);

  // Add a small delay before the next reading
  delay(1000);
}
