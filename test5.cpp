#include <stdio.h>
// ���� 5��
int main(void) {
	int num;
	printf("���� �Է��Ͻÿ�.");
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i) {

		for (int j = num - i; j < num; ++j) {
			printf("*");
		}

		for (int j = 0; j < num * 2 - (2 * i); ++j) {

			printf(" ");
		}
		for (int j = num - i; j < num; ++j) {
			printf("*");
		}

		printf("\n");//���� ����
	}
	for (int i = num - 1; i > 0; --i) {// �Ʒ����̹Ƿ� ���ٰ� ������ �ݴ뿩�� �� 3�� 2�� 1����
		for (int j = num - i; j < num; ++j) {
			printf("*"); // j�� ���� ������ ����
		}
		for (int j = 0; j < num * 2 - (2 * i); ++j) {
			printf(" ");
		}
		for (int j = num - i; j < num; ++j) {
			printf("*");
		}
		printf("\n");// �Ʒ��� ����
	}
}