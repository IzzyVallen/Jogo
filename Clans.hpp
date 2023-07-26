#include <iostream>
using namespace std;

#ifndef Clans_hpp
#define Clans_hpp
class Clans
{
public:
  virtual void sheet() = 0;
  void setName(string n);
  void setClan(string c);
  void setSpirit(float s);
  void setLife(float l);
  string getName();
  string getClan();
  float getSpirit();
  float setLife();
protected:
  string name;
  float spirit;
  float life;
  string clan;
};
#endif