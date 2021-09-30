#pragma once

#include <Arduino.h>

#include "ArmPosition.h"

class Hole
{
private:
    ArmPosition arm_position;
    byte sensor;

public:
    Hole(const ArmPosition& arm_position, byte sensor)
    {
        this->arm_position = arm_position;
        this->sensor = sensor;
    }

    bool IsForSensor(byte sensor)
    {
        return this->sensor == sensor;
    }

    ArmPosition& GetArmPosition()
    {
        return arm_position;
    }
};