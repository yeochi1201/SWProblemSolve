#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T = 0;
	stack<char> list;

	string str;
	bool yn = true;
	cin >> T;
	for (int t = 0; t < T; t++) {
		yn = true;
		while (!list.empty())
			list.pop();
		cin >> str;
		for (int i = 0; i < str.size();i++) {
			if (str[i] == '(')
				list.push('(');
			else if (list.empty()) {
				yn = false;
				break;
			}
			else
				list.pop();
		}
		if (!list.empty()) yn = false;
		if (yn == true) cout << "YES\n";
		else cout << "NO\n";
	}
}
