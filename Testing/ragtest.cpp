#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"
int main(){
    srand(time(0));
    Enemy Viper("Sand Viper", 40, 20, 15, 5, 50);
/*--------------------------------------------------------------------------------------------------------*/
    Viper.addDialogues({
    "Sand remembers...",                        // Short 1
    "Your heat... fades.",                      // Short 2
    "Die in silence.",                          // Short 3
    "The dunes hunger.",                        // Short 4
    "I strike without warning.",                // Short 5
    "I was once human too, until the gold turned my skin to scales.", // Long 1
    "Your footprints will be gone by sunset, just like all the others." // Long 2
});
/*--------------------------------------------------------------------------------------------------------*/
    Enemy Golem("Obsidian Golem", 180, 55, 30, 4, 300);
    Golem.addDialogues({
        "HALT. THIEF.",                             // Short 1
        "GREED IS HEAVY.",                          // Short 2
        "CRUSH THE FLESH.",                         // Short 3
        "YOU. ARE. DUST.",                          // Short 4
        "King Rameses built me to grind the greed of a thousand years into sand.", // Long 1
        "I have stood still for centuries just to wait for a fool like you to arrive." // Long 2
    });
/*--------------------------------------------------------------------------------------------------------*/
    Enemy Mummy("Cursed Mummy", 120, 35, 20, 3, 150);
    Mummy.addDialogues({
    "Linen and dust.",                          // Short 1
    "Free me. Now.",                            // Short 2
    "Eternal prison.",                          // Short 3
    "Sleep with us.",                           // Short 4
    "I was once a noble General with a family... now I am a shadow with a blade.", // Long 1
    "The Pharaoh promised us eternal life, but he never said it would be this nightmare." // Long 2
});
/*--------------------------------------------------------------------------------------------------------*/
Mummy.speak();
Golem.speak();
Viper.speak();

}




