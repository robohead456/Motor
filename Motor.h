/**
 * @file Motor.h
 * @brief Abstract class for motor controllers to implement
 * @author Michael Sidler
 */

#pragma once

#include <Arduino.h>

class Motor {
    public:
        Motor(){}
        virtual ~Motor(){}
        virtual void setVoltage(float voltage) = 0;
        virtual void enable() = 0;
        virtual void disable() = 0;
        virtual float readCurrent() = 0;
        virtual float getLastVoltage() = 0;

    private:
};