#include <DxLib.h>
#include <cassert>


//WinMain��
//------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR loCmdLine, int nCmdShow)
{
	SetWindowText("2016001_�΋��q��");
	SetGraphMode(680, 480, 16);			//640�~480�h�b�g655536�F���[�h�ɐݒ�
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)								//true:window false:�t���X�N���[��
	{
		//	TRASE("DxLib �̏��������s")
		return  -1;    //DX���C�u��������������
	}

	
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		
		SetDrawScreen(DX_SCREEN_BACK);		//�o�b�N�o�b�t�@�ɐݒ�
		ClsDrawScreen();					 //��ʏ���	
		

		//std::ostringstream pasthOss;
		//pathOss<<
		//pathOss<<std::setw(2) <<setf
		

		//assert(graphH[i] =)


		//_dbgAddDraw();
		ScreenFlip();


	}

	int main(); {

	//	std::ostringstream oss;

		//DrawFormatString();
		//char out[32];
		//wsprntf(out, sizeof(out), L"x = %d", "y= %d\n", (int)rcA.center.x, (int)rcA.center.y);
	//	OutputDebugStringA(rc.center.x, rcA.center.y)


		return 0;
	}



	DxLib_End();       //DX���C�u�A���̏I������

	return 0;			//���̃v���O�����̏I��

}






















