#include <iostream>
#include <string>
#include <SFML/Audio.hpp>

class	Player
{
  sf::Music	music;
public:
  Player();
  ~Player();
  void	LoadFile(std::string &file);
  void	Play();
  void	Pause();
  void	Stop();
  void	Wait();
};
