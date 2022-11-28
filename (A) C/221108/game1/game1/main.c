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
	printf("[SYSTEM] 숫자 한 개 맞추는 게임을 실행합니다.\n");
	printf("\n[입력] 목표 값을 입력하시오 : ");
	scanf_s("%d", &target, sizeof(target));
	printf("[정보] 목표 값 : %d\n", target);

	printf("[입력] 게임을 시작하시겠습니까? (1:YES, 2:NO) : ");
	scanf_s("%d", &info1, sizeof(info1));
	if (info1 == 1) {
		system("cls");
		printf("########### 게임 시작 ###########\n");

		while (1) {
			printf("[입력] 값을 입력하시오 : ");
			scanf_s("%d", &input);
			score++;
			
			if (target == input) {
				system("cls");
				printf("########### 게임 클리어!!! ###########\n");
				printf("[출력] 게임 점수 : %d\n", 101 - score * 2);
				break;
			}
			else if (target > input) {
				printf("[출력] 더 크다.\n");
			}
			else {
				printf("[출력] 더 작다.\n");
			}
		}
	}
	else {
		system("cls");
		printf("########## 게임 취소 ##########\n");
	}
}

void game2_run() {
	int target[3] = { 0, 0, 0 };
	int info1 = 0;
	int input[3] = { 0, 0, 0 };
	int b = 0, s = 0;
	int score = 0;

	system("cls");
	printf("[SYSTEM] 숫자 세 개 맞추는 게임을 실행합니다.\n");
	printf("\n[입력] 목표 값을 입력하시오 : ");
	scanf_s("%d %d %d", &target[0], &target[1], &target[2]);
	printf("[정보] 목표 값 : %d %d %d\n", target[0], target[1], target[2]);

	printf("[입력]게임을 시작하시겠습니까? (1:YES, 2:NO) : ");
	scanf_s("%d", &info1, sizeof(info1));
	if (info1 == 1) {
		system("cls");
		printf("########## 게임 시작 ##########\n");
		while (1) {
			printf("입력 : ");
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
				printf("########### 게임 클리어!!! ###########\n");
				printf("게임 점수 : %d\n", 101 - score);
				break;
			}

			s = 0;
			b = 0;
		}
	}
	else {
		system("cls");
		printf("########## 게임 취소 ##########\n");
	}
}

int main(void) {
	int menu = 0;

	while (1) {
		printf("1. 숫자 한 개 맞추는 게임\n");
		printf("2. 숫자 세 개 맞추는 게임\n");
		printf("[입력] 게임을 선택하시오 : ");
		scanf_s("%d", &menu, sizeof(menu));

		if (menu == -1) {
			printf("프로그램을 종료합니다.\n");
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