#include <NimBLEDevice.h>

#define SCAN_TIME 10

NimBLEScan *pNimBLEScan;

void IRAM_ATTR resetModule() {
  Serial.println("reboot");
  esp_restart();
}

class MyAdvertisedDeviceCallbacks : public NimBLEAdvertisedDeviceCallbacks {
    void onResult(NimBLEAdvertisedDevice *advertisedDevice) {
        if (advertisedDevice->haveName() && advertisedDevice->haveServiceData() && advertisedDevice->getName() == "ATC_1C0D0B") {
            std::string strServiceData = advertisedDevice->getServiceData();
            uint8_t *cServiceData = (uint8_t *)strServiceData.c_str();
            processServiceData(cServiceData);
        }
    }

    void processServiceData(uint8_t *cServiceData) {
        Serial.printf("\n\nAdvertised Device: MAC address: %02X:%02X:%02X:%02X:%02X:%02X\n",
                      cServiceData[0], cServiceData[1], cServiceData[2], cServiceData[3], cServiceData[4], cServiceData[5]);

        float temperature = ((int16_t)(cServiceData[6] << 8) | cServiceData[7]) / 10.0f;
        Serial.printf("Temperature: %.1f C°\n", temperature);
        Serial.printf("Humidity: %d%%\n", cServiceData[8]);
        Serial.printf("Battery: %d%%\nVoltage: %d mV\nFrame: %d\n",
                      cServiceData[9], (cServiceData[10] << 8) | cServiceData[11], cServiceData[12]);
    }
};

void setup() {
  Serial.begin(115200);
  Serial.println("Xiaomi Temperature and Humidity - ESP32 sensor reader");
  NimBLEDevice::init("");
  pNimBLEScan = NimBLEDevice::getScan(); 
  pNimBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks());
  pNimBLEScan->setActiveScan(true);
  pNimBLEScan->setInterval(0x50);
  pNimBLEScan->setWindow(0x30);
}

void loop() {
  Serial.printf("Start BLE scan for %d seconds...\n", SCAN_TIME);
  NimBLEScanResults foundDevices = pNimBLEScan->start(SCAN_TIME);
  Serial.printf("Found device count : %d\n", foundDevices.getCount());
  delay(100);
}