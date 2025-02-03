#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	vector<string> dictionary;
	unordered_map<string, int> index;
	int n, m;
	string name;
	
	cin >> n >> m;
	dictionary.reserve(n);
	for (int i = 1; i <= n; i++) {
		cin >> name;
		dictionary.push_back(name);
		index[name] = i;
	}
	
	while (m--) {
		cin >> name;
		if (isdigit(name[0]) == 0) {
			cout << index[name] << "\n";
		}
		else {
			cout << dictionary.at(stoi(name)-1) << "\n";
		}
	}
}