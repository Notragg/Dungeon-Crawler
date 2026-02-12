#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>   
#include <initializer_list>
#include "mobs.h"

int main() {
    srand(time(0));

    //  Giant Sand Beetle (Tank Type)
    Enemy GiantSandBeetle("Giant Sand Beetle", 120, 30, 40, 1, 150);
    GiantSandBeetle.addDialogues({
        "*Heavy armored legs crunch the sand*\n",
        "*A deep chittering echoes*\n",
        "*Its shell glints under the sun*\n",
        "*The ground trembles slightly*\n",
        "*It slams its hard shell forward*\n",
        "*Dry sand sprays in the air*\n",
        "*A metallic screech erupts*\n"
    });

    // Sand Jackal (Balanced / Fast Attacker)
    Enemy SandJackal("Sand Jackal", 85, 40, 20, 2, 120);
    SandJackal.addDialogues({
        "*A sharp howl pierces the desert air*\n",
        "*Claws scratch rapidly against sand*\n",
        "*Low growling echoes nearby*\n",
        "*Golden eyes glare fiercely*\n",
        "*It circles you swiftly*\n"
    });

    //  Desert Zombie (Slow but Strong)
    Enemy DesertZombie("Desert Zombie", 150, 35, 25, 1, 200);
    DesertZombie.addDialogues({
        "*Dry bones crack as it moves*\n",
        "*A hollow groan escapes*\n",
        "*Sand falls from its tattered body*\n",
        "*It drags its feet heavily*\n",
        "*Its empty eyes stare at you*\n"
    });

    return 0;
}
