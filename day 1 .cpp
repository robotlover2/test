#include <stdio.h>
/*int main(void) {
	int age = 0;
	
	printf("당신의 나이를 입력하세요 ");
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
	printf("a=++b + ++c 문장 실행후 \n");
	printf("a=%d,b=%d,c=%d\n\n", a, b, c);
}
int main(void) {
	int a = 0, b = 1;
	printf("논리 연산 1&&2의 결과 : %d\n", 1 && 2);
	printf("논리 연산 0&&2의 결과 : %d\n\n", 0 && 2);

	printf("논리 연산 0||2의 결과 : %d\n", 0 || 2);
	printf("논리 연산 0||0의 결과 :%d\n\n", 0 || 0);
	printf("논리 연산 !a의 결과: %d\n",!a);
	printf("논리연산  !b의 결과 : %d\n",!b);
}
int main(void) {
	int a = 10;
	printf("초기 값 a=10\n");

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
	printf("두수 %d 과 %d 중에 큰 수는 %d 이다 \n", x, y, max);
	printf("두수 %d과 %d중에 작은 수는 %d 이다 \n", x, y, min);
}
int main(void) {
	int input;
	printf("양수를 입력하세요 \n");
	scanf_s("%d", &input);

	if (input % 2 == 0)
		printf("입력한 수 %d는 짝수 입니다 \n", input);
	else
		printf("입력한 수 %d는 홀수 입니다 \n", input);

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
	printf("1~10까지 합을 구합니다 \n");

	while (number < 11) {
		sum += number++;
		
	}
	printf("합은 %d입니다 \n", sum);

}*/
void main() {
	int i;
	for (i = 1; i < 100; i++) {
		printf("%d", i);
		if (i >= 5)
			break;
	}
	printf("\n for문을 빠져 나왔습니다 \n");
}