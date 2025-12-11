#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.print("Humidity:");
  Serial.print(humidity);
  Serial.print("%, Temperature:");
  Serial.print(temperature);
  Serial.println("C");
}

