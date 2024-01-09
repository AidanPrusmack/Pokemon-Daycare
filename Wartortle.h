#ifndef WARTORTLEH
#define WARTORTLEH

#include <string>
#include "Squirtle.h"

class Wartortle : public Squirtle{
public:
  Wartortle();
  Wartortle(string);
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();


private:

};

#endif
