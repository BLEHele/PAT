#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	int i, m[21], n[21], num[10] = { 0 }, count = 0, count1, add = 0, flag = 1;
	getline(cin, a);
	for (i = 0; a[i] != '\0'; i++) {
		m[i] = a[i] - '0';
		count++;
		num[m[i]]++;
	}
	count1 = count;
	for (i = count-1; i >= 0; i--) {
		if (m[i] * 2 + add > 9) {
			n[count-i-1] = (m[i] * 2 + add) % 10;
			add = 1;
			if (i == 0) {
				n[count] = 1;
				count1 = count + 1;
			}
		}
		else {
			n[count-i-1] = m[i] * 2 + add;
			add = 0;
		}
	}
	for (i = 0; i < count1; i++) {
		num[n[i]]--;
		if (num[n[i]] < 0) {
			flag = 0;
			break;
		}
	}
	if (flag == 1)	cout << "Yes" << endl;
	else
	{
		cout << "No" << endl;
	}
	for (i = count1-1; i>=0; i--)
		cout << n[i];
	return 0;
}