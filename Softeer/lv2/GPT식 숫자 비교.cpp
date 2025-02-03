#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Number {
public:
	int upper;
	int under;
	Number(int upper, int under) {
		this->upper = upper;
		this->under = under;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	double num;
	vector<int> list;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		list.push_back(num * 1000);
	}
	sort(list.begin(), list.end());

	for (int i = 0; i < N; i++) {
		cout << (double)list[i] / 1000 << "\n";
	}
}