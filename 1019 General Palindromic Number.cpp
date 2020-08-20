#include<iostream>
using namespace std;
int main() {
	int n, c, a[27], b[27], count = 0, flag = 1, i;
	cin >> n >> c;
	while (n > 0) {
		a[count] = n % c;
		n /= c;
		count++;
	}
	for (i = 0; i < count; i++) {
		b[i] = a[count - i - 1];
	}
	for (i = 0; i < count; i++) {
		if (a[i] != b[i]) {
			flag = 0;
			break;
		}
	}
	if (flag == 1)	cout << "Yes" << endl;
	else
	{
		cout << "No" << endl;
	}
	cout << b[0];
	for (i = 1; i < count; i++) {
		cout << " " << b[i];
	}
	return 0;
}