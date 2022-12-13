#ifndef SSU_LZSS_H_
#define SSU_LZSS_H_

/**************************************************************************************
   INCLUDE
 **************************************************************************************/

#include "Arduino_ESP32_OTA.h"

/**************************************************************************************
   FUNCTION DEFINITION
 **************************************************************************************/

int lzss_download(ArduinoEspOtaReadByteFuncPointer read_byte, ArduinoEspOtaWriteByteFuncPointer write_byte, size_t const lzss_file_size);

#endif /* SSU_LZSS_H_ */
