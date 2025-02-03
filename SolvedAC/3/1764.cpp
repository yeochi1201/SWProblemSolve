#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	int n, m;
	string name;
	set<string> list;
	set<string> answer;
	cin >> n >> m;

	while (n--) {
		cin >> name;
		list.insert(name);
	}
	while (m--) {
		cin >> name;
		if (list.find(name) != list.end()) {
			answer.insert(name);
		}
	}
	cout << answer.size() << "\n";
	for (auto itr = answer.begin(); itr != answer.end(); itr++) {
		cout << *itr << "\n";
	}
}