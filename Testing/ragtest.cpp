#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "C:\Users\tryra\OneDrive\Documents\GitHub\Dungeon-Crawler\classes\mobs.h"
int main(){
    srand(time(0));
    Enemy Viper("Sand Viper", 40, 20, 15, 5, 50);
    Viper.addDialogues({
    "*Ssssss...*",
    "*Forked tongue flickers in the air*",
    "*Yellow eyes track your every heartbeat*",
    "*Coils its body, ready to spring*",
    "*The sound of scales sliding over hot sand*",
    "*A drop of emerald venom falls from its fangs*",
    "You are just... more heat in the desert..."
}); 
    Enemy Golem("Obsidian Golem", 180, 55, 30, 4, 300);
    Golem.addDialogues({
    "*Grinding of ancient stone on stone*",
    "INTRUDER... DETECTED...",
    "*Deep vibrations shake the floor beneath you*",
    "THE KING SLEEPS. YOU DO NOT.",
    "*Dust and pebbles fall from its joints*",
    "GREED IS HEAVY... IT WILL CRUSH YOU...",
    "*Its chest glows with a faint purple light*"
});
    Enemy Mummy("Cursed Mummy", 120, 35, 20, 3, 150);
    Mummy.addDialogues({
    "I was once a noble... now I am bound to this tomb.",
    "The pharaoh's command is my eternal prison.",
    "You should not have disturbed my rest.",
    "The sands will claim you as they claimed me.",
    "Your fate is written in sand."
});
Mummy.speak();
Golem.speak();
Viper.speak();

}




