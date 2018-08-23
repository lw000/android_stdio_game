//
// Created by 李伟 on 2018/8/22.
//

#include "Game.h"
#include <stdio.h>
#include <stdlib.h>

Game::Game() {
    printf("%s %d", __FILE__, __LINE__);
}

Game::~Game() {
    printf("%s %d", __FILE__, __LINE__);
}

int Game::start() {
    printf("%s %d", __FILE__, __LINE__);

    return 0;
}

int Game::stop() {
    printf("%s %d", __FILE__, __LINE__);

    return 0;
}

int Game::enter(int seatno) {

    return 0;
}

int Game::exit(int seatno) {

    return 0;
}

int Game::onGameStatus(const GameStatus *pgstatus) {

    return 0;
}

int Game::onGameMessage(char *buf, int size) {

    return 0;
}