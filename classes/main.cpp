#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"


int main(){
srand(time(0));
Enemy Scorpion("Scorpion" , 90 , 45 , 15 , 2 , 100);
Scorpion.addDialogues({
    "*Hissss*",
    "*Click-click*",
    "*Rattle of chitin*",
    "*Sharp tail snaps in the air*",
    "*Low aggressive screech*",
    "*Dry sand shifts as it moves*",
    "*Venom drips from its stinger*"
});



}