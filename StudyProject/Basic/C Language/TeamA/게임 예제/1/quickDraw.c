#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <Windows.h>
#include "displayControl.h"
#include "AsciiArt.h"
#include "mainMenu.h"
#include "gameEngine.h"
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")



void main()
{
	// **** �ܼ� �⺻ ���� ****
	SetConsoleTitle(TEXT("Quick Draw"));
	system("mode con cols=120 lines=40");	
	// ���� 60(120/2) ���� 40 


	// **** ���� roop ****
	while (true)
	{
		int getSelect = 0;
		// ������ �Լ��κ��� �Է� �޴� ����

		PlaySound(TEXT("mainMenu.wav"), 0, SND_ASYNC);
		getSelect = mainMenu();

		switch (getSelect)
		{
		case PLAYER1:
			gameEngine(getSelect);
			break;
		case PLAYER2:
			gameEngine(getSelect);
			break;
		default:
			exit(0);
		}
	}
	return 0;
}