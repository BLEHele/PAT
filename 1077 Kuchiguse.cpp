#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string ku(string a, string b) {
	int i, len;
	string t;
	len = min(a.length(), b.length());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for (i = 0; i < len; i++) {
		if (a[i] == b[i])
			t += a[i];
		else
		{
			break;
		}
	}
	reverse(t.begin(), t.end());
	return t;
}
int main() {
	string kuchi, s;
	int n, i;
	cin >> n;
	scanf("\n");
	for (i = 0; i < n; i++) {
		getline(cin, s);
		if (i == 0)
			kuchi = s;
		kuchi = ku(kuchi,s);
	}
	if (kuchi.length() == 0)	cout << "nai";
	else
	{
		cout << kuchi;
	}
	return 0;
}
