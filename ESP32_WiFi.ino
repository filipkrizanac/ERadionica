/*************************************************************
  Blynk is a platform with iOS and Android apps to control
  ESP32, Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build mobile and web interfaces for any
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: https://www.blynk.io
    Sketch generator:           https://examples.blynk.cc
    Blynk community:            https://community.blynk.cc
    Follow us:                  https://www.fb.com/blynkapp
                                https://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  NOTE: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPLhjdyDtCK"
#define BLYNK_TEMPLATE_NAME "Blynk LED"
#define BLYNK_AUTH_TOKEN "4f06rONWm41CAZNPrrWaT6eqwRbdm9Kf"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
/*
#include "Adafruit_BME680.h"

Adafruit_BME680 bme;//Dodijeljivanje varijable senzoru BME680

BlynkTimer timer;

float temp; //Odradivanje tipa varijable za temperaturu
float hum;
*/

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "DIR-842V2";
char pass[] = "59624561";

BLYNK_WRITE(V0)
{
  int pin=param.asInt();
  digitalWrite(5,pin);
}

void setup()
{
  // Debug console
  Serial.begin(115200);
  delay(100);

  pinMode(5, OUTPUT);

  //bme.begin(0x76);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  //timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  //timer.run();
}

/*void sendSensor(){ 

  temp = bme.readTemperature(); //Cita temperauru sa senzora BME680 
  hum = bme.readHumidity(); //Cita vlagu zraka sa senzora BME680

  Blynk.virtualWrite(V1, temp); //Ocitanu vrijednost saljemo na virtualni pin kako bi je mogli prikazati na Blynk aplikaciji
  Blynk.virtualWrite(V2, hum);  //Ocitanu vrijednost saljemo na virtualni pin kako bi je mogli prikazati na Blynk aplikaciji

   //Vrijednost ispisujemo u Serial monitoru radi provjere funkcionira li sve dobro

}
*/
