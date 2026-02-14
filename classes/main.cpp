#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"
#include "player.h"
#include <ctime>

//................................TREASURE OF SAHARA..................................................

int whoWins(int player, int enemy);
int turn = 1;
int calculateDamage(int atk, int def);
void waitForEnter();
int bar(Player& hero );
void line();

//.........................................................................................
int main() {
    srand(time(0));

        cout << "Kya mai tumhara naam jaan sakta hu?" << endl;
        string h;
        cin >> h ;
        Player hero(h, 100, 40, 20);
        bar(hero);
}

//................................................

int whoWins(int player , int enemy){

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

//........................................................................

void waitForEnter() {
    cout << "\n[Press Enter to continue...]";
    cin.ignore();
    cin.get();
    cout << "\n";
}

void line()
{
    cout << "\n---------------------------------------------------------------------\n\n";
}


//...........................PROLOGUE.......................................

    int bar(Player& hero ){
//............................................................................................
    Enemy Bart(  "Bartender" , 100 , 0 , 0 , 0 , 0);
    Bart.addDialogues({
    "Roz aate ho... roz peete ho... par zindagi kab jeeyoge?\n",

    "Tum jaise log do jagah milte hai... ya toh kahaniyon me... ya phir barbaadi me.\n",

    "Sapne mehange nahi hote... par unhe jeene ki himmat mehengi hoti hai.\n",

    "Maine tumhe pehli baar dekha tha... tab tumhari aankhon me aag thi.\nAb sirf dhuaan hai.\n",

    "Sharab dard ko mitaati nahi...\nSirf usse chupne ka waqt deti hai.\n",

    "Udhar badhta ja raha hai... aur tum khud se aur door hote ja rahe ho.\n",

    "Hero banna chahte the na?\nHero pehle khud se ladta hai.\n",

    "Tum bhaag nahi rahe duniya se...\nTum bhaag rahe ho khud se.\n",

    "Ek waqt tha jab log tumhara naam yaad rakhte the.\nAb tum khud bhool gaye ho.\n",

    "Kab tak mazaak banaoge apni zindagi ka?\nEk din zindagi tumhara mazaak bana degi.\n",

    "Tumhare andar abhi bhi woh  zinda hai...\nBas tum usse milne se darr rahe ho.\n",

    "Agar girna hi tha... toh itna neeche kyu?\n",

    "Har aadmi ko ek mauka milta hai.\nSawal yeh hai... tum usse pehchaan paoge?\n"});

    //.......................................................................................................................................
        cout << "iss duniya me kai tarah ka log hai...." << endl;
        waitForEnter();
        cout << "kuch ko chaiye paisa.. kuch ko chaiye izzat..." << endl;
        waitForEnter();
        cout << "Lekin dost , kuch hi aise sarphireh hai jinhe chaiye .... jinne ke liye ashaye." << endl;
        waitForEnter();

        cout << "Tum iss safar mai apna rasta khud chuno ge , toh asha hai dost ki ye safar tumhare liye yaad gar rahega." << endl;
        waitForEnter();
      
        
        cout << "**23 saal bad**\n";
        waitForEnter();
        cout << "Ek bar ke andar ek nashe me dhund aadmi betha hua tha , uski shakal utri hui thi aur mano ki uski akho se sari khushi asoo ban ke beh chuki thi.\n";waitForEnter();
        cout << "**Woh aadmi khada hota hai aur uthe uski daru ki bottle me khud ka chehra dekh raha hota hai... phir achanak se...\n";waitForEnter();
        cout << "BAMMMMMM!!!!!!-!!!-\n" << "**uske sar me zor se ek maar padti hai , woh jor se chilata hai aur apne chehra ko pakad ke niche gir jata hai.\n**";waitForEnter();
        cout << "oye ladke!! , abhi tak tune hamare paise wapas nahi kiya hai ,aj pure ke pure 4 mahine ho chuke hai. ab samajh aya ki mera baap mujhe kyu tum jaise logo ko paisa dene se mana karta tha!!!\n" << "**phir woh anjan ladka hame ek laat marta hai aur hamare uppar ek muda hua kagaz ka tukda phek ke jata hai\n**";waitForEnter();
        cout << "**ham jaise taise uthte hai aur uss mude hue kagaz ke tukde ko kholte hai , ussko dekhne ke bad mano jaise ki hamare joh khushi phele beh gayi thi woh kudke wapas agayi ho\n**";waitForEnter();
        //displays ascii art of the tomb
        cout << "ahahahahha , ye hui na baat! akhir kar ab mai is nark se bahar nikall paunga!!!\n" ;
    
            line();
            cout << Bart.getName() << ": Oye ladke!!! , Marne jaane se pehele apna udhar chuka ke ja!!!!\n";waitForEnter();
            cout << hero.getName() << ": UHH.... kyo na tum paise ki jagah mera autograph lelo? agar me famous hogaya toh ye autograph bohot mehenga jayega!!\n";waitForEnter();
            cout << Bart.getName() << ": Accha? toh sabit karo ki tumhare autograph ki kimat itni ho bhi sakti hai!!!!!!\n";waitForEnter();
            cout << Bart.getName() << ": Stone.... Paper... Scissors.....!!!!!\n";waitForEnter();
            Bart.GetAction();
             
           while (Bart.isAlive() && hero.isAlive())
{
    line();

    // Show HP cleanly
    cout << "Your HP : " << hero.getHP()
         << "    |||    "
         << "Bartender HP : " << Bart.getHP()
        << "\n"<< "Turn: " << turn << endl;
          

    line();

    // Bartender dialogue
    cout << Bart.getName() << ": ";
    Bart.speak();

    line();

    // Actions
    Bart.talkAction();
    hero.talkAction();

    int result = whoWins(hero.GetAction(), Bart.GetAction());

    line();

    if(result == 0)
    {
        cout << "Result: Draw. Try again.\n";
    }
    else if(result == 1)
    {
        cout << hero.getName() << " wins the round.\n";

        int dmg = calculateDamage(hero.getAttack(), Bart.getDefense());

        cout << "You deal " << dmg << " damage.\n";

        Bart.takeDamage(dmg);
    }
    else if(result == -1)
    {
        cout << Bart.getName() << " wins the round.\n";

        int dmg = calculateDamage(Bart.getAttack(), hero.getDefense());

        cout << "You take " << dmg << " damage.\n";

        hero.takeDamage(dmg);
    }

    line();
    
    turn ++;
}





        
        cout << "4 MAHINE BAAD\n";waitForEnter();
        cout << "MUJHE YAKIN NAHI HO RAHA , RAMSEYS KA MAKBARA!!!! YE KOI KALPANA NAHI ,BALKI EK HAKIKAT HAI!!!!!!!\n";waitForEnter();
        cout << "--------------------------------------------------------------------------------\n";
        cout << hero.getName() << " tumhara safar ab shuru hota hai!!!  THE GAME STARTS!!!\n";waitForEnter();
        cout << "--------------------------------------------------------------------------------\n";
       
        return 0;
            }
