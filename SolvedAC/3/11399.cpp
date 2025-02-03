#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int sum = 0;
	vector<int>time;
	int t;
	cin >> n;
	while (n--) {
		cin >> t;
		time.push_back(t);
	}
	sort(time.begin(),time.end());
	t = 0;
	for (int i = 0; i < time.size(); i++) {
		t += time[i];
		sum += t;
	}

	cout << sum;
}