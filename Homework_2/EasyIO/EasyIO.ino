 /*
  *Software serial multple serial test
  *created back in the mists of time
  *modified 25 May 2012
  *by Tom Igoe
  *based on Mikal Hart's example
  *This example code is in the public domain.
  */
  
 /*
  * BJTU_Hardware
  * 
  * based on Tom Igoe's example
  * by:
  * LiaoChen 17211401@bjtu.edu.cm
  * LiYuHua 
  */
#include <SoftwareSerial.h>

String cmpString = "I am LiaoLi";
String inputString = "";

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  Serial.println("Please input \"" + cmpString + "\"");
}

void loop() { // run over and over
  if (Serial.available()) {
    while(Serial.available()){
      inputString += char(Serial.read());
      delay(10);
    }
  // Serial.println(inputString);
  if (inputString.length() > 0 && inputString == (cmpString+"\n")) {
    Serial.println("OK");
  } else {
    Serial.println("ERROR");
  }
  inputString = "";
  }
}
