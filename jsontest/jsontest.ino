const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);


  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage);


  float temperature = (voltage - .5) * 100;
  Serial.print(", Temperature: ");
  Serial.print(temperature);
  Serial.println();

  delay(1000);
}
