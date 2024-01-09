#ifndef CHARMANDERH
#define CHARMANDERH

#include <string>
#include "Pet.h"

class Charmander : public Pet{
public:
  Charmander();
  Charmander(string);
  void printInfo();
  void play();
  void menu();

private:

};

#endif
