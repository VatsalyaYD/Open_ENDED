#pragma once

#include "cocos2d.h"
using namespace cocos2d;
USING_NS_CC;

#include "ui\CocosGUI.h"

using namespace ui;

class MainMenuScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(MainMenuScene);

	Sprite *MainMenu;
	Sprite *title;
	

private:
	void touchEvent(Ref *sender, Widget::TouchEventType type);
};
