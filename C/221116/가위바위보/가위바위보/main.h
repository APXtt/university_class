#pragma once

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gameOver(int, int, int); // �Լ��� ����

void Userinfo(int);
int Compinfo(void);