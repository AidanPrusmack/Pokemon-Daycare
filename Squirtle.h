#ifndef SQUIRTLEH
#define SQUIRTLEH

#include <string>
#include "Pet.h"

class Squirtle : public Pet{
public:
  Squirtle();
  Squirtle(string);
  void printInfo();
  void energize();
  void menu();

private:

};

#endif
