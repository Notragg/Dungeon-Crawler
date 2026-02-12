
#ifndef mobs_h
#define mobs_h
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>

using namespace std;

class Enemy{
private:
const std::string name;
int hp;
int atk;
int def;
int wraith;
int loot;
int holder;
vector<string> dialogue;

 
public:

Enemy(std::string Ename , int health , int attack , int defense , int wrath , int mon)
: name(Ename) , hp(health) , atk(attack) , def(defense) , wraith(wrath) , loot(mon)
{}


void addDialogues(initializer_list<string> lines) {
    for (const string& line : lines) {
        dialogue.push_back(line);
    }
}

void speak() {
    if (!dialogue.empty()) {
        int i = rand() % dialogue.size();
        cout << name << ": " << dialogue[i] << endl;
    }
}

void talkAction(){
 holder = rand()%3 + 1;
}

int GetAction(){
    return holder;
}

};

#endif