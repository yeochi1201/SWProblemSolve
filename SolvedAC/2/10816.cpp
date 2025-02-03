#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, M, num, up, low;
	vector<int> ori, cmp;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		ori.push_back(num);
	}
	sort(ori.begin(), ori.end());
	
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		up = upper_bound(ori.begin(), ori.end(), num) - ori.begin();
		low = lower_bound(ori.begin(), ori.end(), num) - ori.begin();
		if (up == N - 1 && ori[N - 1] == num) up++;
		cmp.push_back(up - low);
	}
	for (int i = 0; i < M; i++) {
		cout << cmp[i] << " ";
	}
}
