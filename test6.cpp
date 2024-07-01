#include <stdio.h>
//과제 6번 
int main(void) {
	int num;
	printf("값을 입력하세요. ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int k = i; k < (num - 1); k++)
		{
			printf(" ");
		}
		if (num >= 3) {
			for (int k = 0; k <= (i * 2)-1 ; k++) {
			
				
			}

		}
		else {
			for (int k = 0; k <= (i * 2); k++)
			{
				printf("*");
			}
		
		}
		printf("\n");

	}
}
