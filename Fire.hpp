#include "Clans.hpp"

class Fire : public Clans
{
  public:
    void sheet();
    void setMaxTemperature(float t);
    float getMaxTemperature();
  private:
    float MaxTemperature;
};