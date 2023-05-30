#include <iostream>
#include "rlutil.h"
using namespace std;

int main() 
{
    int highscore = 0, pick = 0;
        cout << "    __           _     _                " <<endl;
        cout << "   / /  __ _  __| | __| | ___ _ __ ___  " <<endl;
        cout << "  / /  / _` |/ _` |/ _` |/ _ ' '__/ __| " <<endl;
        cout << " / /__| (_| | (_| | (_| |  __/ |  '__ ' " <<endl;
        cout << " |____/'__,_|'__,_|'__,_|'___|_|  |___/ " <<endl;
        cout << "                                        " <<endl;
        cout << "       Press any key to continue!       " <<endl;
        rlutil::anykey();
        rlutil::cls();

    while (pick  == 0 || pick == 3)
    {

        cout << " ______________________________ " <<endl;
        cout << "|                              |" <<endl;
        cout << "|       1- SINGLEPLAYER        |" <<endl;
        cout << "|        2- MULTIPLAYER        |" <<endl;
        cout << "|          3- RULES            |" <<endl;
        cout << "|______________________________|" <<endl;
        cout << "                                " <<endl;
        cout << "          HIGHSCORE: " << highscore <<endl;
        cout << "                                " <<endl;
        cout << "Choose an option: "; pick= 3; cin >> pick;

        switch (pick)
        {
        case 1:
            break;

        case 2:
            break;

        case 3: 
            rlutil:: cls();
            cout << " ______________________________ " <<endl;
            cout << "|                              |" <<endl;
            cout << "|             RULES:           |" <<endl;
            cout << "|                              |" <<endl;
            cout << "|  The game progresses in ro-  |" <<endl;
            cout << "|  unds, in which you throw 6  |" <<endl;
            cout << "|  dice, 3 times per  round.   |" <<endl;
            cout << "|                              |" <<endl;
            cout << "|  The goal of the game is to  |" <<endl;
            cout << "|  reach 500 points or to ro-  |" <<endl;
            cout << "|  ll a ladder (a 1, 2, 3, 4,  |" <<endl;
            cout << "|  5 and a 6 in one throw) in  |" <<endl;
            cout << "|  the lowest amount of roun-  |" <<endl;
            cout << "|  ds possible. You can play   |" <<endl;
            cout << "|  by yourself to set a high-  |" <<endl;
            cout << "|  score, or play against a    |" <<endl;
            cout << "|  friend in multiplayer mode. |" <<endl;
            cout << "|  The player to reach the     |" <<endl;
            cout << "|  goal first, is the winner.  |" <<endl;
            cout << "|______________________________|" <<endl;
            cout << "                                " <<endl;
            cout << "    Press any key to continue!  " <<endl;

            rlutil::anykey();
            break;

        default:
            break;
        }
    }
  return 0;
}