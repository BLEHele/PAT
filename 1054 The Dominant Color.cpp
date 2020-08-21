#include<iostream>
#include<map>
using namespace std;
int main() {
	int i, m, n, t;
	cin >> m >> n;
	map<int, int>CountColor;
	for (i = 0; i < m * n; i++) {
		scanf("%d", &t);
		CountColor[t]++;
		if (CountColor[t] > m * n / 2)	break;
	}
	cout << t;
	return 0;
}
