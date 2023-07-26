#include "Clan.hpp"

  void Clan::setName(string n)
{
   name = n; 
}
  void Clan::setClan(string c)
{
  clan = c;
}
  void Clan::setSpirit(float s)
{
  spirit = s;
}
  void Clan::setLife(float l)
{
  life = l;
}
  string Clan::getName()
{
  return name;
}
  string getClan()
{
  return clan;
}
  float Clan::getSpirit()
{
  return spirit;
}
  float Clan::setLife()
{
  return life;
}