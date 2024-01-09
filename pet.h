#ifndef PETH
#define PETH]
#include <fstream>
#include <string>
using namespace std;

class Pet{
public:
  Pet();
  void printInfo();
  void play();
  void feed();
  void energize();
  void skipHour();
  void save();
  void load();
  void menu();
  void status();
  void set_NickName(string);
  string getPetType();
  bool checkEvolution1();
  string returnName();
  bool checkEvolution2();

protected:
  int hunger;
  int energy;
  int happiness;
  string name;
  string pet_type;
  

};

#endif
