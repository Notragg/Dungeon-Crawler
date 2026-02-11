#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int health;
    int attackPower;

public:
    // This creates your hero!
    Player(std::string n) : name(n), health(100), attackPower(15) {}

    void showStatus() {
        std::cout << "\n--- Status: " << name << " ---" << std::endl;
        std::cout << "HP: " << health << " | ATK: " << attackPower << std::endl;
    }

    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) health = 0;
        std::cout << name << " took " << amount << " damage!" << std::endl;
    }
};

#endif