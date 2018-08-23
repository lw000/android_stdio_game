//
// Created by 李伟 on 2018/8/22.
//

#include "Platform.h"
#include <stdio.h>
#include <stdlib.h>

Platform::Platform() {
    printf("%s %d", __FILE__, __LINE__);
}

Platform::~Platform() {
    printf("%s %d", __FILE__, __LINE__);
}

int Platform::start() {
    return 0;
}

int Platform::stop() {
    return 0;
}