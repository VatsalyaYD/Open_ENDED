#pragma once

#include "cocos2d.h"

class SplashScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(SplashScene);

	cocos2d::Sprite *background;

private:
	void SwitchToMainMenu(float dt);
};
