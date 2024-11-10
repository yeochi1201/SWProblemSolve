#include <iostream>

using namespace std;

int main() {
	int cost[11];
	cost[1] = 1;
	cost[2] = 2;
	cost[3] = 4;

	for (int i = 4; i < 11; i++) {
		cost[i] = cost[i - 1] + cost[i - 2] + cost[i - 3];
	}
	int testcase;
	cin >> testcase;
	int n;
	for (int i = 0; i < testcase; i++) {
		cin >> n;
		cout << cost[n] << endl;
	}
}