// ok to include only the one needed
// both included here to make things simple for example
//#include <Adafruit_MCP23X08.h>
#include <Adafruit_MCP23X17.h>

#define OUTPUT1 7
#define OUTPUT2 6
#define OUTPUT3 5
#define OUTPUT4 4
#define OUTPUT5 8
#define OUTPUT6 9
#define OUTPUT7 10
#define OUTPUT8 11

#define OUTPUT9 12
#define OUTPUT10 13
#define OUTPUT11 14
#define OUTPUT12 15
#define OUTPUT13 0
#define OUTPUT14 1
#define OUTPUT15 2
#define OUTPUT16 3

// uncomment appropriate line
//Adafruit_MCP23X08 mcp;
Adafruit_MCP23X17 mcp;

void setup() {
  Serial.begin(115200);
  //while (!Serial);
  Serial.println("NORVO Expansions Test");

  // uncomment appropriate mcp.begin
  Wire.begin (16, 17);   
  if (!mcp.begin_I2C(0x27)) {
    Serial.println("Error.");
    while (1);
  }

  // configure pin for output
  mcp.pinMode(OUTPUT1, OUTPUT);
  mcp.pinMode(OUTPUT2, OUTPUT);
  mcp.pinMode(OUTPUT3, OUTPUT);
  mcp.pinMode(OUTPUT4, OUTPUT);
  mcp.pinMode(OUTPUT5, OUTPUT);
  mcp.pinMode(OUTPUT6, OUTPUT);
  mcp.pinMode(OUTPUT7, OUTPUT);
  mcp.pinMode(OUTPUT8, OUTPUT);

  mcp.pinMode(OUTPUT9, OUTPUT);
  mcp.pinMode(OUTPUT10, OUTPUT);
  mcp.pinMode(OUTPUT11, OUTPUT);
  mcp.pinMode(OUTPUT12, OUTPUT);
  mcp.pinMode(OUTPUT13, OUTPUT);
  mcp.pinMode(OUTPUT14, OUTPUT);
  mcp.pinMode(OUTPUT15, OUTPUT);
  mcp.pinMode(OUTPUT16, OUTPUT);

  Serial.println("Looping...");
}

void loop() {
  mcp.digitalWrite(OUTPUT1, HIGH);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, HIGH);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, HIGH);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, HIGH);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, HIGH);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, HIGH);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, HIGH);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, HIGH);
  delay(500);
  mcp.digitalWrite(OUTPUT1, LOW);
  mcp.digitalWrite(OUTPUT2, LOW);
  mcp.digitalWrite(OUTPUT3, LOW);
  mcp.digitalWrite(OUTPUT4, LOW);
  mcp.digitalWrite(OUTPUT5, LOW);
  mcp.digitalWrite(OUTPUT6, LOW);
  mcp.digitalWrite(OUTPUT7, LOW);
  mcp.digitalWrite(OUTPUT8, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, HIGH);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, HIGH);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, HIGH);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, HIGH);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, HIGH);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, HIGH);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, HIGH);
  mcp.digitalWrite(OUTPUT16, LOW);
  delay(500);
  mcp.digitalWrite(OUTPUT9, LOW);
  mcp.digitalWrite(OUTPUT10, LOW);
  mcp.digitalWrite(OUTPUT11, LOW);
  mcp.digitalWrite(OUTPUT12, LOW);
  mcp.digitalWrite(OUTPUT13, LOW);
  mcp.digitalWrite(OUTPUT14, LOW);
  mcp.digitalWrite(OUTPUT15, LOW);
  mcp.digitalWrite(OUTPUT16, HIGH);
  delay(500);
  Serial.println("Looping...");
}
