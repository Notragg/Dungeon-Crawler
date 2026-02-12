#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"


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