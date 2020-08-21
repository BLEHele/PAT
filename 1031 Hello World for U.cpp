#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n, n1, n2, i, max = 0, k, j;
	n = s.length();
	for (i = n; i >= 3; i--) {
		if ((n + 2 - i) % 2 == 0 && max < (n + 2 - i) / 2 && max < i)
			max = (n + 2 - i) / 2;
	}
	n1 = max;
	n2 = n + 2 - 2 * n1;
	for (i = 0; i < n1 - 1; i++) {
		cout << s[i];
		for (j = 0; j < n2 - 2; j++)
			cout << " ";
		cout << s[n - i - 1] << endl;
	}
	k = i;
	while (n2 > 0) {
		cout << s[k];
		k++;
		n2--;
	}
	return 0;
}