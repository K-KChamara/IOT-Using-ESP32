#include <WiFi.h>
#include <WifiManager.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

WiFiUDP udp;
NTPClient timeClient(udp);

void setup(){
  Serial.begin(115200);

  WiFi.begin("Wokwi-GUEST", "");

  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println("Connected..!");
   Serial.print("Gateway IP : ");
  Serial.println(WiFi.localIP());

  timeClient.begin();
}

void loop(){
  timeClient.update();
  Serial.println(timeClient.getFormattedTime());
  delay(1000);
}