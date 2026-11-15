// IoT Automatic Rain Detector System
// Hardware: Arduino Uno, Rain Drop Sensor Module, Buzzer / Servo / Alert Output

const int RAIN_ANALOG_PIN = A0;  // Analog pin for rain intensity measurement
const int RAIN_DIGITAL_PIN = 2;  // Digital pin for threshold trigger
const int ALERT_PIN = 8;         // Output pin for buzzer / status LED / relay

const int RAIN_THRESHOLD = 500;  // Lower value indicates heavier water contact

void setup() {
  Serial.begin(9600);
  pinMode(RAIN_DIGITAL_PIN, INPUT);
  pinMode(ALERT_PIN, OUTPUT);
  digitalWrite(ALERT_PIN, LOW);
  Serial.println("Automatic Rain Detector Initialized...");
}

void loop() {
  int rainAnalog = analogRead(RAIN_ANALOG_PIN);
  int rainDigital = digitalRead(RAIN_DIGITAL_PIN);

  Serial.print("Rain Sensor Analog Value: ");
  Serial.println(rainAnalog);

  if (rainAnalog < RAIN_THRESHOLD || rainDigital == LOW) {
    Serial.println("Alert: Rain Detected! Triggering automated response...");
    digitalWrite(ALERT_PIN, HIGH); // Activate alert / automated cover mechanism
  } else {
    Serial.println("Status: Weather Clear.");
    digitalWrite(ALERT_PIN, LOW);
  }

  delay(1000); // Poll sensor every 1 second
}
