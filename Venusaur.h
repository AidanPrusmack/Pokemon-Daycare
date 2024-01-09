#ifndef VENUSAURH
#define VENUSAURH

#include <string>
#include "Ivysaur.h"

class Venusaur : public Ivysaur{
public:
  Venusaur();
  Venusaur(string);
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();

private:

};

#endif
