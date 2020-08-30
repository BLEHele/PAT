#include<stdio.h>
#include<math.h>
int factor(long long m, long long n) {
	if (n == 0)	return m;
	else {
		return abs(factor(n, m % n));
	}
}
int main() {
	long long n, a, b, i, tmp = 1, sum = 0, t;
	scanf("%lld", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld/%lld", &a, &b);
		t = factor(a, b);
		a /= t;
		b /= t;
		sum = sum * b + tmp * a;
		tmp = tmp * b;
		t = factor(sum, tmp);
		sum /= t;
		tmp /= t;
	}
	if (sum % tmp == 0) {
		printf("%lld", sum / tmp);
	}
	else if (sum / tmp == 0) {
		printf("%lld/%lld", sum, tmp);
	}
	else {
		printf("%lld %lld/%lld", sum / tmp, sum % tmp, tmp);
	}
	return 0;
}
