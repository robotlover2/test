#include <stdio.h>
// ���� 2�� 
int main(void) {
	int a;
	int f1 = 0, f2 = 1, f3;
	printf("n �Է� : ");
	scanf_s("%d", &a);
	if (a == 1) {
		printf("%d ��° �Ǻ���ġ �� :%d \n ",a, f1);
	}
	else if (a == 2) {
		printf("%d��° �Ǻ���ġ �� : %d \n",a, f2);

	}
	else {
		for (int i = 2; i < a; i++) {

			// 3��° ���ķ��� �Ǻ���ġ ����
			f3 = f1 + f2;

			f1 = f2;
			f2 = f3;

		}printf("%d��° �Ǻ���ġ �� : %d \n",a, f3);

	}
}