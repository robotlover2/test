#include <stdio.h>

//���� 4�� 
int main(void) {
	float num1, num2;
	char ch;
	printf("input:");
	scanf("%f %c %f", &num1, &ch, &num2);// �Ǽ� 2���� ������ 1���� ���� �޴´�

	float mul = 1;
	if (ch == '^') {
		for (int i = 0; i < num2; i++) {
			mul = mul * num1;
		}printf("%.2f^%.2f=%.2f\n", num1, num2, mul);// �ŵ������� ��� �ϱ� ���� for ���� �̿��Ѵ�

	}

	else {
		switch (ch) {
		case '+':
			printf("%.2f+%.2f=%.2f\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%.2f-%.2f=%.2f\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("%.2f*%.2f=%.2f\n", num1, num2, num1 * num2);
			break;

		case '/':
			if (num2 != 0) {
				printf("%.2f/%.2f=%.2f\n", num1, num2, num1 / num2);
			}
			else
				printf("0�� �ƴ� ���ڷ� �Է��� �ּ��� \n");
		}// �ŵ������� �ƴ� ������ �����ڴ� ��Ģ�������� �޴´�

	}// switch���� ����Ͽ� ��쿡 ���� ������� �ٸ��� �������� ����� ���̴�
}
