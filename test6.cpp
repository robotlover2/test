#include <stdio.h>
//���� 6�� 
int main(void) {
	int num;
	printf("���� �Է��ϼ���. ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < (num - i); k++)
		{
			printf(" ");
		}
		if (i>0 && i<num-1) {
			printf("*"); // ��ǥ�� ���� ä��� 
			for (int k = 0; k < i * 2 - 1; k++) {
				printf(" "); // �߰� ������ ���� ����� 
			}
			printf("*");// �ٽ� ��ǥ�� ä��� 

		}
		else {// ù�ٰ� ���������� ���� �״�� �ؾ��� 

			for (int k = 0; k <= (i * 2); k++)
			{
				printf("*");
			}
		
		}
		printf("\n");

	}
}
