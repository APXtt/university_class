#include "main.h"

int main(void) {
	system("mode con: cols=80 lines=20");
	int choice = 0;
	int n1 = 0, n2 = 0;

	while (1) {
		printf("�����Է�(1.������, 2.��Ʈ����, 3.����) : ");
		scanf_s("%d", &choice, sizeof(choice));

		printf("���� �ΰ��� �Է� : ");
		scanf_s("%d %d", &n1, &n2, sizeof(n1), sizeof(n2));
		
		if (choice == 3) {
			printf("�����մϴ�.");
			break;
		}
		else if (choice == 1) {
			logical_calc(n1, n2);
		}
		else if (choice == 2) {
			bit_calc(n1, n2);
		}
		else {
			printf("�ùٸ� ���� �Է��Ͻÿ�.\n");
		}


		system("pause");
		system("cls");
	}

	return 0;
}