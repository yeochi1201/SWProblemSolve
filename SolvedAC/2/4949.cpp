#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool balancing(string a) {
	stack<char>list;
	for (int i = 0; i < a.size(); i++) {
		switch (a[i]) {
		case '(':
			list.push('(');
			break;
		case '[':
			list.push('[');
			break;
		case ')':
			if (!list.empty() && list.top() == '(')
				list.pop();
			else return false;
			break;
		case ']':
			if (!list.empty() && list.top() == '[')
				list.pop();
			else return false;
		}
	}
	if (list.empty()) return true;
	else return false;
}
int main() {
	string s;

	while (true) {
		getline(cin, s);
		if (s == ".") break;
		else {
			if (balancing(s))
				cout << "yes\n";
			else
				cout << "no\n";
		}
	}
}
