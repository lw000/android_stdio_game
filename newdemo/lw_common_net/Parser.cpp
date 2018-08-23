//
// Created by 李伟 on 2018/8/22.
//

#include "Parser.h"
#include <string.h>

Packet::Packet() {
    this->buniss_id = 0;
    this->sys_id = 0;
    this->version = 0;
    this->buf = NULL;
    this->buflen = 0;
}

Packet::~Packet() {

}

Parser::Parser() {

}

Parser::~Parser() {

}

int Parser::encode(char *buf, int size) {

    return 0;
}

int Parser::decode(char *buf, int size) {

    return 0;
}