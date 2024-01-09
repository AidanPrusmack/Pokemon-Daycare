#include "Venusaur.h"
#include <iostream>
#include <string>
using namespace std;

Venusaur::Venusaur(){
  this->hunger = hunger;
    this->energy = energy;
    this->happiness = happiness;
    name = "Venusaur";
    pet_type = "Venusaur";
}

Venusaur::Venusaur(string nickName){
  this->hunger = hunger;
    this->energy = energy;
    this->happiness = happiness;
    name = nickName;
    pet_type = "Venusaur";
}

void Venusaur::printInfo(){
  cout << "-----------------------------------------------------------------------" << endl;
  cout << name << endl;
  cout << "Hunger Level " << hunger << "/100" << endl;
  cout << "Energy Level " << energy << "/100" << endl;
  cout << "Happiness Level " << happiness << "/100" << endl;
cout << "                             ⬛⬛⬛  ⬛⬛⬛⬛" << endl;
cout << "                         ⬛⬛🟥🟨🟨⬛🟥🟨🟨🟥⬛⬛" << endl;
cout << "                       ⬛🟨🟥🟥🟥⬛⬛⬛🟥🟥🟨🟨🟥⬛" << endl;
cout << "                     ⬛🟥🟥🟥⬛⬛🟨🟨🟨⬛⬛⬛⬛🟥🟥⬛" << endl;
cout << "                    ⬛🟥⬛⬛🟥🟥⬛⬛🟨🟨⬛🟥🟨⬛⬛⬛" << endl;
cout << "                  ⬛⬛⬛🟥🟨🟨🟥🟥🟥🟥⬛🟥🟥🟥🟥🟥⬛" << endl;
cout << "                ⬛🟩⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛🟨🟨🟥🟥🟥⬛" << endl;
cout << "         ⬛  ⬛⬛⬛⬛⬛🟥🟥🟥🟥🟥🟥⬛🟥🟥🟥🟥🟥⬛⬛" << endl;
cout << "       ⬛🟦⬛⬛🟩⬛🟩🟩⬛⬛⬛🟥🟥🟥⬛⬛⬛⬛⬛⬛🟩⬛⬛" << endl;
cout << "       ⬛🟦🟦⬛⬛⬛🟩⬛⬛🟩🟩⬛⬛⬛🟩⬛🟩🟩🟩⬛⬛🟩🟩⬛" << endl;
cout << "       ⬛🟦🟦🟦🟦🟦⬛⬛⬛⬛🟩🟩⬛🟩⬛⬛🟩⬛🟩🟩⬛🟩⬛⬛" << endl;
cout << "     ⬛🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦⬛⬛⬛⬛⬛🟦⬛⬛🟩⬛🟩⬛🟩⬛" << endl;
cout << "  ⬛🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦⬛🟦🟦🟦⬛⬛🟩⬛🟩⬛" << endl;
cout << "⬛⬛🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟥🟥⬛🟦⬛🟦🟦🟦⬛⬛⬛" << endl;
cout << "⬛⬛🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟥🟥⬛🟦🟦🟦⬛🟦🟦🌫️⬛" << endl;
cout << "⬛🟦🟦🟦🟦🟦🟦🟦🟦🟦⬛⬛🟦🟦🟦🟦⬛🟦⬛🟦⬛🟦🌫️⬛" << endl;
cout << "  ⬛🟦🟦🟦🟦🟦🟦🟦⬛🟥⬜🟦🟦🟦🟦🟦🟦🟦⬛  ⬛⬛" << endl;
cout << "  ⬛⬛🟦🟦🟦🟦🟦⬛⬜⬜🟦🟦🟦🟦⬛🟦🟦🟦⬛" << endl;
cout << "     ⬛🟦🟦⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛⬛🟦🟦🟦🟦⬛" << endl;
cout << "       ⬛⬛🟦🟦🟦🟦🟦🟦🟦⬛⬛⬛🟦🟦🟦🟦⬜⬛" << endl;
cout << "           ⬛⬛⬛⬛⬛⬛⬛       ⬛⬜🟦⬜⬛" << endl;
cout << "                                    ⬛⬛⬛" << endl;
}

void Venusaur::feed(){
  if(hunger < 99 || hunger == 99){
    if(hunger == 99){
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

void Venusaur::play(){
  if(happiness < 100 && energy > 0 && hunger > 0){
    happiness += 1;
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
  if(happiness == 100){
    cout << "Your " << name <<" is at maximum happiness" << endl;
  }
}

void Venusaur::energize(){
  if(energy < 100){
  energy += 1;
  }
  else{
    cout << "Your " << name << " is already full of energy" << endl;
  }
}

void Venusaur::skipHour(){
  if(energy < 99 || energy == 99){
    if(energy == 99){
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
