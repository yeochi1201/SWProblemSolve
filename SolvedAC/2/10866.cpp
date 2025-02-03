#include <iostream>
#include <deque>
using namespace std;
bool print_front(deque<int> list) {
	if (list.empty()) {
		cout << -1 << "\n";
		return false;
	}
	else cout << list.front() << "\n";
	return true;
}
bool print_back(deque<int> list) {
	if (list.empty()) {
		cout << -1 << "\n";
		return false;
	}
	else cout << list.back() << "\n";
	return true;
}
int main() {
	deque<int>list;

	string func;
	int x, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> func;
		switch (func[0]) {
		case 'p':
			if (func[1] == 'u') {
				cin >> x;
				if (func[5] == 'f') list.push_front(x);
				else list.push_back(x);
			}
			else {
				if (func[4] == 'f') {
					if (print_front(list)) {
						list.pop_front();
					}
				}
				else {
					if (print_back(list)) {
						list.pop_back();
					}
				}
			}
			break;
		case 's':
			cout << list.size() << "\n";
			break;
		case 'e':
			if (list.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
			break;
		case 'f':
			print_front(list);
			break;
		case 'b':
			print_back(list);
		}
	}
}
