/*
  UltraSonicSensor.h - Library for HC-SR04.
*/
#ifndef UltraSonicSensor_h
#define UltraSonicSensor_h

#include "Arduino.h"

class UltraSonicSensor {
  public:
    UltraSonicSensor();
    UltraSonicSensor(int trig, int echo);
    long getDistance();
    long getLastDistance();
    int getTrig();
    int getEcho();
  private:
    int _echo;
    int _trig;
    long _lastDistance;
    long _distance;
};

#endif
