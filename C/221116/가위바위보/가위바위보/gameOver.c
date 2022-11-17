#include <stdio.h> // printf()
#include <Windows.h> // gotoxy()

void gameOver(int win, int draw, int lose) {
	printf("win: %d\ndraw: %d\nlose: %d", win, draw, lose);
}