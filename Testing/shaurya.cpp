#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"

int main(){
    srand(time(0));
Enemy toxicfang("toxicfang",15, 40, 25, 10, 500);
toxicfang.addDialogues({

 "Feel the venom burn inside you."
"You cannot outrun the toxin."
"Your heartbeat slows already..."
"The poison spreads with every breath."
"Struggle if you must... it makes it sweeter."   

});
Enemy Blazetail("Blazetail", 150, 30, 15, 3, 120);
Blazetail.addDialogues({
  "The desert burns... and so will you.",
    "Feel the sting of fire!",
    "My tail carries molten death.",
    "You cannot survive this heat.",
    "The dunes will be your grave."});

Enemy HeatHowler("HeatHowler", 50, 28, 12, 5, 90);
HeatHowler.addDialogues({

 "Awooooo! The desert answers my call!",
    "You are weak under this sun.",
    "The sand hides my pack.",
    "Run... I love the chase.",
    "Your scent is strong... prey."
});
return 0;
}