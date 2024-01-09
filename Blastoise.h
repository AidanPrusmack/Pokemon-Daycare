#ifndef BLASTOISEH
#define BLASTOISEH


#include <string>
#include "Wartortle.h"

class Blastoise : public Wartortle{
public:
  Blastoise();
  Blastoise(string);
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();

private:

};

#endif
