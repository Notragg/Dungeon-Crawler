#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"


int main(){
    srand(time(0));
    
    Enemy Medrada("Medrada" , 25 , 50 , 40 , 1000 , 0 ) ; // name(Ename) , hp(health) , atk(attack) , def(defense) , wraith(wrath) , loot(mon)
    Medrada.addDialogues({
        "WHYYYYYYYYYY!!!???",
        "**She looks at you with a tearing eye**",
        "YOU KNOW I WAS AN ADVENTURER TOO!!!",
        "**she smiles a little**",
        "If possible , i dont wanna fight.",
        "THIS CURSE DRIVES ME CRAZY",
        "I swear this is not me , this is the curse.",
        "So it is my mistake????? is it????"
    });

    Enemy Ankh("Ankh" , 1 , 10000 , 1 , 1 ,1 ); // kill or get killed.
    Ankh.addDialogues({
    "Fate saves us both from each other...",
    "The gods let you live one more turn... or perhaps I do.",
    "Everything will be sand soon.",
    "Poor child... why did you come here?",
    "Run. While you still can.",
    "If you stay, I will kill you.",
    "I cannot escape... so you must, for both of us."
});


};