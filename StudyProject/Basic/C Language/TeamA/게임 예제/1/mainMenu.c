#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <conio.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include "displayControl.h"
#include "AsciiArt.h"

// **** ���θ޴��� �����ϴ� �Լ� ���̺귯��

// *** Ű���� ���� ���

#define ESC 0x1b
#define SPECIAL1 0xe0 // Ư��Ű�� 0xe0 + key ������ �����ȴ�.
#define SPECIAL2 0x00 // keypad ��� 0x00 + key �� �����ȴ�.
#define UP  0x48 // Up key�� 0xe0 + 0x48 �ΰ��� ���� ���´�.
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d
#define UP2		'w'
#define DOWN2	's'
#define LEFT2	'a'
#define RIGHT2	'd'
#define F1	0x3b//���͸� ����Ͽ� ���
#define F2	0x3c
#define BLANK ' '

// ������ ������ ����
typedef enum _menu_choice {
	PLAYER1 = 1, PLAYER2, EXIT
}MENU_NUM;


// **** ���θ޴� ****

int mainMenu()
{
	int select = 1;
	// ������ ���� ������ ����â�� ��Ÿ����.
	// <1. �����ϱ�, 2. 2�� �÷��� 3. ���� ����>
	int roop = true;
	scr_init(); 
	
	while (roop)
	{
		
		scr_clear();

		mainMenu_Version();
		mainMenu_Title(13,6);
		mainMenu_Select(19, 19, 30, 4, 1, select);
		mainMenu_Select(19, 24, 32, 4, 2, select);
		mainMenu_Select(19, 29, 32, 4, 3, select);
		mainMenu_img_cowboy(62, 18);

		scr_switch();
		 
		unsigned char keyboardInput;
		keyboardInput = _getch();

		// ENTER, SPACE BAR, ESC�� ������ ��� �ش� �޴��� �����ϰ� �ȴ�.
		if (keyboardInput == 'r' || keyboardInput == BLANK || keyboardInput == ESC)
		{
			switch (select)
			{
			case PLAYER1:
			case PLAYER2:
				//������ Ż���ϰ� ������ �����Ѵ�.
				roop = false;
				break;
			case EXIT:
				// �ٷ� ���α׷��� �����Ѵ�.
				exit(0);
			default:
				break;
			}
		}
		else if (keyboardInput == SPECIAL1 || keyboardInput == SPECIAL2)
		{
			keyboardInput = _getch();

			switch (keyboardInput)
			{
			case UP:
				if (select > 1)
					select--;
				break;
			case DOWN:
				if (select < 3)
					select++;
				break;
			default:
				break;
			}	
		}
		
	}

	return select;
}