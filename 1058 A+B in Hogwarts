#include<stdio.h>
int main() {
	int a1, b1, c1, a2, b2, c2, a, b, c, add1 = 0, add2 = 0;
	scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	c = c1 + c2;
	if (c > 28) {
		add1 = 1;
		c %= 29;
	}
	b = b1 + b2 + add1;
	if (b > 16) {
		add2 = 1;
		b %= 17;
	}
	a = a1 + a2 + add2;
	printf("%d.%d.%d", a, b, c);
	return 0;
}
