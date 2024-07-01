#include <stdio.h>
// 과제 5번
int main(void) {
	int num;
	printf("값을 입력하시오.");
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

		printf("\n");//윗줄 도형
	}
	for (int i = num - 1; i > 0; --i) {// 아랫줄이므로 윗줄과 순서가 반대여야 함 3개 2개 1개로
		for (int j = num - i; j < num; ++j) {
			printf("*"); // j의 값은 변함이 없다
		}
		for (int j = 0; j < num * 2 - (2 * i); ++j) {
			printf(" ");
		}
		for (int j = num - i; j < num; ++j) {
			printf("*");
		}
		printf("\n");// 아랫줄 도형
	}
}