#include <stdio.h>
//���� 7�� 
int main(void) {
	int n, r;
	printf("n, r �Է�: ");
	scanf("%d %d", &n, &r);

	int p;
	int tri=1;
	for (int i = n; i >= 1; i--) {
		tri *= i;
	}
	int pul=1;
	for (int i = n - r; i >= 1; i--) {
		pul *= i;
	}

	p = tri / pul;
	printf("����: %d\n",p);

	int mul = 1;
	for (int i = 0; i < r; i++) {
		mul = mul * n;
	}
	printf("�ߺ����� : %d\n",mul);

	int c;
	int sq=1;
	for (int i = r; i >= 1; i--) {
		sq *= i;
	}
	c = tri / (pul * sq);
	printf("���� : %d\n", c);

	int h;
	int ar=1;
	int eq=1;
	for (int i = n + r - 1; i >= 1; i--) {
		ar *= i;
	}
	for (int i = n - 1; i >= 1; i--) {
		eq *= i;
	}

	h = ar / (eq * sq);
	printf("�ߺ����� : %d", h);
}