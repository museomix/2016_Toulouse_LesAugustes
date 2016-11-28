#!/usr/bin/sh


sudo apt-get install libsfml-dev
 pavucontrol
pulseaudio --start

g++ main.cpp Player.cpp Sensor.cpp -lsfml-system -lsfml-audio

./august $1
