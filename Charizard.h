#ifndef CHARIZARDH
#define CHARIZARDH


#include <string>
#include "Charmeleon.h"

class Charizard : public Charmeleon{
public:
  Charizard();
  Charizard(string);
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();

private:

};

#endif
