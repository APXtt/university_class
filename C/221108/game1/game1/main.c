#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void game1_run() {
	int target = 0;
	int info1 = 0;
	int score = 0;
	int input = 0;

	system("cls");
	printf("[SYSTEM] ���� �� �� ���ߴ� ������ �����մϴ�.\n");
	printf("\n[�Է�] ��ǥ ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &target, sizeof(target));
	printf("[����] ��ǥ �� : %d\n", target);

	printf("[�Է�] ������ �����Ͻðڽ��ϱ�? (1:YES, 2:NO) : ");
	scanf_s("%d", &info1, sizeof(info1));
	if (info1 == 1) {
		system("cls");
		printf("########### ���� ���� ###########\n");

		while (1) {
			printf("[�Է�] ���� �Է��Ͻÿ� : ");
			scanf_s("%d", &input);
			score++;
			
			if (target == input) {
				system("cls");
				printf("########### ���� Ŭ����!!! ###########\n");
				printf("[���] ���� ���� : %d\n", 101 - score * 2);
				break;
			}
			else if (target > input) {
				printf("[���] �� ũ��.\n");
			}
			else {
				printf("[���] �� �۴�.\n");
			}
		}
	}
	else {
		system("cls");
		printf("########## ���� ��� ##########\n");
	}
}

void game2_run() {
	int target[3] = { 0, 0, 0 };
	int info1 = 0;
	int input[3] = { 0, 0, 0 };
	int b = 0, s = 0;
	int score = 0;

	system("cls");
	printf("[SYSTEM] ���� �� �� ���ߴ� ������ �����մϴ�.\n");
	printf("\n[�Է�] ��ǥ ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &target[0], &target[1], &target[2]);
	printf("[����] ��ǥ �� : %d %d %d\n", target[0], target[1], target[2]);

	printf("[�Է�]������ �����Ͻðڽ��ϱ�? (1:YES, 2:NO) : ");
	scanf_s("%d", &info1, sizeof(info1));
	if (info1 == 1) {
		system("cls");
		printf("########## ���� ���� ##########\n");
		while (1) {
			printf("�Է� : ");
			scanf_s("%d %d %d", &input[0], &input[1], &input[2]);
			score++;

			for (int ii = 0; ii <= 2; ii++) {
				for (int i = 0; i <= 2; i++) {
					if (input[i] == target[ii]) {
						if (i == ii) {
							s++;
						}
						else {
							b++;
						}
					}
				}
			}
			printf("s : %d, b : %d\n", s, b);

			if (s == 3) {
				system("cls");
				printf("########### ���� Ŭ����!!! ###########\n");
				printf("���� ���� : %d\n", 101 - score);
				break;
			}

			s = 0;
			b = 0;
		}
	}
	else {
		system("cls");
		printf("########## ���� ��� ##########\n");
	}
}

int main(void) {
	int menu = 0;

	while (1) {
		printf("1. ���� �� �� ���ߴ� ����\n");
		printf("2. ���� �� �� ���ߴ� ����\n");
		printf("[�Է�] ������ �����Ͻÿ� : ");
		scanf_s("%d", &menu, sizeof(menu));

		if (menu == -1) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if (menu == 1) {
			game1_run();
		}
		else if (menu == 2) {
			game2_run();
		}

		system("pause");
		system("cls");
	}
	
	
	

	return 0;
}