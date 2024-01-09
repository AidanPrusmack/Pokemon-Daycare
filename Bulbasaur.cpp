#include "Bulbasaur.h"
#include <iostream>
#include <string>
using namespace std;

Bulbasaur::Bulbasaur(){
  hunger = 6;
  energy = 6;
  happiness = 2;
  name = "Bulbasaur";
  pet_type = "Bulbasaur";
}
Bulbasaur::Bulbasaur(string nickName){
  hunger = 6;
  energy = 6;
  happiness = 2;
  name = nickName;
  pet_type = "Bulbasaur";
}

void Bulbasaur::printInfo(){
  cout << "-----------------------------------------------------------------------" << endl;
  Pet::printInfo();
cout << "                            ⬛⬛⬛           " << endl;
cout << "                         ⬛🟩🟩🟩⬛          " << endl;
cout << "                     ⬛⬛⬛🟩🟩🟩⬛         " << endl;
cout << "                ⬛⬛🟩🟩🟩🟩🟩🟩🟩⬛⬛     " << endl;
cout << "      ⬛    ⬛🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩⬛  " << endl;
cout << "    ⬛🟦⬛⬛⬛🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩⬛" << endl;
cout << "    ⬛🟦🟦🟦⬛⬛🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩⬛" << endl;
cout << "    ⬛🟦🟦🟦🟦🟦⬛🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩⬛" << endl;
cout << "  ⬛🟦🟦🟦🟦🟦🟦🟦⬛⬛⬛🟩🟩🟩🟩🟩🟩⬛  " << endl;
cout << "⬛⬛🟦🟦🟦🟦🟦🟦🟦🟦🟦⬛🟩🟩🟩⬛⬛⬛⬛  " << endl;
cout << "⬛⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛🟦⬛⬛⬛🟦🟦🟦⬛  " << endl;
cout << "⬛🟦🟦🟦🟦🟦🟦⬛⬛🟦🟦🟦🟦🟦🟦⬛🟦⬜⬛  " << endl;
cout << "⬛🟦🟦🟦🟦🟦⬛🟥⬜⬜🟦🟦⬛🟦🟦⬛⬛⬛    " << endl;
cout << "  ⬛🟦🟦🟦🟦⬛🟥⬜🟦🟦⬛🟦🟦⬛           " << endl;
cout << "     ⬛⬛🟦🟦🟦🟦🟦🟦⬛🟦🟦🟦⬛          " << endl;
cout << "         ⬛⬛⬛⬛⬛⬛⬛⬜🟦⬜⬛           " << endl;
cout << "                       ⬛⬛⬛            " << endl;

}

void Bulbasaur::feed(){
  if(hunger < 9 || hunger == 9){
    if(hunger == 9){
      hunger += 1;
    }
    else{
      hunger += 2;
    }
  }
  else{
    cout << "Your " << name << " is already full" << endl;
  }
}

void Bulbasaur::menu(){
  cout << "Please enter a valid option" << endl;
  cout << "1 - Feed Oran Berry - Hunger" << endl;
  cout << "2 - Give Leaf - Energy" << endl;
  cout << "3 - Juggle - Happiness" << endl;
  cout << "4 - Take a break" << endl;
  cout << "5 - Save" << endl;
  cout << "6 - Quit" << endl;
  cout << "-----------------------------------------------------------------------" << endl;
}
