#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

#define RELAY_PIN D1

void handleRoot() {
  server.send(200, "text/html", 
  "<h1>ESP8266 Relay Control</h1><br>"
  "<a href=\"/on\"><button>ON</button></a><br>"
  "<a href=\"/off\"><button>OFF</button></a>");
}

void handleOn() {
  digitalWrite(RELAY_PIN, HIGH);
  server.send(200, "text/html", "Relay is ON <a href=\"/\">Back</a>");
}

void handleOff() {
  digitalWrite(RELAY_PIN, LOW);
  server.send(200, "text/html", "Relay is OFF <a href=\"/\">Back</a>");
}

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  WiFi.softAP("ESP8266_AP", "12345678");
  server.on("/", handleRoot);
  server.on("/on", handleOn);
  server.on("/off", handleOff);
  server.begin();
}

void loop() {
  server.handleClient();
}
