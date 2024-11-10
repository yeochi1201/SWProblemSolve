#include <iostream>
#include <map>
using namespace std;

int main() {
	int testcase;
	long long int cost[101];
	cost[1] = 1;
	cost[2] = 1;
	cost[3] = 1;
	cost[4] = 2;
	cost[5] = 2;

	for (int i = 6; i < 101; i++) {
		cost[i] = cost[i - 5] + cost[i - 1];
	}

	cin >> testcase;
	int n;
	for (int i = 0; i < testcase; i++) {
		cin >> n;
		cout << cost[n] << endl;
	}
}