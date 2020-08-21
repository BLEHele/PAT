#include<iostream>
using namespace std;
int main() {
	int num[3][2], i, a[3], j;
	char mars[3][2];
	for (i = 0; i < 3; i++)
		cin >> a[i];
	for (i = 0; i < 3; i++) {
		num[i][0] = a[i] / 13;
		num[i][1] = a[i] % 13;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (num[i][j] < 10)	mars[i][j] = num[i][j] + '0';
			else {
				switch (num[i][j]) {
				case 10:mars[i][j] = 'A'; break;
				case 11:mars[i][j] = 'B'; break;
				case 12:mars[i][j] = 'C'; break;
				default:break;
				}
			}
		}
	}
	cout << "#";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			cout << mars[i][j];
		}
	}
	return 0;
}