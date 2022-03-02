const int inputPin = 34;    // GPIO Pin
const int AirValue = 3579;   //Need change for callibration for air
const int WaterValue = 250;  //Need change for callibration for water

float soilPercentage = 0;
float soilMoistureValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  soilMoistureValue = analogRead(inputPin);
  soilPercentage = ((((AirValue - WaterValue) - (soilMoistureValue - WaterValue)) /(AirValue - WaterValue)) * 100);
  Serial.println(String(soilPercentage) + "%");
  delay(100);
}
