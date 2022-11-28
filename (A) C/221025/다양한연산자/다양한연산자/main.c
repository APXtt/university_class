#include "main.h"

int main(void) {
	system("mode con: cols=80 lines=20");
	int choice = 0;
	int n1 = 0, n2 = 0;

	while (1) {
		printf("정수입력(1.논리연산, 2.비트연산, 3.종료) : ");
		scanf_s("%d", &choice, sizeof(choice));

		printf("정수 두개를 입력 : ");
		scanf_s("%d %d", &n1, &n2, sizeof(n1), sizeof(n2));
		
		if (choice == 3) {
			printf("종료합니다.");
			break;
		}
		else if (choice == 1) {
			logical_calc(n1, n2);
		}
		else if (choice == 2) {
			bit_calc(n1, n2);
		}
		else {
			printf("올바른 값을 입력하시오.\n");
		}


		system("pause");
		system("cls");
	}

	return 0;
}