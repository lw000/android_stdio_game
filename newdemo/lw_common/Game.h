//
// Created by 李伟 on 2018/8/22.
//

#ifndef PROJ_ANDROID_GAME_H
#define PROJ_ANDROID_GAME_H

#include <string.h>

struct GameStatus {
    int status;
    int deskno;
    int number;
    char msg[512];

public:
    GameStatus() {
        this->status = 0;
        this->deskno = 0;
        this->number = 0;
        memset(this->msg, 0x00, sizeof(this->msg));
    }
};

class Game {
private:
    GameStatus gameStatus;

public:
    Game();
    virtual ~Game();

public:
    int start();
    int stop();

    int enter(int seatno);
    int exit(int seatno);

    int onGameStatus(const GameStatus* pgstatus);
    int onGameMessage(char* buf, int size);
};

#endif //PROJ_ANDROID_GAME_H
