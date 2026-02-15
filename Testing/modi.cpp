#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>   
#include <initializer_list>
#include "mobs.h"

int main() {
    srand(time(0));

    //  Frost Jotunn (Tank Type)
    Enemy FrostJotunn("Frost Jotunn", 140, 28, 45, 1, 180);
    FrostJotunn.addDialogues({
        "*Ice cracks beneath its massive feet*\n",
        "*A freezing wind surrounds you*\n",
        "*Its icy skin glows pale blue*\n",
        "*The ground trembles as it steps*\n",
        "*It raises a gigantic frozen club*\n",
        "*Snow swirls violently in the air*\n",
        "*A thunderous roar shakes the battlefield*\n"
    });

    //  Draugr Warrior (Balanced / Fast Attacker)
    Enemy DraugrWarrior("Draugr Warrior", 95, 42, 25, 2, 140);
    DraugrWarrior.addDialogues({
        "*A rusted blade scrapes against stone*\n",
        "*Cold undead eyes stare into yours*\n",
        "*It moves unnaturally fast*\n",
        "*A chilling battle cry echoes*\n",
        "*Its armor rattles as it charges*\n"
    });

    //  Fire Demon of Muspelheim (Slow but Strong)
    Enemy FireDemon("Fire Demon", 160, 38, 30, 1, 220);
    FireDemon.addDialogues({
        "*Flames erupt around its body*\n",
        "*Molten cracks glow across its skin*\n",
        "*Heat distorts the air around you*\n",
        "*It drags a blazing sword across the ground*\n",
        "*A fiery roar bursts forward*\n"
    });





    return 0;
}
