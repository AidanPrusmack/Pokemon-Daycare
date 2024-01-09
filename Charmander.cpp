#include "Charmander.h"
#include <iostream>
#include <string>
using namespace std;

Charmander::Charmander(){
  hunger = 2;
  energy = 6;
  happiness = 6;
  name = "Charmander";
  pet_type = "Charmander";
}

Charmander::Charmander(string nickName){
  hunger = 2;
  energy = 6;
  happiness = 6;
  name = nickName;
  pet_type = "Charmander";
}

void Charmander::printInfo(){
  cout << "-----------------------------------------------------------------------" << endl;
  Pet::printInfo();
cout << "       ⬛                                         " << endl;
cout << "    ⬛🟥⬛                                       " << endl;
cout << "  ⬛🟥🟥⬛                                       " << endl;
cout << "  ⬛🟥🟥⬛                     ⬛⬛⬛⬛         " << endl;
cout << "⬛🟥🟨🟨🟥⬛                ⬛🟧🟧🟧🟧⬛       " << endl;
cout << "⬛🟥🟨🟨🟥⬛              ⬛🟧🟧🟧🟧🟧🟧⬛    " << endl;
cout << "⬛🟥🟨🟨🟥⬛              ⬛🟧🟧🟧🟧🟧🟧⬛    " << endl;
cout << "  ⬛🟥🟥⬛              ⬛🟧🟧🟧🟧🟧🟧🟧🟧⬛  " << endl;
cout << "    ⬛🟧⬛              ⬛🟧🟧🟧🟧⬛⬜🟧🟧🟧⬛" << endl;
cout << "     ⬛🟧🟧⬛         ⬛🟧🟧🟧🟧🟧⬛⬛🟧🟧🟧⬛" << endl;
cout << "     ⬛🟧🟧⬛         ⬛🟧🟧🟧🟧🟧⬛⬛🟧🟧🟧⬛" << endl;
cout << "       ⬛🟧🟧⬛     ⬛🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧⬛  " << endl;
cout << "       ⬛🟧🟧🟧⬛⬛🟧🟧🟧🟧🟧🟧🟧🟧🟧⬛⬛     " << endl;
cout << "         ⬛🟧🟧⬛⬛🟧🟧🟧⬛🟧🟧⬛⬛⬛          " << endl;
cout << "           ⬛🟧⬛🟧🟧🟧🟧🟧⬛🟧🟨⬛            " << endl;
cout << "             ⬛⬛🟧🟧🟧⬛⬛🟨🟨🟨⬛            " << endl;
cout << "               ⬛🟧🟧🟧🟧🟨🟨🟨⬛⬜⬛          " << endl;
cout << "               ⬛⬛🟧🟧🟧🟧🟧⬛⬛⬛            " << endl;
cout << "                  ⬛⬛🟧⬛⬛⬛                  " << endl;
cout << "                  ⬛⬜🟧⬜⬛                    " << endl;
cout << "                    ⬛⬛⬛                       " << endl;
}

void Charmander::play(){
  if((happiness < 9 || happiness == 9) && energy > 0 && hunger > 0){
    
    if(happiness == 9){
      happiness += 1;
    }
    else{
      happiness += 2;
    }
    if(energy > 0){
    energy -= 1;
    }
    else{
      cout << "You can't play right now, your " << name << " is tired" << endl;
    }
    if(hunger > 0){
    hunger -= 1;
    }
    else{
      cout << "You can't play right now, your " << name << " is hungry" << endl;
    }
    
  }
  if(energy == 0){
    cout << "Your " << name << " is too tired to play right now" << endl;
  }
  if(hunger == 0){
    cout << "Your " << name << " is too hungry to play right now" << endl;
  }
  if(happiness == 10){
    cout << "Your " << name << " is at maximum happiness" << endl;
  }
  }
void Charmander::menu(){
  cout << "Please enter a valid option" << endl;
  cout << "1 - Feed Tuaros Meat - Hunger" << endl;
  cout << "2 - Light Tail - Energy" << endl;
  cout << "3 - Play with Fire - Happiness" << endl;
  cout << "4 - Take a break" << endl;
  cout << "5 - Save" << endl;
  cout << "6 - Quit" << endl;
  cout << "-----------------------------------------------------------------------" << endl;
}
