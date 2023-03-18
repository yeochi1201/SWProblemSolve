#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int>list;

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
					cout << list.front() << "\n";
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
		case 'f':
			if (list.empty())cout << -1 << "\n";
			else cout << list.front() << "\n";
			break;
		case 'b':
			if (list.empty())cout << -1 << "\n";
			else cout << list.back() << "\n";
		}
	}
}
