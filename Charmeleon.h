#ifndef CHARMELEONH
#define CHARMELEONH

#include <string>
#include "Charmander.h"

class Charmeleon : public Charmander{
public:
  Charmeleon();
  Charmeleon(string);
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();

private:

};

#endif
