#include "Clans.hpp"

  void Clans::setName(string n)
{
   name = n; 
}
  void Clans::setClan(string c)
{
  clan = c;
}
  void Clans::setSpirit(float s)
{
  spirit = s;
}
  void Clans::setLife(float l)
{
  life = l;
}
  string Clans::getName()
{
  return name;
}
  string Clans::getClan()
{
  return clan;
}
  float Clans::getSpirit()
{
  return spirit;
}
  float Clans::setLife()
{
  return life;
}