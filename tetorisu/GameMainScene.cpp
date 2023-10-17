#include "GameMainScene.h"
#include "DxLib.h"
#include "Block.h"
#include "SceneManager.h"

/*****************************
*�}�N����`
*****************************/

/***************************
*�^��`
***************************/

/***************************
*�O���[�o���ϐ��錾
***************************/
int BackGround_image;         //�w�i�摜�C���[�W
int BackGround_soud;          //BGM
int GameOver_sound;                //�Q�[���I�[�o�[SE
int Score;                         //�X�R�A

/***************************
*�v���g�^�C�v�錾
***************************/

/***************************
*�Q�[�����C����ʁF����������
* �����F�Ȃ�
* �߂�l�F�G���[���
***************************/
int GameMainScene_Initislize(void)
{
	int ret = 0;

	ret = Block_Initialize();
	BackGround_image = LoadGraph("images/stage.png");
	BackGround_soound = LoadSoundMem("sounds/BGM017.ogg");
	GameOver_sound = LoadSoundMem("sounds/GameOver.mp3");

	//�G���[�`�F�b�N
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
*�Q�[�����C����ʁF�X�V����
* �����F�Ȃ�
* �߂�l�F�Ȃ�
****************************/
void GameMainScene_Update(void)
{
	//BGM�̍Đ�
	PlaySoundMem(BackGround_sound, DX_PLAYTYPE_LOOP, FALSE);

	//�u���b�N�@�\�̍X�V
	playsoundmem(ackGround_sound, DX_PLAYTYPE_LOOP, FALSE);

}