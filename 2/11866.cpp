#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K, temp;
	queue<int> list;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		list.push(i);
	cout << "<";
	while (list.size()!=1) {
		for (int i = 0; i < K-1; i++) {
			temp = list.front();
			list.pop();
			list.push(temp);
		}
		temp = list.front();
		cout << temp << ", ";
		list.pop();
	}
	cout << list.front() << ">";
}