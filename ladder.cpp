#include <iostream>
#include "rlutil.h"
using namespace std;

int main() {
    int highscore = 0;
    cout << "    __           _     _                " <<endl;
    cout << "   / /  __ _  __| | __| | ___ _ __ ___  " <<endl;
    cout << "  / /  / _` |/ _` |/ _` |/ _ ' '__/ __| " <<endl;
    cout << " / /__| (_| | (_| | (_| |  __/ |  '__ ' " <<endl;
    cout << " |____/'__,_|'__,_|'__,_|'___|_|  |___/ " <<endl;
    cout << "                                        " <<endl;
    cout << "       Press any key to continue!       " <<endl;
    rlutil::anykey();
    rlutil::cls();
    cout << " ______________________________ " <<endl;
    cout << "|                              |" <<endl;
    cout << "|       1- SINGLEPLAYER        |" <<endl;
    cout << "|        2- MULTIPLAYER        |" <<endl;
    cout << "|          3- RULES            |" <<endl;
    cout << "|______________________________|" <<endl;
    cout << "                                " <<endl;
    cout << "          HIGHSCORE: " << highscore <<endl;

  return 0;
}