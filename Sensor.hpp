#ifndef SENSOR_HPP_
# define SENSOR_HPP_

#include <iostream>
#include <fstream>

class	Sensor
{
  std::ifstream	sensor;
public:
  Sensor();
  ~Sensor();
  bool	Input();
};

#endif // SENSOR_HPP_
