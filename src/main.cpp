#include <Arduino.h>
#include <DebugLog.h>

#include "Board.h"
#include "Sensors.h"

void setup() {
  LOG_SET_LEVEL(DebugLogLevel::TRACE);

}

void loop() 
{
  auto current_sensor = GetCurrentSensor();
  if (current_sensor == NO_SENSOR)
  {
    LOG_DEBUG("No sensor is showing");
  }
  else
  {
    LOG_DEBUG("Sensor ", current_sensor, " Is active");
    auto hole = MainBoard.GetHoleForSensor(current_sensor);
    auto arm_position = hole.GetArmPosition();
    LOG_INFO("Setting servos: ", arm_position.servo1_angle, arm_position.servo2_angle, arm_position.servo3_angle);
  }
}