#include<iostream>
using namespace std;
int main() {
	int n, i, num[10000] = { 0 }, a[100001], t;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		num[a[i]]++;
	}
	for (i = 0; i < n; i++) {
		if (num[a[i]] == 1) {
			t = a[i];
			break;
		}
	}
	if (i == n)	cout << "None";
	else {
		cout << t;
	}
	return 0;
}