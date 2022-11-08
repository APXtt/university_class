#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void sum1(int n) {
	system("cls");
	int e_sum = 0, o_sum = 0;
	int e_count = 0, o_count = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			e_sum += i;
			gotoxy(40, e_count);
			printf("짝수 %d의 합 %d\n", i, e_sum);
			e_count++;
		}
		else {
			o_sum += i;
			gotoxy(0, o_count);
			printf("홀수 %d의 합 %d\n", i, o_sum);
			o_count++;

		}
	}
}

void sum2(int n) {
	system("cls");
	for (int i = 1; i <= n;  i++) {
		int three_sum = 0, four_sum = 0;
		int three_count = 0, four_count = 0;
		
		if (i % 12 == 0) {
			continue;
		}
		if (i % 3 == 0) {
			three_sum += i;
			gotoxy(40, three_count);
			printf("3의 배수 %d의 합 %d\n", i, three_sum);
			three_count++;
		}
		if (i % 4 == 0) {
			four_sum += i;
			gotoxy(0, four_count);
			printf("4의 배수 %d의 합 %d\n", i, four_sum);
			four_count++;
		}
	}
}

int main(void) {
	system("mode con: cols=80 lines=20");

	int number = 0;
	int choice = 0;

	while (1) {
		gotoxy(20, 0);
		printf("정수를 입력하시오. ");
		scanf_s("%d", &number, sizeof(number));
		if (number == -1) {
			break;
		}
		else {
			do {
				gotoxy(20, 1);
				printf("1. 홀/짝수의 합 구하기\n");
				gotoxy(20, 2);
				printf("2. 3/4의 배수 합 구하기\n");
				gotoxy(20, 3);
				printf("메뉴를 선택하시오. ");
				scanf_s("%d", &choice, sizeof(choice));
			} while (choice < 1 || choice > 2);

			if (choice == 1) {
				sum1(number);
			}
			else if (choice == 2) {
				sum2(number);
			}
		}

		system("pause");
		system("cls");
	}

	return 0;
}