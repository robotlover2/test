#include <stdio.h>
//���� 1�� 
int main(void) {
	float num1, num2, num3, num4, num5;
	printf("1��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num1);

	printf("2��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num2);

	printf("3��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num3);

	printf("4��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num4);

	printf("5��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num5);
	printf("---- ��� ----\n");
	// �Ǽ� 5�� �ޱ� ���α׷� 
	float ave;//����� ���ϴ� ���α׷� 
	float sum;
	sum = num1 + num2 + num3 + num4 + num5;
	ave = sum / 5;
	printf("����� %.6f �Դϴ� \n", ave);

	float max = num1;// �ִ밪�� ���ϴ� ���α׷� 
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	if (num4 > max)
		max = num4;
	if (num5 > max)
		max = num5;

	printf("�ִ밪�� %.6f �Դϴ� \n", max);


	float min= num1;// �ּҰ��� ���ϴ� ���α׷� 
	if (min>num2)
		min = num2;

	if (min > num3)
		min = num3;

	if (min > num4)
		min = num4;

	if (min > num5)
		min = num5;
	
	
	printf("�ּҰ��� %.6f �Դϴ� \n", min);
}









