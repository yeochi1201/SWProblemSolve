#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num, N;
	vector<int>list;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++)
		cout << list[i] << "\n";
}
