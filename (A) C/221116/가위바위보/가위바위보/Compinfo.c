#include <stdlib.h> // rand()
#include <time.h> // time()
#include <Windows.h> // gotoxy()

int Compinfo(void) {
	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
	int n = 0;

	n = (rand() % 3) + 1; // 1~3���� ����

	gotoxy(50, 5);
	printf("[Computer]");
	gotoxy(50, 6);
	switch (n) {
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("��\n");
		break;
	}
	
	return n;
}