#ifndef ArduinoSerialForward_h

#define ArduinoSerialForward_h
#include <Arduino.h>
#include "ArduinoSerialForward.c"

void setupArduinoSerialForward(int bps);
void SWS_trace(char * s);
void SWS_trace(int s);
void SWS_trace(uint8_t s);
void SWS_trace(uint16_t s);
void SWS_trace_BIN(uint8_t s);
void forwardByteSerial(byte b);
void forwardByteSerial_Start();
void forwardByteSerial_Stop();
void forwardMessageSerial(byte * msg, uint8_t size);
void printMsg(byte * msg, uint8_t msgSize);
void enqueueMsg(byte * msg, uint8_t msgSize);
void readSerial();

#endif
