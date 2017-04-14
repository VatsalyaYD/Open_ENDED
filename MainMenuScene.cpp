#include "MainMenuScene.h"
#include "SimpleAudioEngine.h"
#include "Definitions.h"
#include "GameScene.h"


USING_NS_CC;

Scene* MainMenuScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MainMenuScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool MainMenuScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }

	//general reference positions in the splash screen
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();

	//main menu background
	MainMenu = Sprite::create(MAIN_MENU_BACKGROUND_FILEPATH);
	MainMenu->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
	MainMenu->setOpacity(175);
	this->addChild(MainMenu);

	/*
	//main menu title
	title = Sprite::create(MAIN_MENU_TITLE_FILEPATH);
	title->setPosition(Point(visibleSize.width / 2, (visibleSize.height / 5) * 4));
	this->addChild(title);
	*/

	//play button
	Button *playButton = Button::create(MAIN_MENU_PLAY_BUTTON, MAIN_MENU_PLAY_BUTTON_PRESSED);
	playButton->setPosition(Point(visibleSize.width / 2, visibleSize.height / 7) * 1);
	this->addChild(playButton);

	playButton->addTouchEventListener(CC_CALLBACK_2(MainMenuScene::touchEvent, this));
	playButton->setTag(TAG_MAIN_MENU_PLAY_BUTTON);
    
	//outer button sprite
	Sprite*playButtonOuter = Sprite::create(MAIN_MENU_PLAY_BUTTON_OUTER);
	playButtonOuter->setPosition(Point(visibleSize.width / 2, visibleSize.height / 7) * 1);
	this->addChild(playButtonOuter);

	//achivements button
	Button *achievementsButton = Button::create(QUIT_BUTTON, QUIT_PRESSED);
	achievementsButton->setPosition(Point((visibleSize.width - 20), 20));
	this->addChild(achievementsButton);

	achievementsButton->addTouchEventListener(CC_CALLBACK_2(MainMenuScene::touchEvent, this));
	achievementsButton->setTag(TAG_QUIT_BUTTON);

    return true;
}


void MainMenuScene::touchEvent(Ref *sender, Widget::TouchEventType type)
{
	Node *node = (Node *)sender;

	switch (type)
	{
		case Widget::TouchEventType::BEGAN:
			break;

		case Widget::TouchEventType::MOVED:
			break;

		case Widget::TouchEventType::ENDED:
			if (TAG_MAIN_MENU_PLAY_BUTTON == node->getTag())
			{
				Scene *scene = GameScene::createScene();

				TransitionFade *transition = TransitionFade::create(SCENE_TRANSITION_TIME, scene);

				Director::getInstance()->replaceScene(transition);

			}
			else if (TAG_QUIT_BUTTON == node->getTag())
			{
				Director::getInstance()->popScene();
			}
			break;

		case Widget::TouchEventType::CANCELED:
			break;
	}
}
