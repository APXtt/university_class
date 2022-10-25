#include "main.h"

int main(void) {
	system("mode con: cols=80 lines=20");
	int year = 0;

	while (1) {
		printf("년도를 입력하시오. : ");
		scanf_s("%d", &year, sizeof(year));

		if (year == -1) {
			gotoxy(40, 0);
			printf("프로그램을 종료합니다.\n");
			break;
		}

		// 조건1: 400으로 나눠떨어지면 윤년
		// 조건2: 4로 나눠떨어지면서 100으로 나눠떨어지지 않는 것
		gotoxy(40, 0);
		calc(year) ? printf("%d는 윤년입니다.\n", year) : printf("%d는 윤년이 아닙니다.\n", year);

		system("pause");
		system("cls");
	}


	return 0;
}