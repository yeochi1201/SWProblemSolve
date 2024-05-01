#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int cnt = 0;
	vector<int> price;

	cin >> n >> k;
	int money;
	while (n--) {
		cin >> money;
		price.push_back(money);
	}
	
	for (int i = price.size()-1; i >= 0; i--) {
		cnt += k / price[i];
		k %= price[i];
	}
	cout << cnt;
}