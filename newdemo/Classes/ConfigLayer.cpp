//
// Created by 李伟 on 2018/8/23.
//

#include "ConfigLayer.h"
#include "HelloWorldScene.h"

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

cocos2d::Scene* ConfigLayer::createScene() {
    auto scene = cocos2d::Scene::create();
    auto layer = ConfigLayer::create();
    scene->addChild(layer);
    return scene;
}

ConfigLayer::ConfigLayer() {

}

ConfigLayer::~ConfigLayer() {

}

bool ConfigLayer::init() {
    if (!cocos2d::Layer::init()) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto closeItem = MenuItemImage::create("back.png",
                                           "back.png",
                                           CC_CALLBACK_1(ConfigLayer::menuCloseCallback, this));
    if (closeItem == nullptr ||
            closeItem->getContentSize().width <= 0 ||
            closeItem->getContentSize().height <= 0)
    {
        problemLoading("'back.png' and 'back.png'");
    }
    else
    {
        float x = origin.x + closeItem->getContentSize().width/2;
        float y = origin.y + visibleSize.height - closeItem->getContentSize().height/2;
        closeItem->setPosition(Vec2(x,y));
    }

    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    auto sprite = Sprite::create("timg.jpeg");
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    sprite->setContentSize(Size(visibleSize.width, visibleSize.height));
    this->addChild(sprite);

    return true;
}

void ConfigLayer::menuCloseCallback(Ref *sender) {
    auto hello = HelloWorld::createScene();
    Director::getInstance()->replaceScene(TransitionFade::create(0.5f, hello));
}