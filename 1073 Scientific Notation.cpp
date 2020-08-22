#include<iostream>
#include<string>
using namespace std;
int main() {
	string n;
	int e_index, dot, i, move = 0;
	cin >> n;
	e_index = n.find('E');
	dot = n.find('.');
	if (n[0] == '-')	cout << "-";
	if (n[e_index + 1] == '+') {
		for (i = e_index + 2; i < n.length(); i++) {
			move = 10 * move + n[i] - '0';
		}
		for (i = 1; i < dot; i++)
			cout << n[i];
		for (i = dot + 1; i < e_index; i++) {
			cout << n[i];
			move--;
			if (move == 0 && i != e_index - 1) {
				cout << ".";
			}
		}
		while (move > 0) {
			cout << "0";
			move--;
		}
	}
	else {
		cout << "0.";
		move = 0;
		for (i = e_index + 2; i < n.length(); i++) {
			move = 10 * move + n[i] - '0';
		}
		while (move > 1) {
			cout << "0";
			move--;
		}

		for (i = 1; i < e_index; i++) {
			if(i!=dot)
				cout << n[i];
		}
	}
	return 0;
}
