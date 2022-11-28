void bit_calc(int n1, int n2) {
	printf("비트연산\n");
	printf("%d & %d : %d\n", n1, n2, n1 & n2);
	printf("%d | %d : %d\n", n1, n2, n1 | n2);
	printf("%d ^ %d : %d\n", n1, n2, n1 ^ n2);
	printf("~%d : %d\n", n1, ~n1);
	printf("~%d : %d\n", n2, ~n2);
	printf("%d >> 1 : %d\n", n1, n1 >> 1);
	printf("%d << 1 : %d\n", n1, n1 << 1);
	printf("%d >> 1 : %d\n", n2, n2 >> 1);
	printf("%d << 1 : %d\n", n2, n2 << 1);
}