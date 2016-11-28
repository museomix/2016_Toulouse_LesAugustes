#include "Sensor.hpp"
#include "Player.hpp"

int	main(int ac, char **av)
{
  Sensor	sensor;
  Player	player;
  std::string	file;

  if (ac > 1)
    {
      file = std::string(av[1]);
      player.LoadFile(file);
      while (sensor.Input())
	{
	  std::cout << "Catch !" << std::endl;
	  player.Play();
	  //player.Wait();
	}
    }
  else
    std::cerr << "Usage " << av[0] << ": ./august SoundFile" << std::endl;  
}
