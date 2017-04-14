#pragma once

#include "cocos2d.h"
#include "AI.h"

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(GameScene);

private:
	bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
	void onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event);
	void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
	void onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *event);

	void InitGridRects();
	void InitGridPieces();

	void CheckAndPlacePiece(cocos2d::Touch *touch);
	void CheckResult(int x, int y);
	void Check8PiecesForMatch(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int x8, int y8, int pieceToCheck);
	void EmptyThePiece(int x, int y);

	cocos2d::Sprite *gridSprite;
	cocos2d::Rect gridSpaces[3][3];
	cocos2d::Sprite *gridPieces[3][3];

	int gridArray[3][3];

	int turn;

	int gameState;

	cocos2d::Sprite *gameBg;

	AI *ai;

};
