#include "Player.hpp"

Player::Player()
{
}

Player::~Player()
{
}

void	Player::LoadFile(std::string &file)
{
  if (!music.openFromFile(file))
    std::cerr << "Load Failed" << std::endl;
}

void	Player::Play()
{
  std::cout << "Play !" << std::endl; 
  music.play();
}

void	Player::Pause()
{
  music.pause();
}

void	Player::Stop()
{
  music.stop();
}

void	Player::Wait()
{
  while (music.getStatus() == sf::SoundSource::Playing);
  std::cout << "Stop !" << std::endl;
}
