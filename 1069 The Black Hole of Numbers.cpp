#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n, flag = 1, t;
	string s, s1, s2;
	cin >> n;
	while (flag) {
		s = to_string(n);
		if (s.size() < 4)	s.insert(s.begin(), 4 - s.size(), '0');
		sort(s.begin(), s.end());
		s1 = s;
		reverse(s1.begin(), s1.end());
		t = stoi(s1) - stoi(s);
		s2 = to_string(t);
		if (s2.size() < 4)	s2.insert(s2.begin(), 4 - s2.size(), '0');
		cout << s1 << " - " << s << " = " << s2 << endl;
		n = t;
		if (t == 6174 || t == 0)	flag = 0;
	}
	return 0;
}
