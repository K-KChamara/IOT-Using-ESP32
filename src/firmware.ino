#include <WiFi.h>

void setup(){
  Serial.begin(115200);
  delay(10);

  WiFi.begin("Wokwi-GUEST","");

  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println("Conneted");
  Serial.print("Gateway IP : ");
  Serial.println(WiFi.localIP());
}

void loop(){

}