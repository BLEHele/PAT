#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1, s2;
	int i, num[128] = { 0 };
	getline(cin, s1);
	getline(cin, s2);
	for (i = 0; i < s2.size(); i++) {
		num[(int)s2[i]] = 1;
	}
	for (i = 0; i < s1.size(); i++) {
		if (num[(int)s1[i]] == 0)
			cout << s1[i];
	}
	return 0;
}