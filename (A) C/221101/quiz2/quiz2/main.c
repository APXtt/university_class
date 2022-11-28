#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void) {
	system("mode con: cols=80 lines=20");
	int i = 0, n = 0, sum = 0;

	while (1) {
		gotoxy(20, 0);
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &i, sizeof(i));

		if (i == -1) {
			break;
		}

		while (n <= i){
			printf("%d", n);
			if (n / 12 == 0) {
				continue;
			}

			if (n % 3 == 0) {
				sum += n;
				printf("%d의 합: %d", n, sum);
			}
			else if (n % 4 == 0) {
				sum += n;
				printf("%d의 합: %d", n, sum);
			}

			printf("%d", n);
			n++;
		}

		system("pause");
		system("cls");

	}

	return 0;
}