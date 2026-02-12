#ifndef player_h
#define player_h

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>

using namespace std;

class Player{

private:

const std::string name;
int hp;
int atk;
int def;
int sparkle;
int loot;
int holder;
vector<string> inventory;


public:
Player(string Pname , int health , int attack , int defense )
: name(Pname) , hp(health) , atk(attack) , def(defense) {
     sparkle = 0;
     loot = 0;
}



};

#endif