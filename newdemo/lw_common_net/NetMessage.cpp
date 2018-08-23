//
// Created by 李伟 on 2018/8/22.
//

#include "NetMessage.h"

#include <stdio.h>
#include <stdlib.h>

NetMessage::NetMessage() {
    printf("%s %d", __FILE__, __LINE__);
}

NetMessage::~NetMessage() {
    printf("%s %d", __FILE__, __LINE__);
}