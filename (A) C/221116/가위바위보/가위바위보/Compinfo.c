#include <stdlib.h> // rand()
#include <time.h> // time()
#include <Windows.h> // gotoxy()

int Compinfo(void) {
	srand(time(NULL)); // 매번 다른 시드값 생성
	int n = 0;

	n = (rand() % 3) + 1; // 1~3난수 생성

	gotoxy(50, 5);
	printf("[Computer]");
	gotoxy(50, 6);
	switch (n) {
	case 1:
		printf("가위\n");
		break;
	case 2:
		printf("바위\n");
		break;
	case 3:
		printf("보\n");
		break;
	}
	
	return n;
}