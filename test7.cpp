#include <stdio.h>
//과제 7번 
int main(void) {
	int n, r;
	printf("n, r 입력: ");
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
	printf("순열: %d\n",p);

	int mul = 1;
	for (int i = 0; i < r; i++) {
		mul = mul * n;
	}
	printf("중복순열 : %d\n",mul);

	int c;
	int sq=1;
	for (int i = r; i >= 1; i--) {
		sq *= i;
	}
	c = tri / (pul * sq);
	printf("조합 : %d\n", c);

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
	printf("중복조합 : %d", h);
}