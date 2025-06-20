
//EV BATTERY COOLING SYSTEM
//Using peltiertech,Fan,LM35,Arduino

const int tempPin = A0; // LM35 analog temperature sensor
const int fanPin = 9; // Fan control (digital output)
const int pelPin = 8; // peltier control (digital output)

const float maxTemp = 44; // Turn on cooling at this temperature
const float minTemp = 30.0; // Turn off cooling below this temperature

void setup()
{
  Serial.begin(9600);

  pinMode(tempPin, INPUT); // LM35 temperature sensor
  pinMode(fanPin, OUTPUT); // Fan control
  pinMode(pelPin, OUTPUT); // peltier control

  digitalWrite(fanPin, LOW);
  digitalWrite(pelPin, LOW);

  Serial.println("Cooling System ON");
}

void loop() {

  int ranval = analogRead(tempPin);
  float voltage = ranval * (5.0 / 1023.0);
  float temperatureC = voltage * 100.0; 

  Serial.print("Battery Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  if (temperatureC >= maxTemp)
  {

    digitalWrite(fanPin, HIGH);
    digitalWrite(pelPin, HIGH);
    Serial.println("state: Overheat - Cooling ON (Fan + pel)");
  } else if (temperatureC <= minTemp)
  {

    digitalWrite(fanPin, LOW);
    digitalWrite(pelPin, LOW);
    Serial.println("state: Cool - Cooling OFF");
  } else

  {
    digitalWrite(fanPin, HIGH);
    digitalWrite(pelPin, LOW);
    Serial.println("state: Moderate - Fan ON, peltier OFF");
  }

  delay(1000);
}
