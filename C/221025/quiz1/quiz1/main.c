#include "main.h"

int main(void) {
	system("mode con: cols=80 lines=20");
	int year = 0;

	while (1) {
		printf("�⵵�� �Է��Ͻÿ�. : ");
		scanf_s("%d", &year, sizeof(year));

		if (year == -1) {
			gotoxy(40, 0);
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		// ����1: 400���� ������������ ����
		// ����2: 4�� �����������鼭 100���� ������������ �ʴ� ��
		gotoxy(40, 0);
		calc(year) ? printf("%d�� �����Դϴ�.\n", year) : printf("%d�� ������ �ƴմϴ�.\n", year);

		system("pause");
		system("cls");
	}


	return 0;
}