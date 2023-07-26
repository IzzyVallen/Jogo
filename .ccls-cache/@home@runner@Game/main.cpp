#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "Fire.hpp"

Fire player;

int main() {
  int choice;
  string element, name;
  int minLife = 10, maxLife = 20;
  int minSpi = 1, maxSpit = 10;
  srand(static_cast<unsigned int>(time(0)));
  
  cout << "What's your name?\n" << endl << "My name is  ";
  cin >> name;
 #ifdef _WIN32
        system("cls"); // Comando para Windows
    #else
        system("clear"); // Comando para sistemas Unix (Linux, macOS, etc.)
    #endif
  
  cout << "Choose your clan\n";
  cout << "1 - Fire\n";
  cout << "2 - Water\n";
  cout << "3 - Earth\n";
  cout << "4 - Air\n";
  cout << "Choose: ";
  cin >> choice;
 #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
  
  if (choice == 1)
  {
    int NSA = minSpi + (rand() % (maxSpit - minSpi + 1));
    int NLA = minLife + (rand() % (maxLife - minLife + 1));
    player.setName(name);
    player.setClan("FIRE");
    player.setSpirit(NSA);
    player.setLife(NLA);
    player.setMaxTemperature(38);
    player.sheet();
  }
  else if (choice == 2)
  {
    element = "WATER";  
  }
  else if (choice == 3)
  {
    element = "EARTH";   
  }
    else if (choice == 4)
  {
    element = "AIR";   
  }
  
}