#include <stdio.h>
// 과제 2번 
int main(void) {
	int a;
	int f1 = 0, f2 = 1, f3;
	printf("n 입력 : ");
	scanf_s("%d", &a);
	if (a == 1) {
		printf("%d 번째 피보나치 값 :%d \n ",a, f1);
	}
	else if (a == 2) {
		printf("%d번째 피보나치 값 : %d \n",a, f2);

	}
	else {
		for (int i = 2; i < a; i++) {

			// 3번째 이후로의 피보나치 수열
			f3 = f1 + f2;

			f1 = f2;
			f2 = f3;

		}printf("%d번째 피보나치 값 : %d \n",a, f3);

	}
}