#include <stdio.h>
// 과제 3번 
int main(void) {
	int year;
	printf("년도를 입력하세요 : ");
	scanf("%d", &year);
	if (year % 4 ==0) {
		if (year % 100 != 0 || year % 400 == 0) {
			printf("윤년");
		}
		else
			printf("윤년이 아닙니다.");
	}
}