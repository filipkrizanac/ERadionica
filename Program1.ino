/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPLhjdyDtCK"
#define BLYNK_TEMPLATE_NAME "Blynk LED"
#define BLYNK_AUTH_TOKEN "4f06rONWm41CAZNPrrWaT6eqwRbdm9Kf"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "DIR-842V2";
char pass[] = "59624561";

void setup()
{
  // Debug console
  Serial.begin(115200);
  delay(100);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

}

void loop()
{
  Blynk.run();
}
