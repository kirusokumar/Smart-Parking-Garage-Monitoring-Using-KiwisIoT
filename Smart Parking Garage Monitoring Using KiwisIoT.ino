#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

#define TRIG_PIN D5
#define ECHO_PIN D6

// WiFi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

float distance;
const float PARKING_LIMIT = 20.0;

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  kiwisiot.begin();

  Serial.println("Smart Parking Garage Monitoring Started");
}

void loop() {
  kiwisiot.run();

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duration == 0) {
    Serial.println("Sensor Error");
    delay(1000);
    return;
  }

  distance = duration * 0.0343 / 2;

  String status;

  if (distance <= PARKING_LIMIT) {
    status = "OCCUPIED";
  } else {
    status = "AVAILABLE";
  }

  // Send data to KiwisIoT
  kiwisiot.send("0", String(distance, 2));
  kiwisiot.send("1", status);

  Serial.println("-------------------------");

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  Serial.print("Parking Status: ");
  Serial.println(status);

  Serial.println("-------------------------");

  delay(1000);
}