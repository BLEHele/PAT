#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int up(char s) {
	if (s >= 'A' && s <= 'Z')
		return 1;
	return 0;
}
int low(char s) {
	if (s >= 'a' && s <= 'z')
		return 1;
	return 0;
}
int num(char s) {
	if (s >= '0' && s <= '9')
		return 1;
	return 0;
}
void DAY(int n) {
	switch (n) {
	case 1:cout << "MON "; break;
	case 2:cout << "TUE "; break;
	case 3:cout << "WED "; break;
	case 4:cout << "THU "; break;
	case 5:cout << "FRI "; break;
	case 6:cout << "SAT "; break;
	case 7:cout << "SUN "; break;
	default:break;
	}
}
int main() {
	int i, day, h, m, count = 0;
	string a, b, c, d;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	getline(cin, d);
	for (i = 0; i < min(a.size(),b.size()); i++) {
		if (a[i] == b[i] && (up(a[i]) == 1||num(a[i]) == 1)) {
			count++;
			if (count == 1) {
				if (a[i] > 'G'||num(a[i])==1) {
					count--;
				}
				else {
					day = a[i] - 'A' + 1;
				}
			}
			if (count == 2) {
				if (a[i] > 'N') {
					count--;
				}
				else {
					if (num(a[i]) == 1)
						h = a[i] - '0';
					else {
						h = a[i] - 'A' + 10;
					}
					break;
				}
			}
		}
	}
	for (i = 0; i < min(c.size(), d.size()); i++) {
		if (c[i] == d[i] && (low(c[i]) == 1 || up(c[i]) == 1)) {
			m = i;
			break;
		}
	}
	DAY(day);
	if (h > 9)	cout << h << ":";
	else
	{
		cout << "0" << h << ":";
	}
	if (m > 9)	cout << m;
	else {
		cout << "0" << m;
	}
	return 0;
}
