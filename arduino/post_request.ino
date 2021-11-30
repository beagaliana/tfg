#include <EthernetClient.h>
#include <EthernetServer.h>
#include <util.h>
#include <Ethernet.h>
#include <EthernetUdp.h>
#include <Dns.h>
#include <Dhcp.h>
#include <SPI.h>

EthernetClient client;
byte mac[] = { 0x00, 0xAA, 0xBB, 0xCC, 0xDE, 0x02 };

void setup() {
  Serial.begin(9600);

  char server[] = "raspberryServerHostingFarmOS";

  String data =  "{\"timestamp\": 1638222926, \"value\": 76.5 }";

  if (client.connect(server,80)) {
      Serial.println("Connected succesfully!");
      client.println("POST /farm/sensor/listener/4840abd4e88034979a0a8ae4ffdcd5f9?private_key=65fcb0fae0b5813cf4449637de11af9a HTTP/1.1");
      client.println("Content-Type: application/json");
      client.print("Content-Length: ");
      client.println(data.length());
  } else {
      Serial.println("Oops! Connection failed");
  }
}

void loop() {
  while(client.connected()) {
    if(client.available() ){
      char c = client.read();
      Serial.print(c);
    }
  }
}