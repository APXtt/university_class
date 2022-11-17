#include <stdio.h> // printf()
#include <Windows.h> // gotoxy()

void Userinfo(int user) {
	gotoxy(15, 5);
	printf("[User]");

	gotoxy(15, 6);
	switch (user) {
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
}