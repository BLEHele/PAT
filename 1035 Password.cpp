#include<iostream>
#include<string>
using namespace std;
int modify(string s) {
	int i;
	for (i = 0; s[i]!='\0'; i++) {
		if (s[i] == '1' || s[i] == '0' || s[i] == 'l' || s[i] == 'O')
			return 1;
	}
	return 0;
}
void replace(string s) {
	int i;
	for (i = 0; i < s[i]!='\0'; i++) {
		switch (s[i]) {
		case '1':s[i] = '@'; break;
		case '0':s[i] = '%'; break;
		case 'l':s[i] = 'L'; break;
		case 'O':s[i] = 'o'; break;
		default:break;
		}
	}
	cout << s;
}
struct user {
	string name;
	string password;
};
int main() {
	int n, i, count = 0;
	struct user user[1000], out[1000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> user[i].name >> user[i].password;
	}
	for (i = 0; i < n; i++) {
		if (modify(user[i].password) == 1) {
			out[count] = user[i];
			count++;
		}
	}
	if (count != 0) {
		cout << count << endl;
		for (i = 0; i < count; i++) {
			cout << out[i].name << " ";
			replace(out[i].password);
			if (i != count - 1)	cout << endl;
		}
	}
	else if (n == 1) {
		cout << "There is 1 account and no account is modified";
	}
	else {
		cout << "There are " << n << " accounts and no account is modified";
	}
	return 0;
}