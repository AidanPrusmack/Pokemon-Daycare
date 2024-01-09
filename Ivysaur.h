#ifndef IVYSAURH
#define IVYSAURH

#include <string>
#include "Bulbasaur.h"

class Ivysaur : public Bulbasaur{
public:
  Ivysaur();
  Ivysaur(string);
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();

private:

};

#endif
