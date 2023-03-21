#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int K, num, sum = 0;
	stack<int> list;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0 && !list.empty())
			list.pop();
		else list.push(num);
	}
	while (!list.empty()) {
		sum += list.top();
		list.pop();
	}
	cout << sum;
		
	return 0;
}
