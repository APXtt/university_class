#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void sum(int n) {
	int i = 0, s = 0;

	while (i <= n) {
		s = s + i;
		gotoxy(40, i + 1);
		printf("%d", s);
		i++;
	}
}

int main(void) {
	system("mode con: cols=80 lines=20");

	int num = 0;

	while (1) {
		printf("Á¤¼ö : ");
		scanf_s("%d", &num, sizeof(num));

		if (num == -1) {
			break;
		}

		sum(num);

		system("pause");
		system("cls");
	}

	return 0;
}