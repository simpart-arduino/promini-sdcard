#include <SPI.h> 
#include <SD.h>

const int chipSelect = 10; // Arduino UNOでは10、Arduino MEGAでは53

void setup(void)
{
    if (!SD.begin(chipSelect)) {
      Serial.println("Card failed, or not present");
      return;
    }
}

void loop(void)
{

    /* SDカードに書き込み */
    File dataFile = SD.open("datalog.csv", FILE_WRITE);
    if (dataFile) {
      dataFile.println("test");
    }    
    dataFile.close();
    
    delay(2000); //2000ミリ秒=2秒の停止
}
