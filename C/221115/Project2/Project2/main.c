#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void left_up_triangle(void) {
	int r = 0;
	char ch = 0;
	int count = 0;

	gotoxy(35, 0);
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &r, sizeof(r));

	for (int i = 0; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	gotoxy(35, 0);
	printf("알파벳를 입력하시오: ");
	getchar();
	scanf_s("%c", &ch, sizeof(ch));

	for (int i = 'A'; i <= ch; i++) {
		count++;
		gotoxy(50, count);
		for (int j = 'A'; j <= i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
}

void func2(void) {
	int r = 0;
	char ch = 0;
	int count = 3;

	gotoxy(35, 0);
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &r, sizeof(r));

	for (int i = 0; i <= r; i++) {
		for (int j1 = 1; j1 <= (r - i); j1++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	gotoxy(35, 0);
	printf("알파벳을 입력하시오: ");
	getchar();
	scanf_s("%c", &ch, sizeof(ch));

	for (int i = 'A'; i <= ch; i++) {
		for (int j1 = 1; j1 <= (ch - i); j1++) {
			gotoxy(40, count);
			printf(" ");
		}
		for (int j = 'A'; j <= i; j++) {
			gotoxy(40 + (ch - i) - ('A' - j), count);
			printf("%c", j);
		}
		count++;
		printf("\n");
	}
}

void func3(void) {
	char ch = 0;
	int count = 0;

	gotoxy(35, 0);
	printf("알파벳를 입력하시오: ");
	getchar();
	scanf_s("%c", &ch, sizeof(ch));

	for (int i = 'A'; i <= ch; i++) {
		count++;
		gotoxy(50, count);
		for (int j = ch; j >= i; j--) {
			printf("%c", j);
		}
		printf("\n");
	}
}

void func4(void) {
	int r = 0;

	gotoxy(35, 0);
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &r, sizeof(r));

	for (int i = 0; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%3d", j);
		}
		printf("\n");
	}

	for (int i = 0; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

void func5(void) {
	int r = 0;
	int n = 0;
	int count = 2;

	printf("메뉴를 선택하시오: ");
	scanf_s("%d", &r, sizeof(r));
	printf("정수를 선택하시오: ");
	scanf_s("%d", &n, sizeof(n));

	if (r == 1) {
		for (int i = 0; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%3d", j);
			}
			for (int j = 5; j >= i; j--) {
				printf("      ");
			}
			for (int j = i; j >= 1; j--) {
				printf("%3d", j);
			}
			printf("\n");
		}

		for (int i = 0; i <= n; i++) {
			for (int j = 1; j <= n-i; j++) {
				printf("%3d", j);
			}
			for (int j = 1; j <= i; j++) {
				printf("      ");
			}
			for (int j = i; j >= 1; j--) {
				printf("%3d", j);
			}
			printf("\n");
		}
	}
	else if (r == 2) {
		return 0;
	}
	else if (r == 3) {
		return 0;
	}
}


int main(void) {
	system("mode con: cols=80 lines=40");
	int num = 0;
	
	while (1) {
		gotoxy(35, 0);
		printf("정수: ");
		scanf_s("%d", &num, sizeof(num));

		if (num == -1) {
			break;
		}

		if (num == 1) {
			system("cls");
			left_up_triangle();
		}
		else if (num == 2) {
			system("cls");
			func2();
		}
		else if (num == 3) {
			system("cls");
			func3();
		}
		else if (num == 4) {
			system("cls");
			func4();
		}
		else if (num == 5) {
			system("cls");
			func5();
		}

		system("pause");
		system("cls");
	}

	return 0;
}