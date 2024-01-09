#ifndef BULBASAURH
#define BULBASAURH

#include <string>
#include "Pet.h"

class Bulbasaur : public Pet{
public:
  Bulbasaur();
  Bulbasaur(string);
  void printInfo();
  void feed();
  void menu();

private:

};

#endif
