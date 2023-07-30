#ifndef ABSTRACCION_H_INCLUDED
#define ABSTRACCION_H_INCLUDED#include <iostream>

#include "rlutil.h"

#include <time.h>

#include <cstdlib>

using namespace std;

//----------------------------------------------------------------------------------ANIMATIONS---------------------------------------------------------------------------------------
void animatestart(void) {
    rlutil::cls();
    for (int i = 0; i <= 1800; i++) {
        rlutil::setBackgroundColor(rlutil::RED);
        cout << " ";
        rlutil::setBackgroundColor(rlutil::GREEN);
        cout << " ";
    }
    for (int i = 0; i <= 3600; i++) {
        rlutil::setBackgroundColor(rlutil::GREEN);
        cout << " ";
    }
    rlutil::cls();
}

void animatetrs(void) {
    rlutil::cls();
    for (int i = 0; i <= 14; i++) {
        for (int a = 0; a < 119; a++) {
            rlutil::setBackgroundColor(rlutil::RED);
            cout << " ";
        }
        cout << endl;
        rlutil::msleep(1);
        for (int B = 0; B < 119; B++) {
            rlutil::setBackgroundColor(rlutil::GREEN);
            cout << " ";
        }
        cout << endl;
        rlutil::msleep(1);
    }

    rlutil::cls();
}

//-----------------------------------------------------------------------------MENU AND INTERACTION----------------------------------------------------------------------------------

int mainmenu(int pick, int highscore, bool play) {
    animatestart();
    rlutil::locate(42, 10);
    cout << "    __           _     _                " << endl;
    rlutil::locate(42, 11);
    cout << "   / /  __ _  __| | __| | ___ _ __ ___  " << endl;
    rlutil::locate(42, 12);
    cout << "  / /  / _` |/ _` |/ _` |/ _ ' '__/ __| " << endl;
    rlutil::locate(42, 13);
    cout << " / /__| (_| | (_| | (_| |  __/ |  '__ ' " << endl;
    rlutil::locate(42, 14);
    cout << " |____/'__,_|'__,_|'__,_|'___|_|  |___/ " << endl;
    rlutil::locate(42, 15);
    cout << "                                        " << endl;
    rlutil::locate(42, 16);
    cout << "      By Cartery, Gallino & Regis       " << endl;
    rlutil::setColor(rlutil::RED);
    rlutil::locate(42, 17);
    cout << "       Press any key to continue!       " << endl;

    rlutil::anykey();
    rlutil::cls();

    animatetrs();

    while (play == false) {
        rlutil::cls();
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(46, 10);
        cout << " ______________________________ " << endl;
        rlutil::locate(46, 11);
        cout << "|                              |" << endl;
        rlutil::locate(46, 12);
        cout << "|       ";
        rlutil::setColor(rlutil::RED);
        cout << "1- SINGLEPLAYER";
        rlutil::setColor(rlutil::WHITE);
        cout << "        |" << endl;
        rlutil::locate(46, 13);
        cout << "|        ";
        rlutil::setColor(rlutil::RED);
        cout << "2- MULTIPLAYER";
        rlutil::setColor(rlutil::WHITE);
        cout << "        |" << endl;
        rlutil::locate(46, 14);
        cout << "|          ";
        rlutil::setColor(rlutil::RED);
        cout << "3- RULES";
        rlutil::setColor(rlutil::WHITE);
        cout << "            |" << endl;
        rlutil::locate(46, 15);
        cout << "|          ";
        rlutil::setColor(rlutil::RED);
        cout << "4- QUIT";
        rlutil::setColor(rlutil::WHITE);
        cout << "             |" << endl;
        rlutil::locate(46, 16);
        cout << "|______________________________|" << endl;
        rlutil::locate(46, 17);
        cout << " " << endl;
        rlutil::locate(46, 18);
        cout << "       ";
        rlutil::setBackgroundColor(rlutil::RED);
        rlutil::setColor(rlutil::BLACK);
        cout << "HIGHSCORE: " << highscore;
        rlutil::setBackgroundColor(rlutil::GREEN);
        rlutil::setColor(rlutil::WHITE);
        cout << endl;
        rlutil::locate(46, 19);
        cout << " " << endl;
        rlutil::locate(46, 20);
        cout << "Choose an option: ";
        cin >> pick;

        switch (pick) {
        case 1:
            play = true;
            return 1;
            break;
        case 2:
            play = true;
            return 2;
            break;
        case 3:
            animatetrs();
            rlutil::locate(46, 5);
            cout << " ______________________________ " << endl;
            rlutil::locate(46, 6);
            cout << "|                              |" << endl;
            rlutil::locate(46, 7);
            cout << "|             RULES:           |" << endl;
            rlutil::locate(46, 8);
            cout << "|                              |" << endl;
            rlutil::locate(46, 9);
            cout << "|  The game progresses in ro-  |" << endl;
            rlutil::locate(46, 10);
            cout << "|  unds, in which you throw 6  |" << endl;
            rlutil::locate(46, 11);
            cout << "|  dice, 3 times per  round.   |" << endl;
            rlutil::locate(46, 12);
            cout << "|                              |" << endl;
            rlutil::locate(46, 13);
            cout << "|  The goal of the game is to  |" << endl;
            rlutil::locate(46, 14);
            cout << "|  reach 500 points or to ro-  |" << endl;
            rlutil::locate(46, 15);
            cout << "|  ll a ladder (a 1, 2, 3, 4,  |" << endl;
            rlutil::locate(46, 16);
            cout << "|  5 and a 6 in one throw) in  |" << endl;
            rlutil::locate(46, 17);
            cout << "|  the lowest amount of roun-  |" << endl;
            rlutil::locate(46, 18);
            cout << "|  ds possible. You can play   |" << endl;
            rlutil::locate(46, 19);
            cout << "|  by yourself to set a high-  |" << endl;
            rlutil::locate(46, 20);
            cout << "|  score, or play against a    |" << endl;
            rlutil::locate(46, 21);
            cout << "|  friend in multiplayer mode. |" << endl;
            rlutil::locate(46, 22);
            cout << "|  The player to reach the     |" << endl;
            rlutil::locate(46, 23);
            cout << "|  goal first, is the winner.  |" << endl;
            rlutil::locate(46, 24);
            cout << "|______________________________|" << endl;
            rlutil::locate(46, 25);
            cout << "                                " << endl;
            rlutil::locate(46, 26);
            cout << "    Press any key to continue!  " << endl;

            rlutil::anykey();
            break;
        case 4:
            return 4;
            break;
        default:

            rlutil::cls();
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(46, 10);
            cout << " ______________________________ " << endl;
            rlutil::locate(46, 11);
            cout << "|                              |" << endl;
            rlutil::locate(46, 12);
            cout << "|Invalid command, please retry!|" << endl;
            rlutil::locate(46, 13);
            cout << "|______________________________|" << endl;
            rlutil::locate(46, 14);
            cout << "                                " << endl;
            rlutil::locate(46, 15);
            cout << "    Press any key to continue!  " << endl;
            rlutil::anykey();
            rlutil::cls();
            break;

        }
    }
}

string nameinputP1(int gamemode) {
    string player1;
    rlutil::cls();
    animatestart();
    rlutil::locate(46, 10);
    cout << " ______________________________ " << endl;
    rlutil::locate(46, 11);
    cout << "|                              |" << endl;
    rlutil::locate(46, 12);
    cout << "|       Enter your name:       |" << endl;
    rlutil::locate(46, 13);
    cout << "|______________________________|" << endl;
    rlutil::locate(46, 14);
    cout << "                                " << endl;
    rlutil::locate(46, 15);
    cout << "           ";
    cin >> player1;
    return player1;
}

void nameinputP2(int gamemode, string & player1, string & player2) {

    rlutil::cls();
    animatestart();
    rlutil::locate(46, 10);
    cout << " ______________________________ " << endl;
    rlutil::locate(46, 11);
    cout << "|                              |" << endl;
    rlutil::locate(46, 12);
    cout << "|    Enter player 1's name:    |" << endl;
    rlutil::locate(46, 13);
    cout << "|______________________________|" << endl;
    rlutil::locate(46, 14);
    cout << "                                " << endl;
    rlutil::locate(46, 15);
    cout << "           ";
    cin >> player1;
    rlutil::cls();
    rlutil::locate(46, 10);
    cout << " ______________________________ " << endl;
    rlutil::locate(46, 11);
    cout << "|                              |" << endl;
    rlutil::locate(46, 12);
    cout << "|    Enter player 2's name:    |" << endl;
    rlutil::locate(46, 13);
    cout << "|______________________________|" << endl;
    rlutil::locate(46, 14);
    cout << "                                " << endl;
    rlutil::locate(46, 15);
    cout << "           ";
    cin >> player2;
    animatestart();
    cout << player1 << endl << player2 << endl;
}

//---------------------------------------------------------------------------- GRAPHICS -------------------------------------------------------------------------------------------



void printcuadrado(int posx, int posy) {
    rlutil::setColor(rlutil::BLACK);
    for (int despx = 0; despx < 7; despx++) {
        for (int despy = 0; despy < 3; despy++) {
            rlutil::locate(despx + posx, despy + posy);
            cout << (char) 219 << endl;
        }
    }
}

void printpuntos(int num, int posx, int posy) {
    rlutil::setColor(rlutil::RED);
    rlutil::setBackgroundColor(rlutil::BLACK);

    switch (num) {
    case 1:
        rlutil::locate(posx + 3, posy + 1);
        cout << (char) 254;
        break;
    case 2:
        rlutil::locate(posx + 5, posy);
        cout << (char) 220;

        rlutil::locate(posx + 1, posy + 2);
        cout << (char) 223;
        break;
    case 3:
        rlutil::locate(posx + 3, posy + 1);
        cout << (char) 254;

        rlutil::locate(posx + 5, posy + 1);
        cout << (char) 254;

        rlutil::locate(posx + 1, posy + 1);
        cout << (char) 254;
        break;
    case 4:
        rlutil::locate(posx + 1, posy);
        cout << (char) 220;

        rlutil::locate(posx + 5, posy);
        cout << (char) 220;

        rlutil::locate(posx + 1, posy + 2);
        cout << (char) 223;

        rlutil::locate(posx + 5, posy + 2);
        cout << (char) 223;
        break;
    case 5:
        rlutil::locate(posx + 1, posy);
        cout << (char) 220;

        rlutil::locate(posx + 5, posy);
        cout << (char) 220;

        rlutil::locate(posx + 3, posy + 1);
        cout << (char) 254;

        rlutil::locate(posx + 1, posy + 2);
        cout << (char) 223;

        rlutil::locate(posx + 5, posy + 2);
        cout << (char) 223;
        break;
    case 6:
        rlutil::locate(posx + 1, posy);
        cout << (char) 220;

        rlutil::locate(posx + 5, posy);
        cout << (char) 220;

        rlutil::locate(posx + 3, posy);
        cout << (char) 220;

        rlutil::locate(posx + 3, posy + 2);
        cout << (char) 223;

        rlutil::locate(posx + 1, posy + 2);
        cout << (char) 223;

        rlutil::locate(posx + 5, posy + 2);
        cout << (char) 223;
        break;
    }
}

void printshade(int posx, int posy) {
    rlutil::setColor(rlutil::DARKGREY);
    rlutil::setBackgroundColor(rlutil::GREEN);
    for (int despx = 0; despx < 7; despx++) {
        rlutil::locate(despx + posx, posy + 3);
        cout << (char) 223 << endl;
    }
}

void printdado(int num, int posx, int posy) {
    printcuadrado(posx, posy);
    printpuntos(num, posx, posy);
    printshade(posx, posy);
}

void roundlayout1p(string player1, string & msg, int round, int totalscore, int score, int plays, int * rscores) {
    rlutil::cls();
    cout << player1 << "'s turn | Round " << round << " | Score:" << totalscore << " |" << endl;
    cout << "_________________________________________________________________" << endl;
    cout << "Throw N. " << plays << endl;
    cout << "Current score: " << score << endl;
    cout << "_________________________________________________________________" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << msg;
    printdado(rscores[0], 3, 9);
    printdado(rscores[1], 13, 9);
    printdado(rscores[2], 23, 9);
    printdado(rscores[3], 33, 9);
    printdado(rscores[4], 43, 9);
    printdado(rscores[5], 53, 9);

}

void roundlayout2p(string player2, string & msg, int round, int totalscore2, int score, int plays, int * rscores) {
    rlutil::cls();
    cout << player2 << "'s turn | Round " << round << " | Score:" << totalscore2 << " |" << endl;
    cout << "_________________________________________________________________" << endl;
    cout << "Throw N. " << plays << endl;
    cout << "Current score: " << score << endl;
    cout << "_________________________________________________________________" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << msg;
    printdado(rscores[0], 3, 9);
    printdado(rscores[1], 13, 9);
    printdado(rscores[2], 23, 9);
    printdado(rscores[3], 33, 9);
    printdado(rscores[4], 43, 9);
    printdado(rscores[5], 53, 9);

}

void midscreen1P(string player1, int round, int totalscore) {
    rlutil::cls();
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(36, 5);
    cout << " ________________________________________ " << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 7);
    cout << "                ROUND N. " << round << endl;
    rlutil::locate(36, 8);
    cout << "            PLAYER NAME: " << player1 << endl;
    rlutil::locate(36, 9);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 10);
    cout << "            SCORE: " << totalscore << endl;
    rlutil::locate(36, 11);
    cout << "|________________________________________|";
    rlutil::locate(36, 15);
    cout << "         Press any key to continue!  " << endl;

    rlutil::anykey();
}

void midscreen2P(string player1, string player2, int round, int totalscore, int totalscore2, int pc) {
    rlutil::cls();
    string player;
    if (pc % 2 == 0) {
        player = player1;
    } else if (pc % 2 != 0) {
        player = player2;
    }
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(36, 5);
    cout << " ________________________________________ " << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 7);
    cout << "                ROUND N. " << round << endl;
    rlutil::locate(36, 8);
    cout << "              NEXT TURN: " << player << endl;
    rlutil::locate(36, 9);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 10);
    cout << "                " << player1 << " SCORE: " << totalscore << endl;
    rlutil::locate(36, 11);
    cout << "                " << player2 << " SCORE: " << totalscore2 << endl;
    rlutil::locate(36, 12);
    cout << "|________________________________________|";
    rlutil::locate(36, 15);
    cout << "         Press any key to continue!  " << endl;

    rlutil::anykey();
}

void endscreenP1(int round, int totalscore, string player1) {
    rlutil::cls();
    rlutil::locate(36, 5);
    cout << " ________________________________________ " << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 7);
    cout << "|                                        |" << endl;;
    rlutil::locate(36, 8);
    cout << "|               END OF MATCH             |" << endl;
    rlutil::locate(36, 9);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 10);
    cout << "                SCORE: " << totalscore << endl;
    rlutil::locate(36, 11);
    cout << "                  ROUNDS: " << round << endl;
    rlutil::locate(36, 12);
    cout << "                  " << player1 << " WINS" << endl;
    rlutil::locate(36, 13);
    cout << "|________________________________________|" << endl;;
    rlutil::locate(36, 16);
    cout << "         Press any key to continue!  " << endl;
    rlutil::anykey();

}

void endscreenP2(int round, int totalscore2, string player2) {
    rlutil::cls();
    rlutil::locate(36, 5);
    cout << " ________________________________________ " << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 7);
    cout << "|                                        |" << endl;;
    rlutil::locate(36, 8);
    cout << "|               END OF MATCH             |" << endl;
    rlutil::locate(36, 9);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 10);
    cout << "                SCORE: " << totalscore2 << endl;
    rlutil::locate(36, 11);
    cout << "                  ROUNDS: " << round << endl;
    rlutil::locate(36, 12);
    cout << "                  " << player2 << " WINS" << endl;
    rlutil::locate(36, 13);
    cout << "|________________________________________|" << endl;;
    rlutil::locate(36, 16);
    cout << "         Press any key to continue!  " << endl;
    rlutil::anykey();

}

void endscreenTIE(int round) {
    rlutil::cls();
    rlutil::locate(36, 5);
    cout << " ________________________________________ " << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 6);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 7);
    cout << "|                                        |" << endl;;
    rlutil::locate(36, 8);
    cout << "|               END OF MATCH             |" << endl;
    rlutil::locate(36, 9);
    cout << "|                                        |" << endl;
    rlutil::locate(36, 10);
    cout << "|       TIE! No winners or losers.       | " << endl;
    rlutil::locate(36, 11);
    cout << "                  ROUNDS: " << round << endl;
    rlutil::locate(36, 13);
    cout << "|________________________________________|" << endl;;
    rlutil::locate(36, 16);
    cout << "         Press any key to continue!  " << endl;
    rlutil::anykey();

}

//------------------------------------------------------------------------------GAME LOGIC----------------------------

void tirardados(int * rscores, int tam) {
    srand(time(NULL));

    for (int i = 0; i <= tam; i++) {
        rscores[i] = rand() % 6 + 1;
    }
}

void convert(int * rscores, int * contador) {
    for (int v = 0; v < 6; v++) {
        contador[v] = 0;
    }

    for (int i = 0; i < 6; i++) {
        contador[rscores[i] - 1] += 1;
    }

}

int calcularPuntaje (string & msg, int * rscores, int puntaje, int * contador, int & winflag, int & failflag, int pc) {

    //Verificar si hay escalera

    bool escalera = 0, flag = 0;

    int contaescalera = 0;

    for (int i = 0; i < 6; i++) {
        if (contador[i] == 1) {
            contaescalera++;
        }
    }

    if (contaescalera == 6) {
        escalera = 1;
    }

    if (escalera) {
        msg = "LADDER! You win the game.";
        flag = 1;
        if (pc % 2 == 0) {
            winflag = 1;
        } else if (pc % 2 != 0) {
            winflag = 2;
        }
    }

    // Verificar si hay seis 6

    if (contador[5] == 6) {
        msg = "FULL 6! You lose all this round's points.";
        puntaje = 0;
        flag = 1;
        failflag = 1;
        //todo: end round
    }

    // Verificar si hay 6 n�meros iguales

    for (int i = 0; i < 5; i++) {
        if (contador[i] == 6) {
            msg = "FULL NUMBERS. You get this dice * 50 points.";
            puntaje = puntaje + (i * 50);
            flag = 1;
        }
    }

    // Verificar si hay 3 n�meros o m�s con el mismo valor

    for (int i = 0; i < 6; i++) {
        if (contador[i] >= 3 && contador[i] <= 5) {
            puntaje += ((i + 1) * 10);
            flag = 1;
            msg = "3 OR MORE MATCHING. You get this dice *10 points";
        }
    }

    // Si no hay ninguna condici�n especial, sumar todos los n�meros (esta al reves y no hay una condicion)
    if (flag == 0) {
        for (int i = 0; i < 6; i++) {
            puntaje += rscores[i];
        }
        msg = "Keep rolling!";
    }

    return puntaje;

}

#endif // ABSTRACCION_H_INCLUDED
