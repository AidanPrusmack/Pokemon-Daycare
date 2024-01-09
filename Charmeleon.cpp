#include "Charmeleon.h"
#include <iostream>
#include <string>
using namespace std;

  Charmeleon::Charmeleon(){
    this->hunger = hunger;
    this->energy = energy;
    this->happiness = happiness;
    name = "Charmeleon";
    pet_type = "Charmeleon";
  }
  Charmeleon::Charmeleon(string nickName){
    this->hunger = hunger;
    this->energy = energy;
    this->happiness = happiness;
    name = nickName;
    pet_type = "Charmeleon";
  }

void Charmeleon::printInfo(){
  cout << "-----------------------------------------------------------------------" << endl;
  cout << name << endl;
  cout << "Hunger Level " << hunger << "/20" << endl;
  cout << "Energy Level " << energy << "/20" << endl;
  cout << "Happiness Level " << happiness << "/20" << endl;
cout << "              ⬛                                  " << endl;
cout << "            ⬛🟥⬛       ⬛⬛                  " << endl;
cout << "           ⬛🟥🟥⬛    ⬛🟥🟥⬛                " << endl;
cout << "          ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛              " << endl;
cout << "          ⬛🟥🟥🟥⬛      ⬛🟥🟥⬛⬛⬛         " << endl;
cout << "           ⬛🟨🟥⬛      ⬛⬛🟥🟥⬛🟥⬛       " << endl;
cout << "       ⬛⬛🟥🟨⬛      ⬛🟥🟥🟥🟥🟥🟥🟥⬛    " << endl;
cout << "    ⬛⬛🟥🟥⬛      ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛    " << endl;
cout << "  ⬛🟥🟥🟥⬛        ⬛🟥🟥🟥⬛🟥🟥🟥🟥🟥⬛  " << endl;
cout << "⬛🟥🟥🟥⬛        ⬛⬛🟥🟥🟥⬜⬛🟥🟥🟥🟥🟥⬛" << endl;
cout << "⬛🟥🟥🟥⬛    ⬛⬛🟥🟥⬛🟥⬛⬜⬛⬛🟥🟥🟥🟥⬛" << endl;
cout << "⬛🟥🟥🟥🟥⬛⬛🟥🟥🟥🟥🟥🟥⬛🟥🟥🟥🟥🟥🟥⬛  " << endl;
cout << "⬛⬛🟥🟥🟥⬛🟥🟥🟥⬛🟥🟥🟥🟥⬛🟥🟥🟥⬛⬛      " << endl;
cout << "  ⬛🟥🟥🟥🟥🟥⬛🟥⬛🟥🟥⬜⬛⬛⬛⬛🟥🟥⬛    " << endl;
cout << "    ⬛🟥⬛🟥🟥⬛🟥⬜⬛⬜⬜⬜⬛⬜⬜⬛🟥🟥⬛" << endl;
cout << "      ⬛⬛🟥🟥⬛🟥🟥🟥⬛⬜⬛        ⬛⬜🟥⬛" << endl;
cout << "        ⬛🟥🟥🟥⬛🟥⬜⬛⬜⬛⬛         ⬛⬛  " << endl;
cout << "        ⬛⬛🟥🟥🟥⬛⬛🟥⬛🟥⬜⬛              " << endl;
cout << "          ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛                " << endl;
cout << "          ⬛⬛🟥⬛⬛                            " << endl;
cout << "          ⬛⬜🟥⬜⬛                            " << endl;
cout << "            ⬛⬛⬛                              " << endl;
}
void Charmeleon::play(){
  if((happiness < 19 || happiness == 19) && energy > 0 && hunger > 0){
    
    if(happiness == 19){
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
  if(happiness == 20){
    cout << "Your " << name << " is at maximum happiness" << endl;
  }
  }

void Charmeleon::feed(){
  if(hunger < 20){
  hunger += 1;
  }
  else{
    cout << "Your " << name << " is already full" << endl;
  }
}

void Charmeleon::energize(){
  if(energy < 20){
  energy += 1;
  }
  else{
    cout << "Your " << name << " is already full of energy" << endl;
  }
}

void Charmeleon::skipHour(){
  if(energy < 19 || energy == 19){
    if(energy == 19){
      energy += 1;
    }
    else{
      energy += 2;
    }
  }
  else{
    energy = energy;
  }
  if(hunger > 0 && happiness > 0){
    hunger -= 1;
    happiness -= 1;
  }
  else{
    cout << "Please take care of " << name << " before you leave" << endl;
  }
  
}
