#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"
#include "player.h"
/*GOD OF WWAR ADAPT KREGE-BAAAT KAHATM*/
//..................................................................................
int whoWins();
int whoWins(int player, int enemy);
int calculateDamage(int atk, int def);

//.........................................................................................
int main() {

    srand(time(0));

    Player hero("Hero", 100, 40, 20);

    Enemy Scorpion("Scorpion", 90, 45, 15, 2, 100);

    Scorpion.addDialogues({
        "*Hissss*\n",
        "*Click-click*\n",
        "*Venom drips*\n"
    });

    cout << "Battle Start!\n\n";

    while (hero.isAlive() && Scorpion.isAlive()) {

        // Player turn
        hero.talkAction();
        Scorpion.talkAction();

        int p = hero.GetAction();
        int e = Scorpion.GetAction();

        int result = whoWins(p, e);

        if (result == 1) {
            int dmg = calculateDamage(
                hero.getAttack(),
                Scorpion.getDefense()
            );

            Scorpion.takeDamage(dmg);

            cout << "You hit " << Scorpion.getName()
                 << " for " << dmg << " damage!\n";
        }

        else if (result == -1) {
            int dmg = calculateDamage(
                Scorpion.getAttack(),
                hero.getDefense()
            );

            hero.takeDamage(dmg);

            cout << Scorpion.getName()
                 << " hits you for " << dmg << " damage!\n";
        }

        else {
            cout << "Draw! No damage.\n";
        }

        cout << "Your HP: " << hero.getHP() << endl;
        cout << "Enemy HP: " << Scorpion.getHP() << endl;

        Scorpion.speak();

        cout << "----------------------\n";
    }

    if (hero.isAlive())
        cout << "\nYou Win!\n";
    else
        cout << "\nYou Lose!\n";

    return 0;
}

//................................................

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

//......................................................................

int calculateDamage(int atk, int def) {
    int damage = atk - (def / 2);

    // Random small variation
    damage += rand() % 3;

    if (damage < 1)
        damage = 1;

    return damage;
}
