#include <iostream>
#include <string>
#include "Pet.h"
#include "Charmander.h"
#include "Squirtle.h"
#include "Bulbasaur.h"
#include "Charmeleon.h"
#include "Ivysaur.h"
#include "Wartortle.h"
#include "Charizard.h"
#include "Blastoise.h"
#include "Venusaur.h"
#include <fstream>

using namespace std;

void introduction(){
cout << "        ⬛⬛⬛⬛⬛⬛" << endl;
cout << "      ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
cout << "    ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
cout << "  ⬛⬛⬜🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
cout << "⬛⬜⬜⬜⬜🟥🟥🟥🟥🟥⬛⬛⬛" << endl;
cout << "  ⬛⬛🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
cout << "    ⬛🟨⬛🟨🟨⬛⬛⬛⬛⬛⬛" << endl;
cout << "    ⬛🟨⬛🟨🟨⬛🟨🟨⬛⬛" << endl;
cout << "    ⬛🟨🟨🟨🟨🟨🟨🟨⬛" << endl;
cout << "      ⬛🟨🟨🟨🟨⬛⬛🟦⬛" << endl;
cout << "        ⬛⬛⬛⬛⬛⬛🟦⬛" << endl;
cout << "    ⬛⬛⬛⬛⬛⬛🟨🟨⬛⬛" << endl;
cout << "  ⬛⬜⬜⬛⬜⬜⬛🟨🟨⬛⬜⬛" << endl;
cout << "    ⬛⬜⬜⬛⬛⬛⬛⬛⬜⬜⬛" << endl;
cout << "      ⬛⬛⬛         ⬛⬛  " << endl;
cout << " Hi, my name is Ash Ketchum, the Pokemon World Champion"
  << endl << endl << " after nearly 30 years of being in the Pokemon anime series,"
  << endl << endl << " I have decided to start my new career as a Pokemon Babysitter,"
  << endl << endl << " thank you for joining my journey, now that we have introductions"
  << endl << endl << " out of the way, I'm going to give you one Pokemon to look over,"
  << endl << endl << " your choices are Bulbasaur the plant Pokemon, Squirtle the turtle"
  << endl << endl << " Pokemon, Charmander the lizard Pokemon, choose wisely as you will"
  << endl << endl << " be looking after them for a while." << endl << endl << "Please only type in the given numbers or else the imposter will come for you" << endl << endl;
}

string loadName(string tempName){
  string temporaryName;
  ifstream output("saveFile.txt");
  output >> temporaryName;
  tempName = temporaryName;
  output.close();
  return tempName;
}






int main() {
  int tempOption;
  cout << "Please enter valid options only:" << endl;
  cout << "1 - Continue" << endl;
  cout << "2 - New Game" << endl;
  int bulbTest = 1;
  cin >> tempOption;
  if(tempOption < 1 || tempOption > 2){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛        ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      exit(-1);
    }
  if(tempOption == 1){
    string tempName;
    if(loadName(tempName) == "Bulbasaur"){
      int option;
      while(bulbTest != 0){
          Bulbasaur myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            if(myPet.checkEvolution1()){
          Ivysaur myPet2;
              if(myPet.returnName() != myPet.getPetType()){
                string newName1 = myPet.returnName();
                myPet2.set_NickName(newName1);
              }
          cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        if(myPet2.checkEvolution2()){
          Venusaur myPet3;
          if(myPet2.returnName() != myPet2.getPetType()){
            string newName1 = myPet2.returnName();
            myPet3.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet2.returnName() << " has evolved into " << myPet3.getPetType() << endl;
          myPet3.status();
          myPet3.printInfo();
          myPet3.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet3.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet3.feed();
        }
        else if(option == 2){
          myPet3.energize();
        }
        else if(option == 3){
          myPet3.play();
        }
        else if(option == 4){
          myPet3.skipHour();
        }
        else if(option == 5){
          myPet3.save();
        }
        myPet3.status();
        myPet3.printInfo();
        myPet3.menu();
        cin >> option;
        }
        }
        else{
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
          }
          bulbTest -=1;
        
        }
  }
  else if(loadName(tempName) == "Squirtle"){
      int option;
      while(bulbTest != 0){
          Squirtle myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            if(myPet.checkEvolution1()){
          Wartortle myPet2;
          if(myPet.returnName() != myPet.getPetType()){
            string newName1 = myPet.returnName();
            myPet2.set_NickName(newName1);
          }
              cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        if(myPet2.checkEvolution2()){
          Blastoise myPet3;
          if(myPet2.returnName() != myPet2.getPetType()){
            string newName1 = myPet2.returnName();
            myPet3.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet2.returnName() << " has evolved into " << myPet3.getPetType() << endl;
          myPet3.status();
          myPet3.printInfo();
          myPet3.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet3.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet3.feed();
        }
        else if(option == 2){
          myPet3.energize();
        }
        else if(option == 3){
          myPet3.play();
        }
        else if(option == 4){
          myPet3.skipHour();
        }
        else if(option == 5){
          myPet3.save();
        }
        myPet3.status();
        myPet3.printInfo();
        myPet3.menu();
        cin >> option;
        }
        }
        else{
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
          }
          bulbTest -=1;
        
        }
  }
  else if(loadName(tempName) == "Charmander"){
      int option;
      while(bulbTest != 0){
          Charmander myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            if(myPet.checkEvolution1()){
          Charmeleon myPet2;
          if(myPet.returnName() != myPet.getPetType()){
            string newName1 = myPet.returnName();
            myPet2.set_NickName(newName1);
          }
              cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
          if(option == 1){
            myPet2.feed();
          }
          else if(option == 2){
            myPet2.energize();
          }
          else if(option == 3){
            myPet2.play();
          }
          else if(option == 4){
            myPet2.skipHour();
          }
          else if(option == 5){
            myPet2.save();
          }
          if(myPet2.checkEvolution2()){
          Charizard myPet3;
            if(myPet2.returnName() != myPet2.getPetType()){
              string newName1 = myPet2.returnName();
              myPet3.set_NickName(newName1);
            }
            cout << "Congrats, your " << myPet2.returnName() << " has evolved into " << myPet3.getPetType() << endl;
          myPet3.status();
          myPet3.printInfo();
          myPet3.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet3.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet3.feed();
        }
        else if(option == 2){
          myPet3.energize();
        }
        else if(option == 3){
          myPet3.play();
        }
        else if(option == 4){
          myPet3.skipHour();
        }
        else if(option == 5){
          myPet3.save();
        }
        myPet3.status();
        myPet3.printInfo();
        myPet3.menu();
        cin >> option;
        }
        }
        else{
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
          }
        }
        else{
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
        }
            
          }
          bulbTest -=1;
        
        }
  
  }
    else if(loadName(tempName) == "Charmeleon"){
      int option;
      while(bulbTest != 0){
          Charmeleon myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            if(myPet.checkEvolution2()){
          Charizard myPet2;
              if(myPet.returnName() != myPet.getPetType()){
              string newName1 = myPet.returnName();
          myPet2.set_NickName(newName1);
              }
              cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
          }
          bulbTest -=1;
      }
    }
      else if(loadName(tempName) == "Ivysaur"){
      int option;
      while(bulbTest != 0){
          Ivysaur myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            if(myPet.checkEvolution2()){
          Venusaur myPet2;
              if(myPet.returnName() != myPet.getPetType()){
              string newName1 = myPet.returnName();
          myPet2.set_NickName(newName1);
              }
              cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
          }
          bulbTest -=1;
      }
    }
    else if(loadName(tempName) == "Wartortle"){
      int option;
      while(bulbTest != 0){
          Wartortle myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            if(myPet.checkEvolution2()){
          Blastoise myPet2;
              if(myPet.returnName() != myPet.getPetType()){
              string newName1 = myPet.returnName();
          myPet2.set_NickName(newName1);
              }
              cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
          }
          bulbTest -=1;
      }
    }
      else if(loadName(tempName) == "Charizard"){
      int option;
      while(bulbTest != 0){
          Charizard myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            myPet.status();
            myPet.printInfo();
            myPet.menu();
            cin >> option;
          }
          bulbTest -=1;
      }
    }
        else if(loadName(tempName) == "Blastoise"){
      int option;
      while(bulbTest != 0){
          Blastoise myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            myPet.status();
            myPet.printInfo();
            myPet.menu();
            cin >> option;
          }
          bulbTest -=1;
      }
    }
          else if(loadName(tempName) == "Venusaur"){
      int option;
      while(bulbTest != 0){
          Venusaur myPet;
          myPet.load();
          myPet.status();
          myPet.printInfo();
          myPet.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
            if(option == 1){
              myPet.feed();
            }
            else if(option == 2){
              myPet.energize();
            }
            else if(option == 3){
              myPet.play();
            }
            else if(option == 4){
              myPet.skipHour();
            }
            else if(option == 5){
              myPet.save();
            }
            myPet.status();
            myPet.printInfo();
            myPet.menu();
            cin >> option;
          }
          bulbTest -=1;
      }
    }
        
  else{
    cout << "You do not have a save file" << endl;
    cout << "Starting new save file" << endl;
  }
  }
  if(bulbTest == 1){
  int Pokemon;
  introduction();
  cout << "1 - Bulbasaur - Grass Type" << endl;
  cout << "2 - Squirtle - Water Type" << endl;
  cout << "3 - Charmander - Fire Type" << endl;
  cin >> Pokemon;
    if(Pokemon < 1 || Pokemon > 3 ){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      exit(-1);
    }

  int test = 1;
  int option;
  string nickName;
  int nameoption;

  while(test != 0){
    if(Pokemon == 1 ){
      Bulbasaur myPet;
      cout << "Would you like to give " << myPet.getPetType() << " a nickname?" << endl;
      cout << "1 - Yes" << endl;
      cout << "2 - No" << endl;
      cin >> nameoption;
      if(nameoption < 1 || nameoption > 2){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      exit(-1);
    }
      if(nameoption == 1){
        cout << "Please type in the name you wish to give " << myPet.getPetType() << endl;
        cin.ignore();
        getline(cin, nickName);
        myPet.set_NickName(nickName);
      }
      myPet.status();
      myPet.printInfo();
      myPet.menu();
      cin >> option;
      while(option != 6){
        if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet.feed();
        }
        else if(option == 2){
          myPet.energize();
        }
        else if(option == 3){
          myPet.play();
        }
        else if(option == 4){
          myPet.skipHour();
        }
        else if(option == 5){
          myPet.save();
        }
       if(myPet.checkEvolution1()){
          Ivysaur myPet2;
         if(myPet.returnName() != myPet.getPetType()){
                string newName1 = myPet.returnName();
                myPet2.set_NickName(newName1);
              }
         cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        if(myPet2.checkEvolution2()){
          Venusaur myPet3;
          if(myPet2.returnName() != myPet2.getPetType()){
          string newName1 = myPet2.returnName();
          myPet3.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet2.returnName() << " has evolved into " << myPet3.getPetType() << endl;
          myPet3.status();
          myPet3.printInfo();
          myPet3.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet3.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet3.feed();
        }
        else if(option == 2){
          myPet3.energize();
        }
        else if(option == 3){
          myPet3.play();
        }
        else if(option == 4){
          myPet3.skipHour();
        }
        else if(option == 5){
          myPet3.save();
        }
        myPet3.status();
        myPet3.printInfo();
        myPet3.menu();
        cin >> option;
        }
        }
        else{
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
      }
      test -=1;
    }
    else if(Pokemon == 2){
      Squirtle myPet;
      cout << "Would you like to give " << myPet.getPetType() << " a nickname?" << endl;
      cout << "1 - Yes" << endl;
      cout << "2 - No" << endl;
      cin >> nameoption;
      if(nameoption < 1 || nameoption > 2){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      exit(-1);
    }
      if(nameoption == 1){
        cout << "Please type in the name you wish to give " << myPet.getPetType() << endl;
        cin.ignore();
        getline(cin, nickName);
        myPet.set_NickName(nickName);
      }
      myPet.status();
      myPet.printInfo();
      myPet.menu();
      cin >> option;
      while(option != 6){
        if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet.feed();
        }
        else if(option == 2){
          myPet.energize();
        }
        else if(option == 3){
          myPet.play();
        }
        else if(option == 4){
          myPet.skipHour();
        }
        else if(option == 5){
          myPet.save();
        }
        if(myPet.checkEvolution1()){
          Wartortle myPet2;
          if(myPet.returnName() != myPet.getPetType()){
          string newName1 = myPet.returnName();
          myPet2.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        if(myPet2.checkEvolution2()){
          Blastoise myPet3;
          if(myPet2.returnName() != myPet2.getPetType()){
          string newName1 = myPet2.returnName();
          myPet3.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet2.returnName() << " has evolved into " << myPet3.getPetType() << endl;
          myPet3.status();
          myPet3.printInfo();
          myPet3.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet3.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet3.feed();
        }
        else if(option == 2){
          myPet3.energize();
        }
        else if(option == 3){
          myPet3.play();
        }
        else if(option == 4){
          myPet3.skipHour();
        }
        else if(option == 5){
          myPet3.save();
        }
        myPet3.status();
        myPet3.printInfo();
        myPet3.menu();
        cin >> option;
        }
        }
        else{
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
      }
      test -=1;
    }
    else if(Pokemon == 3){
      Charmander myPet;
      cout << "Would you like to give " << myPet.getPetType() << " a nickname?" << endl;
      cout << "1 - Yes" << endl;
      cout << "2 - No" << endl;
      cin >> nameoption;
      if(nameoption < 1 || nameoption > 2){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      exit(-1);
    }
      if(nameoption == 1){
        cout << "Please type in the name you wish to give " << myPet.getPetType() << endl;
        cin.ignore();
        getline(cin, nickName);
        myPet.set_NickName(nickName);
      }
      myPet.status();
      myPet.printInfo();
      myPet.menu();
      cin >> option;
      while(option != 6){
        if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet.feed();
        }
        else if(option == 2){
          myPet.energize();
        }
        else if(option == 3){
          myPet.play();
        }
        else if(option == 4){
          myPet.skipHour();
        }
        else if(option == 5){
          myPet.save();
        }
        if(myPet.checkEvolution1()){
          Charmeleon myPet2;
          if(myPet.returnName() != myPet.getPetType()){
          string newName1 = myPet.returnName();
          myPet2.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet.returnName() << " has evolved into " << myPet2.getPetType() << endl;
          myPet2.status();
          myPet2.printInfo();
          myPet2.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet2.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet2.feed();
        }
        else if(option == 2){
          myPet2.energize();
        }
        else if(option == 3){
          myPet2.play();
        }
        else if(option == 4){
          myPet2.skipHour();
        }
        else if(option == 5){
          myPet2.save();
        }
        if(myPet2.checkEvolution2()){
          Charizard myPet3;
          if(myPet2.returnName() != myPet2.getPetType()){
          string newName1 = myPet2.returnName();
          myPet3.set_NickName(newName1);
          }
          cout << "Congrats, your " << myPet2.returnName() << " has evolved into " << myPet3.getPetType() << endl;
          myPet3.status();
          myPet3.printInfo();
          myPet3.menu();
          cin >> option;
          while(option != 6){
            if(option < 1 || option > 6){
      cout << "            ⬛⬛⬛⬛⬛⬛" << endl;
      cout << "          ⬛🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "        ⬛🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛🟦🟦⬜⬜⬜⬜⬛" << endl;
      cout << "      ⬛🟥🟥⬛🟦🟦🟦🟦⬜⬜⬜🟦⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥⬛🟦🟦🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥⬛🟦🟦🟦🟦🟦🟦⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥⬛⬛⬛⬛⬛⬛⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "⬛🟥🟥⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "  ⬛⬛⬛🟥🟥🟥🟥🟥🟥🟥🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛⬛⬛⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "      ⬛🟥🟥🟥⬛    ⬛🟥🟥🟥⬛" << endl;
      cout << "        ⬛⬛⬛         ⬛⬛⬛" << endl << endl;
      cout << "You did not enter a valid option, the imposter is here to tell "<< endl << endl <<"you to enter valid options only after you restart" << endl;
      myPet3.save();
      cout  << endl << endl << "Your data has been saved, but please enter valid options only" << endl << endl;
      exit(-1);
    }
        if(option == 1){
          myPet3.feed();
        }
        else if(option == 2){
          myPet3.energize();
        }
        else if(option == 3){
          myPet3.play();
        }
        else if(option == 4){
          myPet3.skipHour();
        }
        else if(option == 5){
          myPet3.save();
        }
        myPet3.status();
        myPet3.printInfo();
        myPet3.menu();
        cin >> option;
        }
        }
        else{
        myPet2.status();
        myPet2.printInfo();
        myPet2.menu();
        cin >> option;
        }
        }
        }
        else{
        myPet.status();
        myPet.printInfo();
        myPet.menu();
        cin >> option;
        }
      }
      test -=1;
    }
    else{
      cout << "Please choose 1 or 2 or 3" << endl;
      cin >> Pokemon;
    }
  }
  }
  
  
}
