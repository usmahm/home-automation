#include "customLogger.h"

boolean initialized = false;
// void CustomLogger::print(auto data) {
//   WebSerial.print(data);
//   CustomLogger::print(data);
// }

// void CustomLogger::println(auto data) {
//   WebSerial.println(data);
//   CustomLogger::println(data);
// }

void CustomLogger::parseReceivedMsg(uint8_t *data, size_t len) {
  String d = "";
  
  for(int i=0; i < len; i++){
    d += char(data[i]);
  }
  
  WebSerial.println(d);

  // if (d == "ON"){
  //   digitalWrite(LED, LOW);
  // }
  // if (d=="OFF"){
  //   digitalWrite(LED, HIGH);
  // }
}

void CustomLogger::initializeCustomLogger() {
  WebSerial.begin(&server);
  WebSerial.msgCallback(parseReceivedMsg);

  initialized = true;
  CustomLogger::println("DONE INIT");
}