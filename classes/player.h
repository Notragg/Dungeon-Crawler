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
int sparkle = 0;
int loot = 0;
int holder = 0;
vector<string> inventory;


public:

Player(string Pname , int health , int attack , int defense )
: name(Pname) , hp(health) , atk(attack) , def(defense) {
     sparkle = 0;
     loot = 0;
}

void talkAction(){
 cout << "PICK ROCK(1) , PAPER (2) OR SCISSORS(3)!!!\n";
cin >> holder ;}

int GetAction(){
 return holder;}



int getAttack() {
    return atk;
}

int getDefense() {
    return def;
}

void takeDamage(int dmg) {
    hp -= dmg;
    if (hp < 0) hp = 0;
}

bool isAlive() {
    return hp > 0;
}

int getHP() {
    return hp;
}

string getName() {
    return name;
}



};

#endif