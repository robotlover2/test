#include <stdio.h>
/*int main(void) {
	int age = 0;
	
	printf("����� ���̸� �Է��ϼ��� ");
	scanf("%d", &age);
	printf("%d\n", age);

}

int main(void) {
	int a, b, c;
	a = 10; b = 20; c = 30;
	a = ++b;
	c = b++;
	printf("a=%d,b=%d,c=%d\n\n", a, b, c);

	a = ++b + ++c;
	printf("a=++b + ++c ���� ������ \n");
	printf("a=%d,b=%d,c=%d\n\n", a, b, c);
}
int main(void) {
	int a = 0, b = 1;
	printf("�� ���� 1&&2�� ��� : %d\n", 1 && 2);
	printf("�� ���� 0&&2�� ��� : %d\n\n", 0 && 2);

	printf("�� ���� 0||2�� ��� : %d\n", 0 || 2);
	printf("�� ���� 0||0�� ��� :%d\n\n", 0 || 0);
	printf("�� ���� !a�� ���: %d\n",!a);
	printf("������  !b�� ��� : %d\n",!b);
}
int main(void) {
	int a = 10;
	printf("�ʱ� �� a=10\n");

	a += 5;
	printf("a+=5: %d\n", a);

	a = 10;
	a -= 5 + 2;
	printf("a-=5+2:%d\n", a);

	a = 10;
	a *= 2 + 5;
	printf("a *= 2 + 5: %d\n ", a);
}
void main() {
	int min, max;
	int x = 10, y = 20;
	max = (x > y) ? x : y;
	min = (x > y) ? y : x;
	printf("�μ� %d �� %d �߿� ū ���� %d �̴� \n", x, y, max);
	printf("�μ� %d�� %d�߿� ���� ���� %d �̴� \n", x, y, min);
}
int main(void) {
	int input;
	printf("����� �Է��ϼ��� \n");
	scanf_s("%d", &input);

	if (input % 2 == 0)
		printf("�Է��� �� %d�� ¦�� �Դϴ� \n", input);
	else
		printf("�Է��� �� %d�� Ȧ�� �Դϴ� \n", input);

}
void main() {
	int a=1;
	switch(a){
	case 1: 
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;

	case 3:
		printf("3\n");
		break;
	case 4:
		printf("4\n");
		break;


	}
}
void main() {
	int i;
	for (i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int sum = 0;
	int number = 1;
	printf("1~10���� ���� ���մϴ� \n");

	while (number < 11) {
		sum += number++;
		
	}
	printf("���� %d�Դϴ� \n", sum);

}*/
void main() {
	int i;
	for (i = 1; i < 100; i++) {
		printf("%d", i);
		if (i >= 5)
			break;
	}
	printf("\n for���� ���� ���Խ��ϴ� \n");
}