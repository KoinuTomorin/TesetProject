#include <DxLib.h>
#include <cassert>


//WinMain関
//------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR loCmdLine, int nCmdShow)
{
	SetWindowText("2016001_石橋智明");
	SetGraphMode(680, 480, 16);			//640×480ドット655536色モードに設定
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)								//true:window false:フルスクリーン
	{
		//	TRASE("DxLib の初期化失敗")
		return  -1;    //DXライブラリ初期化処理
	}

	
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		
		SetDrawScreen(DX_SCREEN_BACK);		//バックバッファに設定
		ClsDrawScreen();					 //画面消去	
		

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



	DxLib_End();       //DXライブアリの終了処理

	return 0;			//このプログラムの終了

}






















