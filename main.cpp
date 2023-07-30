#include <iostream>

#include "rlutil.h"

#include <cstdlib>

#include <stdlib.h>

#include <time.h>

#include "ABSTRACCION.h"

using namespace std;

int main() {

//Main Variables

    int repeat = 1, highscore = 0;

    //Game Loop
    while (repeat = 1) {

        //Variable loop declarations
        int pick = 0, tam = 5, gamemode, puntaje = 0, winflag = 0, winflag2 = 0, failflag = 0, runpr = 1, bestscore = 0, score = 0, totalscore = 0, totalscore2 = 0, round = 1, plays = 1, pc = 0;
        int rscores[tam] = {0}, contador[tam] = {0};
        bool play = false;
        string player1, player2, msg;

        //Menu and Mode selection
        gamemode = mainmenu(pick, highscore, play);

        //Quit implementation
        if (gamemode == 4) {
            abort();
        }

        //Single-player loop
        if (gamemode == 1) {

            rlutil::setColor(rlutil::WHITE);
            player1 = nameinputP1(gamemode);
            rlutil::cls();

            while (winflag == 0) {

                int i = 1;
                failflag = 0;

                //Round Loop

                while (i < 4 && winflag == 0 && failflag == 0) {
                    rlutil::setColor(rlutil::WHITE);

                    tirardados(rscores, tam);

                    convert(rscores, contador);

                    int accum = calcularPuntaje(msg, rscores, puntaje, contador, winflag, failflag, pc);

                    score += accum;

                    roundlayout1p(player1, msg, round, totalscore, score, plays, rscores);

                    plays++;

                    i++;

                    rlutil::anykey();
                }

                //Checks

                totalscore += score;
                score = 0;
                plays = 1;
                round++;
                pc++;
                midscreen1P(player1, round, totalscore);

                //Win condition (highend score)

                if (totalscore > 500) {
                    winflag = 1;
                }

            }

            //Endscreen and highscore calculation

            if (winflag == 1) {
                endscreenP1(round, totalscore, player1);
                if (highscore == 0) {
                    highscore = totalscore;
                } else if (totalscore > highscore) {
                    highscore = totalscore;
                }
            }

        }

        //Multi-player loop

        if (gamemode == 2) {
            rlutil::setColor(rlutil::WHITE);
            nameinputP2(gamemode, player1, player2);
            rlutil::cls();

            while (winflag == 0 && winflag2 == 0) {
                int i = 1;
                failflag = 0;

                //Round Loop P1

                while (i < 4 && failflag == 0) {
                    rlutil::setColor(rlutil::WHITE);

                    tirardados(rscores, tam);

                    convert(rscores, contador);

                    int sacabollos = calcularPuntaje(msg, rscores, puntaje, contador, winflag, failflag, pc);

                    score += sacabollos;

                    roundlayout1p(player1, msg, round, totalscore, score, plays, rscores);

                    plays++;
                    i++;
                    rlutil::anykey();
                }

                //P1 Checks

                totalscore += score;
                score = 0;
                plays = 1;
                pc++;
                midscreen2P(player1, player2, round, totalscore, totalscore2, pc);
                i = 1;

                //Win condition upper-limit P1

                if (totalscore > 500) {
                    winflag = 1;
                }

                //Round Loop P2

                while (i < 4 && failflag == 0) {
                    rlutil::setColor(rlutil::WHITE);

                    tirardados(rscores, tam);

                    convert(rscores, contador);

                    int sacabollos = calcularPuntaje(msg, rscores, puntaje, contador, winflag, failflag, pc);

                    score += sacabollos;

                    roundlayout2p(player2, msg, round, totalscore2, score, plays, rscores);

                    plays++;
                    i++;
                    pc++;
                    rlutil::anykey();
                }

                //Checks P2

                totalscore2 += score;
                score = 0;
                plays = 1;
                round++;
                pc++;
                midscreen2P(player1, player2, round, totalscore, totalscore2, pc);

                //Win condition upper-limit P1

                if (totalscore2 > 500) {
                    winflag2 = 1;

                }

            }

            //Endscreen and highscore calculation

            if (winflag == 1 || winflag2 == 1) {
                endscreenTIE(round);
                if (totalscore > totalscore2) {
                    bestscore = totalscore;
                } else if (totalscore2 >= totalscore) {
                    bestscore = totalscore2;
                }
                if (highscore == 0 || bestscore > highscore) {
                    highscore = bestscore;
                }

            } else if (winflag == 1) {
                endscreenP1(round, totalscore, player1);
                if (highscore == 0) {
                    highscore = totalscore;
                } else if (totalscore > highscore) {
                    highscore = totalscore;
                }
            } else if (winflag == 2) {
                endscreenP2(round, totalscore2, player2);
                if (highscore == 0) {
                    highscore = totalscore2;
                } else if (totalscore2 > highscore) {
                    highscore = totalscore2;
                }
            }

        }
    }
    return 0;
}
