#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <conio.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include "displayControl.h"
#include "AsciiArt.h"

// **** ���� ������ �����Ǿ� �ִ� �ҽ��ڵ�
// **** ���� ���� ���̺귯��



int quickDraw_player1()
{
	  
}


int gameEngine(int select)
{
	int roop = true;

	while (roop)
	{
		scr_clear();
		gameEngine_Frame(0, 0, 118, 38);
		scr_switch();
	}

	return 0;
}