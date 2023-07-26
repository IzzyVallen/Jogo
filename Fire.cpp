#include "Fire.hpp"


    void Fire::setMaxTemperature(float t)
{
  MaxTemperature = t;
}
    float Fire::getMaxTemperature()
{
  return MaxTemperature;
}
    void Fire::sheet()
{
  cout << "Name: " << name << endl;
  cout << "Clan: " << clan << endl;
  cout << "Life: " << life << endl;
  cout << "Spirit: " << spirit << endl;
  cout << "Temperatura Máxima: " << MaxTemperature << endl;
}