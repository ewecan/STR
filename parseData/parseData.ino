#include <string.h>
#include <stdio.h>

char str[80] = "01,02,03,04,05,06,07,08,09";
const char *s = ",";

void parseData(char *str, const char *delimiter) {
  char tempstr[80] = { 0 };  //strtok会改变原始str，另外开辟一段空间用于保护str数据
  memcpy(tempstr, str, strlen(str));

  char *token;
  token = strtok(tempstr, delimiter);
  while (token != NULL) {
    Serial.println(token);
    token = strtok(NULL, delimiter);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  Serial.println("===============================");
  parseData(str, s);
  Serial.println("===============================");
  parseData(str, "0");
}

void loop() {
}