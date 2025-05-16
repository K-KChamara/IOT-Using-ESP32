#include <WifiManager.h>

void setup(){
  Serial.begin(115200);

  WiFiManager wifiManager;
  bool res = wifiManager.autoConnect("Kasun's ESP32", "12345678");

  if(!res){
    Serial.println("Failed to connect");
    ESP.restart();
  
  }else{
    Serial.println("Done..!");
  }

}
void loop(){

}