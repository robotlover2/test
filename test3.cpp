#include <stdio.h>
// ���� 3�� 
int main(void) {
	int year;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);
	if (year % 4 ==0) {
		if (year % 100 != 0 || year % 400 == 0) {
			printf("����");
		}
		else
			printf("������ �ƴմϴ�.");
	}
}