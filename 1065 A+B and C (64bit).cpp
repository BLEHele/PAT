#include<stdio.h>
int main() {
	long long a, b, c, r;
	int i, n;
	bool more;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		r = a + b;
		if (a > 0 && b > 0 && r < 0)	more = true;
		else if (a < 0 && b < 0 && r >= 0)	more = false;
		else if (r > c)	more = true;
		else more = false;
		if(more==false)
			printf("Case #%d: false\n", i);
		else{
			printf("Case #%d: true\n", i);
		}
	}
	return 0;
}
