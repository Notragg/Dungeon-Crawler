#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <initializer_list>
#include "mobs.h"
#include "player.h"

//................................TREASURE OF SAHARA..................................................

int whoWins(int player, int enemy);
int calculateDamage(int atk, int def);

//.........................................................................................
int main() {

    bool start = true ;

    while (start){
         
        cout << "iss duniya me kai tarah ka log hai...." << endl;
        cout << "kuch ko chaiye paisa.. kuch ko chaiye izzat..." << endl;
        cout << "Lekin dost , kuch hi aise sarphireh hai jinhe chaiye .... jinne ke liye ashaye." << endl;

        cout << "Tum iss safar mai apna rasta khud chuno ge , toh asha hai dost ki ye safar tumhare liye yaad gar rahega." << endl;
        cout << "Kya mai tumhara naam jaan sakta hu?" << endl;
        string h;
        cin >> h ;
        Player hero(h, 100, 40, 20);
         

        cout << "**23 saal bad**\n";
        cout << "Ek bar ke andar ek nashe me dhund aadmi betha hua tha , uski shakal utri hui thi aur mano ki uski akho se sari khushi asoo ban ke beh chuki thi.\n";
        cout << "**Woh aadmi khada hota hai aur uthe uski daru ki bottle me khud ka chehra dekh raha hota hai... phir achanak se...\n";
        cout << "BAMMMMMM!!!!!!-!!!-\n" << "**uske sar me zor se ek maar padti hai , woh jor se chilata hai aur apne chehra ko pakad ke niche gir jata hai.\n**";
        cout << "oye ladke!! , abhi tak tune hamare paise wapas nahi kiya hai ,aj pure ke pure 4 mahine ho chuke hai. ab samajh aya ki mera baap mujhe kyu tum jaise logo ko paisa dene se mana karta tha!!!\n" << "**phir woh anjan ladka hame ek laat marta hai aur hamare uppar ek muda hua kagaz ka tukda phek ke jata hai\n**";
        cout << "**ham jaise taise uthte hai aur uss mude hue kagaz ke tukde ko kholte hai , ussko dekhne ke bad mano jaise ki hamare joh khushi phele beh gayi thi woh kudke wapas agayi ho\n**";
        //displays ascii art of the tomb
        cout << "ahahahahha , ye hui na baat! akhir kar ab mai is nark se bahar nikall paunga!!!\n" << "**ham jaise taise nashe me madhosh ho kar bartender ke muh pe paise phek ke bahar bhag jaate hai\n**";
        cout << "4 MAHINE BAAD\n";
        cout << "MUJHE YAKIN NAHI HO RAHA , RAMSEYS KA MAKBARA!!!! YE KOI KALPANA NAHI ,BALKI EK HAKIKAT HAI!!!!!!!\n";
        cout << "--------------------------------------------------------------------------------\n";
        cout << hero.getName() << " tumhara safar ab shuru hota hai!!!  THE GAME STARTS!!!\n";
        cout << "--------------------------------------------------------------------------------\n";






    }



//...........................INTRODUCTION...................................................................
    cout << ""; // 


    return 0;
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
