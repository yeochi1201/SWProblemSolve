#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;

	cin >> n >> m;

	string site, pw;
	unordered_map<string, string> dict;

	while (n--) {
		cin >> site >> pw;
		dict.insert({ site, pw });
	}
	while (m--) {
		cin >> site;
		cout << dict.at(site) << "\n";
	}

}