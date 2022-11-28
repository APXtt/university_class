#include "main.h"

int main(void) {
	system("mode con: cols=80 lines=30");
	int user = 0, camp = 0;
	int win = 0, draw = 0, lose = 0;

	while (1) {
		gotoxy(0, 0);
		printf("################################################################################");
		gotoxy(0, 29);
		printf("################################################################################");

		gotoxy(25, 2);
		printf("[1.����, 2.����, 3.��, -1.����]\n");
		gotoxy(25, 3);
		printf("[Input] : ");
		scanf_s("%d", &user, sizeof(user));
		
		if (user == -1) {
			gameOver(win, draw, lose);
			break;
		}
		camp = Compinfo();
		Userinfo(user);

		system("pause");
		system("cls");
	}
	
	return 0;
}