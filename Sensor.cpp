#include "Sensor.hpp"

Sensor::Sensor() : sensor("/dev/ttyACM0")
{
}

Sensor::~Sensor()
{
}

bool	Sensor::Input()
{
  char	rd[3];
 
  if (sensor.read(rd, 3))
    return true;
  return false;
}
