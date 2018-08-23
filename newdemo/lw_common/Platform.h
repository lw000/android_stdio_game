//
// Created by 李伟 on 2018/8/22.
//

#ifndef PROJ_ANDROID_PLATFORM_H
#define PROJ_ANDROID_PLATFORM_H


class Platform {
public:
    Platform();
    virtual ~Platform();

public:
    int start();
    int stop();

};


#endif //PROJ_ANDROID_PLATFORM_H
