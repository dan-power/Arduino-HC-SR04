#include "UltraSonicSensor.h"
#include "Arduino.h"

int _trig, _echo;
long _lastDistance, _distance;

UltraSonicSensor::UltraSonicSensor() {
}

UltraSonicSensor::UltraSonicSensor(int trig, int echo) {
  _trig = trig;
  _echo = echo;

  pinMode(_trig, OUTPUT);
  pinMode(_echo, INPUT);
}

long UltraSonicSensor::getLastDistance() {
  return _lastDistance;
}

long UltraSonicSensor::getDistance() {
  digitalWrite(_trig, LOW);
  delayMicroseconds(2);

  digitalWrite(_trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(_trig, LOW);

  _lastDistance = _distance;

  long duration = pulseIn(_echo, HIGH);
  _distance = (duration/2) / 29.1;

  return _distance;
}

int UltraSonicSensor::getTrig() {
  return _trig;
}

int UltraSonicSensor::getEcho() {
  return _echo;
}
