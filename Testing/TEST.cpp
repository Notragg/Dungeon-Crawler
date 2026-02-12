#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// -------------------- STRUCTS --------------------

struct Player {
    string name;
    int hp;
    int defense;
};

struct Enemy {
    string name;
    int hp;
    int attack;
    int defense;

    int rockChance;
    int paperChance;
    int scissorsChance;

    vector<string> dialogues;
};

// -------------------- FUNCTIONS --------------------

string chooseEnemyMove(const Enemy& e) {
    int roll = rand() % 100;

    if (roll < e.rockChance)
        return "rock";
    else if (roll < e.rockChance + e.paperChance)
        return "paper";
    else
        return "scissors";
}

string randomDialogue(const Enemy& e) {
    return e.dialogues[rand() % e.dialogues.size()];
}

bool combat(Player& player, Enemy enemy) {
    string playerChoice;

    cout << "\nA " << enemy.name << " appears!\n";

    while (player.hp > 0 && enemy.hp > 0) {
        cout << "\n" << player.name << " HP: " << player.hp
             << " | " << enemy.name << " HP: " << enemy.hp << endl;

        cout << "Choose (rock / paper / scissors): ";
        cin >> playerChoice;

        string enemyChoice = chooseEnemyMove(enemy);
        cout << enemy.name << " chose: " << enemyChoice << endl;

        // DRAW
        if (playerChoice == enemyChoice) {
            cout << randomDialogue(enemy) << endl;
        }
        // PLAYER WINS
        else if (
            (playerChoice == "rock" && enemyChoice == "scissors") ||
            (playerChoice == "paper" && enemyChoice == "rock") ||
            (playerChoice == "scissors" && enemyChoice == "paper")
        ) {
            int dmg = max(1, 20 - enemy.defense);
            enemy.hp -= dmg;
            cout << "You strike the enemy for " << dmg << " damage.\n";
        }
        // PLAYER LOSES
        else if (
            playerChoice == "rock" ||
            playerChoice == "paper" ||
            playerChoice == "scissors"
        ) {
            int dmg = max(1, enemy.attack - player.defense);
            player.hp -= dmg;
            cout << enemy.name << " hits you for " << dmg << " damage.\n";
        }
        else {
            cout << "Invalid move.\n";
        }
    }

    return player.hp > 0;
}

// -------------------- MAIN GAME --------------------

int main() {
    srand(time(0));

    Player player;
    player.hp = 100;
    player.defense = 5;

    bool respectedPyramid = true;
    bool triedToStealExtra = false;

    cout << "TREASURE OF SAHARA\n";
    cout << "------------------\n";
    cout << "Enter your name: ";
    getline(cin, player.name);

    cout << "\nA young adventurer from Nigeria enters the Sahara...\n";
    cout << "After 4 years of searching, you stand before the pyramid of King Rameses.\n";
    cout << "The air feels heavy. Ancient. Watching.\n";

    // -------------------- ENEMIES --------------------

    Enemy scarab = {
        "Scarab Swarm",
        40, 10, 2,
        60, 20, 20,
        {
            "The scarabs crawl over ancient bones...",
            "You hear skittering beneath the sand."
        }
    };

    Enemy guardian = {
        "Cursed Guardian",
        70, 15, 5,
        33, 33, 34,
        {
            "I was sworn to protect this place... forever.",
            "The pharaoh's command binds my soul."
        }
    };

    Enemy wraith = {
        "Sand Wraith",
        60, 18, 3,
        20, 40, 40,
        {
            "The desert remembers every scream.",
            "You should have stayed buried."
        }
    };

    Enemy boss = {
        "Pharaoh's Shade",
        150, 22, 8,
        33, 33, 34,
        {
            "You are not the first to stand before me.",
            "My treasure is not meant for the living.",
            "Your fate is written in sand."
        }
    };

    vector<Enemy> pyramid = { scarab, guardian, wraith };

    // -------------------- PYRAMID LEVELS --------------------

    for (int level = 0; level < pyramid.size(); level++) {
        cout << "\nYou descend deeper into the pyramid...\n";

        if (!combat(player, pyramid[level])) {
            cout << "\nYou collapse inside the pyramid.\n";
            cout << "ENDING 3: Fallen in the Dark.\n";
            return 0;
        }
    }

    // -------------------- BOSS --------------------

    cout << "\nYou enter the Inner Sanctum.\n";
    cout << "The Pharaoh's Shade rises from the shadows.\n";

    if (!combat(player, boss)) {
        cout << "\nThe pyramid claims another soul.\n";
        cout << "ENDING 3: Fallen in the Dark.\n";
        return 0;
    }

    // -------------------- TREASURE CHAMBER --------------------

    cout << "\nYou reach the Treasure Chamber.\n";
    cout << "Gold, artifacts, and the treasure you sought lie before you.\n";
    cout << "\n1. Take only what you came for and leave\n";
    cout << "2. Steal extra artifacts\n";
    cout << "Choice: ";

    int choice;
    cin >> choice;

    if (choice == 2) {
        triedToStealExtra = true;
        respectedPyramid = false;
    }

    // -------------------- ENDINGS --------------------

    cout << "\n--- FINAL OUTCOME ---\n";

    if (triedToStealExtra) {
        cout << "The pyramid trembles.\n";
        cout << "Sand seals every exit.\n";
        cout << "Your greed consumes you.\n";
        cout << "ENDING 1: Consumed by Greed.\n";
    }
    else if (!respectedPyramid) {
        cout << "You escape the pyramid alive.\n";
        cout << "ENDING 2: The Wise Escape.\n";
    }
    else {
        cout << "You escape without disrespecting the pyramid.\n";
        cout << "You grow rich...\n";
        cout << "But a year later, a strange disease claims you.\n";
        cout << "ENDING 4 (SECRET): The King's Curse.\n";
    }

    return 0;
}
