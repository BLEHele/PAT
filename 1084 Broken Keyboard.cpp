#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string a, b, miss;
	int i, j;
	getline(cin, a);
	getline(cin, b);
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	transform(b.begin(), b.end(), b.begin(), ::toupper);
	for (i = 0; i < a.size(); i++) {
		if (b.find(a[i]) == -1&&miss.find(a[i])==-1) {
			miss += a[i];
		}
	}
	cout << miss;
	return 0;
}
