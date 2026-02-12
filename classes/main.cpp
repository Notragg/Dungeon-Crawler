#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"


int WhoWins();

int main(){
srand(time(0));
Enemy Scorpion("Scorpion" , 90 , 45 , 15 , 2 , 100); // name(Ename) , hp(health) , atk(attack) , def(defense) , wraith(wrath) , loot(mon)
Scorpion.addDialogues({
    "*Hissss*\n",
    "*Click-click*\n",
    "*Rattle of chitin*\n",
    "*Sharp tail snaps in the air*\n",
    "*Low aggressive screech*\n",
    "*Dry sand shifts as it moves*\n",
    "*Venom drips from its stinger*\n"
});

}

int whowins(int player , int enemy){

if (player < 1 || player > 3 || enemy < 1 || enemy > 3) {
        return 9; // invalid
    }

if (player == 1){
    if (enemy == 2) {return -1;} //lose
    else if (enemy == 3) {return 1;} //win
    else {
        return 0; //draw
    }
} //"PICK ROCK(1) , PAPER (2) OR SCISSORS(3)

if (player == 2){
    if (enemy == 1) {return 1;} //win
    else if (enemy == 3) {return -1;} //lose
    else {
        return 0; //draw
    }
}

if (player == 3){
    if (enemy == 1) {return 1;} //win
    else if (enemy == 2) {return -1;} //lose
    else {
        return 0; //draw
    }
}

return 0; 
}