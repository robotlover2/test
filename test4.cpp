#include <stdio.h>

//과제 4번 
int main(void) {
	float num1, num2;
	char ch;
	printf("input:");
	scanf("%f %c %f", &num1, &ch, &num2);// 실수 2개에 연산자 1개를 먼저 받는다

	float mul = 1;
	if (ch == '^') {
		for (int i = 0; i < num2; i++) {
			mul = mul * num1;
		}printf("%.2f^%.2f=%.2f\n", num1, num2, mul);// 거듭제곱을 계산 하기 위해 for 문을 이용한다

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
				printf("0이 아닌 숫자로 입력해 주세요 \n");
		}// 거듭제곱이 아닌 나머지 연산자는 사칙연산으로 받는다

	}// switch문을 사용하여 경우에 따라 결과값이 다르게 나오도록 만들면 끝이다
}
