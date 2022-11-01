#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void osum(int n) {
	int i = 1, sum = 0, line = 1;

	while (i < n) {
		sum += i;
		gotoxy(1, line);
		printf("i=%d일 때 sum=%d\n", i, sum);
		line++;
		i += 2;
	}
}

void esum(int n) {
	int i = 1, sum = 0, line = 1;

	while (i < n) {
		sum += i;
		gotoxy(40, line);
		printf("i=%d일 때 sum=%d\n", i, sum);
		i += 2;
		line++;
	}
}

int main(void) {
	system("mode con: cols=80 lines=20");

	int n = 0;

	while (1) {
		gotoxy(25, 0);
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &n, sizeof(n));

		if (n == -1) {
			break;
		}

		if (n % 2 == 1) {
			osum(n);
		}
		else {
			esum(n);
		}
		system("pause");
		system("cls");
	}
	return 0;
}