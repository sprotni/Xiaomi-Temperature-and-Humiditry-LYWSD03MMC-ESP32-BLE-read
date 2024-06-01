## VERSION 2.0

![](https://i.imgur.com/LcmL6s9.png)

# Xiaomi Temperature and Humidity (LYWSD03MMC) ESP32 BLE Reader

## English

The Xiaomi Temperature and Humidity (LYWSD03MMC) is a compact and efficient sensor designed for monitoring environmental conditions. It accurately measures both temperature and humidity. This device connects and transmits data to an ESP32, a powerful and versatile microcontroller, via Bluetooth Low Energy (BLE). Two versions of the code are currently present: FULL BLE LIB and MINI BLE LIB, both serving the same functions but optimized differently for resource management.

### FULL BLE LIB Version
This version uses the standard BLE library, ideal for developers looking for extensive control and customization options in their applications. It offers robust BLE functionalities and is suitable for complex BLE operations.

### MINI BLE LIB Version
Optimized for reduced memory usage and increased efficiency, the MINI BLE LIB version is perfect for simpler applications or devices with limited resources. It maintains essential BLE functionalities with a smaller footprint.

**Tested Hardware:** ESP-WROOM-32

**Requirements:** An ATC firmware is required on the Xiaomi sensor to use this code. To install it, visit: [ATC Firmware](https://github.com/atc1441/ATC_MiThermometer)

**Capabilities:**
- Reading MAC address values
- Reading temperature values
- Reading humidity values
- Reading battery percentage values
- Reading battery voltage values in mV
- Displaying the number of received packets

**Future Plans:**
- Enable viewing current data through a browser via WiFi
- Make it compatible with Alexa
- Add MQTT support

***Please share your complete project with me if you use my code in your own projects, so we can learn from each other.***

**For any observations or suggestions for improvement, let me know!**

## Magyar

A Xiaomi Hőmérséklet és Páratartalom (LYWSD03MMC) egy kompakt és hatékony szenzor, amelyet környezeti feltételek monitorozására terveztek. Pontosan méri mind a hőmérsékletet, mind a páratartalmat. Ez az eszköz Bluetooth Low Energy (BLE) segítségével csatlakozik és adatokat továbbít egy ESP32-hez, egy erőteljes és sokoldalú mikrovezérlőhöz. Jelenleg két verzióban érhető el a kód: FULL BLE LIB és MINI BLE LIB, mindkettő azonos funkciókat lát el, de különböző módon optimalizálva az erőforrás-kezelésre.

### FULL BLE LIB Verzió
Ez a verzió a standard BLE könyvtárat használja, ami ideális a fejlesztők számára, akik széleskörű irányítást és testreszabási lehetőségeket keresnek alkalmazásaikban. Robusztus BLE funkcionalitást kínál, és összetett BLE műveletekhez alkalmas.

### MINI BLE LIB Verzió
Az optimalizált verzió, amely csökkentett memóriahasználatot és növelt hatékonyságot kínál, tökéletes egyszerűbb alkalmazásokhoz vagy korlátozott erőforrásokkal rendelkező eszközökhöz. Fenntartja a lényeges BLE funkcionalitásokat kisebb lábnyommal.

**Tesztelt Hardver:** ESP-WROOM-32

**Követelmények:** Szükséges egy ATC firmware a Xiaomi szenzorra ahhoz, hogy ezt a kódot használhasd. Ennek feltelepítéséhez látogass el ide: [ATC Firmware](https://github.com/atc1441/ATC_MiThermometer)

**Képességek:**
- MAC cím értékének kiolvasása
- Hőmérséklet értékek kiolvasása
- Páratartalom értékek kiolvasása
- Elem százalékos értékeinek kiolvasása
- Elem feszültség értékek kiolvasása mV mértékegységben
- A fogadott csomag számának megjelenítése

**Jövőbeni Tervek:**
- WiFi-n keresztül böngészőben lehessen nézni az aktuális adatokat
- Alexa kompatibilissé alakítani
- MQTT támogatást hozzáadni

***Kérlek, amennyiben a kódomat felhasználod a saját projektedhez, oszd meg velem privátban vagy itt a teljes projekted, hogy kölcsönösen tanulhassunk belőle.***

**Bármilyen észrevételed vagy javítási ötleted van hozzá, jelezd!**
