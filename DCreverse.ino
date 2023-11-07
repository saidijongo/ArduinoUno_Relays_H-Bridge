int relay1 = 5;
int relay2 = 11; //ground group

void setup() {
  pinMode(relay1, OUTPUT); 
  pinMode(relay2, OUTPUT);

  // keep the motor off by keeping both LOW
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);

  Serial.begin(115200);
  Serial.println("Using 2 Relays");
  delay(2000);
}

void loop() {
  // Rotate in CCW direction
  digitalWrite(relay1, HIGH); // turn relay 1 ON
  digitalWrite(relay2, LOW);  // turn relay 2 OFF
  Serial.println("Rotating in CCW");
  delay(3000); // wait for 3 seconds

  // Stop the motor
  digitalWrite(relay1, LOW); // turn relay 1 OFF
  digitalWrite(relay2, LOW); // turn relay 2 OFF
  Serial.println("Stopped");
  delay(2000); // stop for 2 seconds

  // Rotate in CW direction
  digitalWrite(relay1, LOW);  // turn relay 1 OFF
  digitalWrite(relay2, HIGH); // turn relay 2 ON
  Serial.println("Rotating in CW");
  delay(3000); // wait for 3 seconds

  // Stop the motor
  digitalWrite(relay1, LOW); // turn relay 1 OFF
  digitalWrite(relay2, LOW); // turn relay 2 OFF
  Serial.println("Stopped");
  delay(2000); // stop for 2 seconds

}
