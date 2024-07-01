#include <stdio.h>
//과제 6번 
int main(void) {
	int num;
	printf("값을 입력하세요. ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < (num - i); k++)
		{
			printf(" ");
		}
		if (i>0 && i<num-1) {
			printf("*"); // 별표를 먼저 채우고 
			for (int k = 0; k < i * 2 - 1; k++) {
				printf(" "); // 중간 공백을 먼저 만들고 
			}
			printf("*");// 다시 별표로 채운다 

		}
		else {// 첫줄과 마지막줄은 원래 그대로 해야함 

			for (int k = 0; k <= (i * 2); k++)
			{
				printf("*");
			}
		
		}
		printf("\n");

	}
}
