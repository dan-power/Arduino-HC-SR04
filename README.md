Arduino-HC-SR04
===============

Arduino module for HC-SR04 Ultrasonic Module

Usage
==========

    #define(TRIG_PIN, 10);
    #define(ECHO_PIN, 11);
    
    // Create the object.
    sensor = UltraSonicSensor(TRIG_PIN, ECHO_PIN);
    
    loop() {
    
      distance = _sRear.getDistance();
      Serial.println(distance);
      
    }
    

