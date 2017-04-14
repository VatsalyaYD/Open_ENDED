#pragma once

#define SPLASH_SCENE_BACKGROUND_FILEPATH "res/Sprites/splash background.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "res/Sprites/splash background.png"
#define GAME_BACKGROUND_FILEPATH "res/Sprites/play scene.png"

#define SPLASH_SCENE_SHOW_TIME 2.0
#define SCENE_TRANSITION_TIME 0.2

#define MAIN_MENU_TITLE_FILEPATH "res/Images/Game Title.png"
#define MAIN_MENU_PLAY_BUTTON "res/Images/Play Button.png"
#define MAIN_MENU_PLAY_BUTTON_PRESSED "res/Images/Play Button.png"
#define SOUND_ON_BUTTON "res/Images/Sound On.png"
#define SOUND_ON_BUTTON_PRESSED "res/Images/Sound On.png"
#define SOUND_OFF_BUTTON "res/Images/Sound Off.png"
#define SOUND_OFF_BUTTON_PRESSED "res/Images/Sound Off.png"
#define QUIT_BUTTON "res/Sprites/CloseNormal.png"
#define QUIT_PRESSED "res/Sprites/CloseSelected.png"

#define MAIN_MENU_PLAY_BUTTON_OUTER "res/Images/Play Button Outer.png"

#define TAG_MAIN_MENU_PLAY_BUTTON 0
#define TAG_QUIT_BUTTON 1

#define GRID_FILEPATH "res/Sprites/grid pipes.png"

#define X_PIECE_FILEPATH "res/Sprites/zombie.png"
#define O_PIECE_FILEPATH "res/Sprites/bloodsplash.png"
#define X_WINNING_PIECE_FILEPATH "res/Sprites/zombie.png"
#define O_WINNING_PIECE_FILEPATH "res/Sprites/bloodsplash.png"

#define X_PIECE 8
#define O_PIECE 0
#define EMPTY_PIECE -1
#define PLAYER_PIECE X_PIECE
#define AI_PIECE O_PIECE

//gameStates
#define STATE_PLAYING 98
#define STATE_PAUSED 97
#define STATE_WON 96
#define STATE_LOSE 95
#define STATE_PLACING_PIECE 94
#define STATE_AI_PLAYING 93

#define PIECE_FADE_IN_TIME 0.5
#define PIECE_FADE_OUT_TIME 0.5