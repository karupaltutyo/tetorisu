#include "GameMainScene.h"
#include "DxLib.h"
#include "Block.h"
#include "SceneManager.h"

/*****************************
*マクロ定義
*****************************/

/***************************
*型定義
***************************/

/***************************
*グローバル変数宣言
***************************/
int BackGround_image;         //背景画像イメージ
int BackGround_soud;          //BGM
int GameOver_sound;                //ゲームオーバーSE
int Score;                         //スコア

/***************************
*プロトタイプ宣言
***************************/

/***************************
*ゲームメイン画面：初期化処理
* 引数：なし
* 戻り値：エラー情報
***************************/
int GameMainScene_Initislize(void)
{
	int ret = 0;

	ret = Block_Initialize();
	BackGround_image = LoadGraph("images/stage.png");
	BackGround_soound = LoadSoundMem("sounds/BGM017.ogg");
	GameOver_sound = LoadSoundMem("sounds/GameOver.mp3");

	//エラーチェック
	if (BackGround_image == -1)
	{
		ret = -1;
	}
	if (BackGround_sound == -1)
	{
		ret = -1;
	}
	return ret;
}

/****************************
*ゲームメイン画面：更新処理
* 引数：なし
* 戻り値：なし
****************************/
void GameMainScene_Update(void)
{
	//BGMの再生
	PlaySoundMem(BackGround_sound, DX_PLAYTYPE_LOOP, FALSE);

	//ブロック機能の更新
	playsoundmem(ackGround_sound, DX_PLAYTYPE_LOOP, FALSE);

}