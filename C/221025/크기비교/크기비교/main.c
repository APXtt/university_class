#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int max_calc(int x, int y, int z) {
	return (x > y) ? (x > z) ? x : z: (y > z) ? y : z;
}
int min_calc(int x, int y, int z) {
	return 	(x < y)
		? (x < z) ? x : z
		: (y < z) ? y : z;
}
int mid_calc(int x, int y, int z) {
	return 	(x > y)
		? (x > z)
			? (y > z) ? z : y
			: x
		: (y > z)
			? (z > x) ? x : z
			: y;

}

int main(void) {
	system("mode con: cols=80 lines=20");
	int x = 0, y = 0, z = 0;

	while (1) {
		printf("첫 번째 정수를 입력하시오. ");
		scanf_s("%d", &x, sizeof(x));
		if (x == -1) {
			break;
		}
		printf("두 번째 정수를 입력하시오. ");
		scanf_s("%d", &y, sizeof(y));
		printf("세 번째 정수를 입력하시오. ");
		scanf_s("%d", &z, sizeof(z));

		printf("최대값 : %d\n", max_calc(x, y, z));
		printf("최소값 : %d\n", min_calc(x, y, z));
		printf("중간값 : %d\n", mid_calc(x, y, z));

		system("pause");
		system("cls");
	}



	return 0;
}