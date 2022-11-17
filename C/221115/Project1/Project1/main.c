#include <stdio.h>
#include <WIndows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void func1(void) {
	int i = 0, j = 0;
	while (i < 3) {
		printf("i의 값: %d\n", i);
		while (j < 3) {
			printf("j의 값: %d\n", j);
			j++;
		}
		j = 0;
		i++;
	}
}

void func2(void) {
	for (int i = 0; i < 3; i++) {
		printf("i의 값: %d\n", i);
		for (int j = 0; j < 3; j++) {
			printf("j의 값: %d\n", j);
		}
	}
}

void func3(void) {

	for (int i = 2; i < 10; i++) {
		gotoxy(i*10, 0);
		printf("### %d단 ###\n", i);
		gotoxy(0, 0);
		for (int j = 2; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}

void func4(void) {
	int i = 2, j = 2;
	while (i < 10) {
		printf("### %d단 ###\n", i);
		while (j < 10) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		j = 0;
		i++;
	}
}

void func5(void) {
	int dan = 2, gob = 1;

	printf("2단              3단              4단              5단              6단              7단              8단              9단\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n");

	while (gob <= 9) {

		while (dan <= 9) {
			printf("%02d * %02d = %02d   ", dan, gob, dan*gob);

			dan++;
		}
		printf("\n");
		dan = 2;
		gob++;
	}
}

void func6(void) {
	printf("9단             8단             7단             6단             5단             4단             3단             2단\n");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	for (int gob = 9; gob >= 1; gob--) {
		for (int dan = 9; dan >= 2; dan--) {
			printf("%02d * %02d = %02d   ", dan, gob, dan * gob);
		}
		printf("\n");
	}
}

int main(void) {
	// system("mode con: cols=100 lines=30");
	
	int num = 0;

	while (1) {
		gotoxy(35, 0);
		printf("입력: ");
		scanf_s("%d", &num, sizeof(num));

		if (num == -1) {
			break;
		}

		if (num == 1) {
			system("cls");
			func1();
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

		else if (num == 6) {
			system("cls");
			func6();
		}

		system("pause");
		system("cls");
	}
	return 0;
}