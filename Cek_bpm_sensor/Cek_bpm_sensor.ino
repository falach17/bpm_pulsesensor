#include "ESP8266WiFi.h"
#include <SoftwareSerial.h>

// Language -> Indonesia
// Inialisai Variabel yang dibutuhkan untuk membaca sensor....................................... 
int Sinyal;
int satudenyut = 550;
int BPM=0;
unsigned long millisSebelum=0;
unsigned long saatIniMillis=0;
int waktumembaca=15000; // 15 second count bpm

//  Variables pin Pulse sensor
int PulseSensorPurplePin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  membaca_sensor();
  delay(1000);
}
