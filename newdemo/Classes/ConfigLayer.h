//
// Created by 李伟 on 2018/8/23.
//

#ifndef PROJ_ANDROID_CONFIGLAYER_H
#define PROJ_ANDROID_CONFIGLAYER_H

#include "../lw_common_ui/BaseLayer.h"

USING_NS_CC;

class ConfigLayer : public BaseLayer {
public:
    ConfigLayer();
    virtual ~ConfigLayer();

public:
    bool init() override;

public:
    void menuCloseCallback(Ref* sender);

public:
    static Scene* createScene();

    CREATE_FUNC(ConfigLayer)
};


#endif //PROJ_ANDROID_CONFIGLAYER_H
