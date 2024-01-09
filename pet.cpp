#include "Pet.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Pet::Pet(){
  hunger = 0;
  energy = 0;
  happiness = 0;
  name = "Missingno";
  pet_type = "Missingno";
}

void Pet::printInfo(){
  cout << name << endl;
  cout << "Hunger Level " << hunger << "/10" << endl;
  cout << "Energy Level " << energy << "/10" << endl;
  cout << "Happiness Level " << happiness << "/10" <<   endl;
}
void Pet::play(){
  if(happiness < 10 && energy > 0 && hunger > 0){
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
  if(happiness == 10){
    cout << "Your " << name <<" is at maximum happiness" << endl;
  }
}

void Pet::feed(){
  if(hunger < 10){
  hunger += 1;
  }
  else{
    cout << "Your " << name << " is already full" << endl;
  }
}

void Pet::energize(){
  if(energy < 10){
  energy += 1;
  }
  else{
    cout << "Your " << name << " is already full of energy" << endl;
  }
}

void Pet::skipHour(){
  if(energy < 9 || energy == 9){
    if(energy == 9){
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

void Pet::save(){
  ofstream input("saveFile.txt");
  input << pet_type << endl;
  input << name << endl;
  input << hunger << endl;
  input << energy << endl;
  input << happiness << endl;
  input.close();
}

void Pet::load(){
  ifstream output("saveFile.txt");
  getline(output, pet_type);
  getline(output, name);
  output >> hunger;
  output >> energy;
  output >> happiness;
  output.close();
}

void Pet::menu(){
  cout << "Please choose an option" << endl;
  cout << "1 - Feed" << endl;
  cout << "2 - Energize" << endl;
  cout << "3 - Play" << endl;
  cout << "4 - Take a break" << endl;
  cout << "5 - Save" << endl;
  
}

void Pet::status(){
  if(hunger < 5){
    cout << "It looks like " << name << " is hungry, try feeding them" << endl;
  }
  if(energy < 5){
    cout << "It looks like " << name << " is tired, try getting their energy up" << endl;
  }
  if(happiness < 5){
    cout << "It looks like " << name << " is sad, try playing with them" << endl;
  }
}

void Pet::set_NickName(string nickName){
  name = nickName;
}

string Pet::getPetType(){
  return pet_type;
}

bool Pet::checkEvolution1(){
  if(energy == 10 && happiness == 10 && hunger == 10){
    return true;
  }
  return false;
}

string Pet::returnName(){
  return name;
}

bool Pet::checkEvolution2(){
  if(energy == 20 && happiness == 20 && hunger == 20){
    return true;
  }
  return false;
}
