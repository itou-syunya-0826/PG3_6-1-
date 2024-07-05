#include "StageScene.h"

void StageScene::Initialize()
{
}

void StageScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "StageScene");
}
