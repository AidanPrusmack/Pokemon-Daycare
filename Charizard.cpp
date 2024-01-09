#include "Charizard.h"
#include <iostream>
#include <string>
using namespace std;

  Charizard::Charizard(){
    this->hunger = hunger;
    this->energy = energy;
    this->happiness = happiness;
    name = "Charizard";
    pet_type = "Charizard";
  }
  Charizard::Charizard(string nickName){
    this->hunger = hunger;
    this->energy = energy;
    this->happiness = happiness;
    name = nickName;
    pet_type = "Charizard";
  }

void Charizard::printInfo(){
  cout << "-----------------------------------------------------------------------" << endl;
  cout << name << endl;
  cout << "Hunger Level " << hunger << "/100" << endl;
  cout << "Energy Level " << energy << "/100" << endl;
  cout << "Happiness Level " << happiness << "/100" << endl;
cout << "        🟥🟥🟥🟨🟨🟨🟨🟥" << endl;
cout << "        🟥🟥🟥🟨🟥🟨🟥    ⬛⬛⬛                 🟧" << endl;
cout << "           🟥🟥🟧🟥🟨🟨  ⬛🟧🟧🟧⬛              🟧" << endl;
cout << "              🟧🟧  🟥      🟥⬜🟧⬛             🟧🟧🟧" << endl;
cout << "        🟧🟧🟧🟧    🟥  ⬛🟥🟥🟥🟧⬛          🟧🟧🟧🟧" << endl;
cout << "      🟧🟧🟧🟧          ⬛🟥🟥🟧🟧⬛        🟧🟦🟧🟧🟧" << endl;
cout << "      🟧🟧🟦🟧         🟥🟫🟧⬜🟧🟧⬛        🟧🟧🟦🟦🟦🟧" << endl;
cout << "    🟧🟧🟦🟦🟧🟧      ⬛🟪🟧🟧🟫🟧🟧🟧⬛    🟧🟦🟦🟦🟦🟧🟧" << endl;
cout << "    🟧🟦🟦🟦🟧🟧    ⬛🟧⬛⬛⬛🟧🟧⬛🟧⬛  🟧🟧🟦🟦🟦🟦🟦🟧" << endl;
cout << "  🟧🟧🟦🟦🟦🟧🟧      ⬛🟧🟧🟧🟧⬛⬛🟧🟧⬛🟧🟧🟦🟦🟦🟥🟦🟧" << endl;
cout << "  🟧🟦🟦🟦🟦🟧🟧        ⬛⬛⬛🟧⬛  ⬛⬛⬛🟧🟦🟦🟥🟥🟦🟦🟧" << endl;
cout << "🟧🟧🟦🟦🟦🟦🟦🟧🟧      ⬛🟧🟧🟧⬛      🟧🟧🟦🟦🟥🟨🟦🟦🟥" << endl;
cout << "🟧🟦🟦🟦🟦🟦🟦🟧🟧🟧    ⬛🟧🟧🟧⬛    🟧🟧🟦🟦🟥🟥🟦🟥🟥🟥" << endl;
cout << "🟧🟦🟦🟦🟦🟦🟦🟦🟧🟧🟧  ⬛🟧🟧🟧⬛  🟧🟧🟧🟦🟦🟥🟨🟥🟨🟥🟧" << endl;
cout << "🟧🟦🟦⬛⬜⬛🟦🟦🟦🟧🟧⬛🟧🟧🟧🟧⬛🟧🟧🟧🟦🟦🟦🟥🟨🟨🟥🟧🟥" << endl;
cout << "🟧🟦  ⬜🟧⬜⬛🟦🟦🟧⬛🟧🟧🟧🟧🟧🟧⬛🟧🟧🟦🟦🟥🟨🟨🟨🟨🟥🟧" << endl;
cout << "🟧    ⬛🟧🟧⬛🟦🟦⬛🟧🟧🟧🟧🟧🟧🟧⬛🟧🟦    ⬛🟥🟧🟨🟨🟧🟥" << endl;
cout << "🟧      ⬛🟧🟧⬛⬛🟧🟧⬜⬜⬜🟧🟧🟧⬛🟦⬛🟧  🟥🟥🟧🟨🟨🟥" << endl;
cout << "         ⬛🟧🟧🟧⬛⬜⬜⬜⬜⬜🟧🟧🟧⬛🟧🟧⬛🟦⬛🟧⬛🟥🟦" << endl;
cout << "         ⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜🟧⬛🟧🟧🟧⬛🟦  ⬛🟧⬛🟦" << endl;
cout << "    ⬛⬛🟧🟧🟧🟧⬛⬜⬜⬜⬜⬜⬜🟧⬛⬛⬛🟦  ⬛🟧🟧⬛" << endl;
cout << "  ⬛🟧🟧🟧🟧⬛⬛⬛⬜⬜⬜⬜⬜⬜🟧⬛🟧🟧⬛⬛🟧🟧⬛" << endl;
cout << "  ⬛🟧🟧🟧⬛🟧🟧⬛⬜⬜⬜⬜⬜⬜🟧🟧⬛🟧🟧🟧🟧⬛" << endl;
cout << "  ⬛🟧🟧⬛🟧🟧🟧⬛⬜⬜⬜⬜⬜⬜🟧🟧🟧⬛🟧🟧⬛" << endl;
cout << "  ⬛🟧🟧⬛🟧🟧🟧🟧⬛⬜⬜⬜⬜⬜🟧🟧🟧🟧⬛⬛" << endl;
cout << "  ⬛🟧🟧🟧⬛🟧🟧🟧🟧⬛⬜⬜⬜⬜⬛🟧🟧🟧🟧⬛" << endl;
cout << "    ⬛⬛⬛⬛🟧🟧🟧⬛  ⬛⬛⬛⬛⬛🟧🟧🟧🟧⬛" << endl;
cout << "    ⬛⬜🟧🟧🟧🟧⬛              ⬛🟧🟧🟧🟧⬜" << endl;
cout << "      ⬛⬜⬛⬜⬛                   ⬛⬜⬛⬜⬛" << endl;
}
void Charizard::play(){
  if((happiness < 99 || happiness == 99) && energy > 0 && hunger > 0){
    
    if(happiness == 99){
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
  if(happiness == 100){
    cout << "Your " << name << " is at maximum happiness" << endl;
  }
  }

void Charizard::feed(){
  if(hunger < 100){
  hunger += 1;
  }
  else{
    cout << "Your " << name << " is already full" << endl;
  }
}

void Charizard::energize(){
  if(energy < 100){
  energy += 1;
  }
  else{
    cout << "Your " << name << " is already full of energy" << endl;
  }
}

void Charizard::skipHour(){
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
