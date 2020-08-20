#include<iostream>
#include<cmath>
using namespace std;
int IsPrime(int n) {
	if (n < 2)	return 0;
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int radix(int n, int d) {
	int sum = 0, a[17], count = 0, i;
	while (n > 0) {
		a[count] = n % d;
		n /= d;
		count++;
	}
	for (i = 0; i < count; i++) {
		sum = sum * d + a[i];
	}
	return sum;
}
int main() {
	int n = 0, d = 10, t;
	cin >> n;
	while (n >= 0) {
		cin >> d;
		if (IsPrime(n) == 1) {
			t = radix(n, d);
			if (IsPrime(t) == 1)	cout << "Yes" << endl;
			else	cout << "No" << endl;
		}
		else	cout << "No" << endl;
		cin >> n;
	}
	return 0;
}