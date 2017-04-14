#include "SplashScene.h"
#include "SimpleAudioEngine.h"
#include "MainMenuScene.h"
#include "Definitions.h"

USING_NS_CC;

Scene* SplashScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = SplashScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool SplashScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }

	//general reference positions in the splash screen
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Point origin = Director::getInstance()->getVisibleOrigin();

	background = Sprite::create(SPLASH_SCENE_BACKGROUND_FILEPATH);
	background->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
	this->addChild(background);

	scheduleOnce(schedule_selector(SplashScene::SwitchToMainMenu), SPLASH_SCENE_SHOW_TIME);
    
    return true;
}

void SplashScene::SwitchToMainMenu(float dt)
{
	Scene *scene = MainMenuScene::createScene();

	TransitionFade *transition = TransitionFade::create(SCENE_TRANSITION_TIME, scene);

	Director::getInstance()->replaceScene(transition);
}