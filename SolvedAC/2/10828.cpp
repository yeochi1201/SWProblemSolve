#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int>list;

	string func;
	int x, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> func;
		switch (func[0]) {
		case 'p':
			if (func[1] == 'u') {
				cin >> x;
				list.push(x);
			}
			else if (func[1] == 'o') {
				if (list.empty())cout << -1 << "\n";
				else {
					cout << list.top() << "\n";
					list.pop();
				}
			}
			break;
		case 's':
			cout << list.size() << "\n";
			break;
		case 'e':
			if (list.empty())cout << 1 << "\n";
			else cout << 0 << "\n";
			break;
		case 't':
			if (list.empty())cout << -1 << "\n";
			else cout << list.top() << "\n";
		}
	}
}
