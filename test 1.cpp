#include <stdio.h>
//과제 1번 
int main(void) {
	float num1, num2, num3, num4, num5;
	printf("1번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num1);

	printf("2번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num2);

	printf("3번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num3);

	printf("4번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num4);

	printf("5번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num5);
	printf("---- 결과 ----\n");
	// 실수 5개 받기 프로그램 
	float ave;//평균을 구하는 프로그램 
	float sum;
	sum = num1 + num2 + num3 + num4 + num5;
	ave = sum / 5;
	printf("평균은 %.6f 입니다 \n", ave);

	float max = num1;// 최대값을 구하는 프로그램 
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	if (num4 > max)
		max = num4;
	if (num5 > max)
		max = num5;

	printf("최대값은 %.6f 입니다 \n", max);


	float min= num1;// 최소값을 구하는 프로그램 
	if (min>num2)
		min = num2;

	if (min > num3)
		min = num3;

	if (min > num4)
		min = num4;

	if (min > num5)
		min = num5;
	
	
	printf("최소값은 %.6f 입니다 \n", min);
}









