#include "Squirtle.h"
#include <iostream>
#include <string>
using namespace std;

Squirtle::Squirtle(){
  hunger = 6;
  energy = 2;
  happiness = 6;
  name = "Squirtle";
  pet_type = "Squirtle";
}

Squirtle::Squirtle(string nickName){
  hunger = 2;
  energy = 6;
  happiness = 6;
  name = nickName;
  pet_type = "Squirtle";
}

void Squirtle::printInfo(){
  cout << "-----------------------------------------------------------------------" << endl;
  Pet::printInfo();
cout << "       ⬛⬛⬛⬛                     ⬛⬛⬛⬛" << endl;
cout << "     ⬛🟦🟦🟦🟦⬛⬛               ⬛🟦🟦🟦🟦⬛" << endl;
cout << "   ⬛🟦🟦🟦🟦🟦🟦🟦⬛⬛      ⬛⬛🟦🟦🟦🟦🟦⬛" << endl;
cout << "   ⬛🟦🟦🟦🟦🟦🟦🟦⬛🏿⬛⬛ ⬛🟦🟦🟦⬛🟦🟦⬛" << endl;
cout << " ⬛🟫🟦🟦🟦🟦🟦🟦🟦🟦🏿🟫🏿⬛🟦🟦🟦⬛🟦🟦🟦⬛" << endl;
cout << " ⬛🟦🟦🟦🟦⬜⬛🟦🟦🟦🏽🟫🟫🏿⬛🟦🟦⬛🟦🟦⬛ " << endl;
cout << " ⬛🟦🟦🟦🟦⬛🟫🟦🟦🟦⬜🟫🟫🟫⬛🟦⬛⬛⬛⬛  " << endl;
cout << "   ⬛🟦🟦🟦⬛🟫🟦🟦🟦⬛⬜⬜🟫🟫⬛⬛" << endl;
cout << "      ⬛⬛🟦🟦🟦🟦⬛⬛🟦🟦⬜🟫🟫⬛" << endl;
cout << "      ⬛🟦⬛⬛⬛⬛🟦🟦🟦🟦⬜🟫🟫⬛" << endl;
cout << "      ⬛⬛🟨🟨⬛🟦🟦🟦⬛⬜🟫🟫⬛" << endl;
cout << "          ⬛🟨🟨⬛⬛⬛⬛🏽🟫🟫⬛" << endl;
cout << "       ⬛🟦⬛🟫🟨🟨🟨🟫⬛🏽⬛" << endl;
cout << "         ⬛⬛⬛⬛🟫🟫🟦⬛🏽⬛" << endl;
cout << "               ⬛⬛⬛🟦⬛⬛" << endl;
cout << "                 ⬛🟦🟦🟦⬛        " << endl;
cout << "                   ⬛⬛⬛         " << endl;
}

void Squirtle::energize(){
  if(energy < 9 || energy == 9){
    if(energy == 9){
      energy += 1;
    }
    else{
      energy += 2;
    }
  }
  else{
    cout << "Your " << name << " is already full of energy" << endl;
  }
}

void Squirtle::menu(){
  cout << "Please enter a valid option" << endl;;
  cout << "1 - Feed Oran Berry - Hunger" << endl;
  cout << "2 - Give Water - Energy" << endl;
  cout << "3 - Swim together - Happiness" << endl;
  cout << "4 - Take a break" << endl;
  cout << "5 - Save" << endl;
  cout << "6 - Quit" << endl;
  cout << "-----------------------------------------------------------------------" << endl;
}
