#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long H = 0, N, M, T, SUM, mh = 0;
	int left = 0, right, mid;
	vector<int>Treelist;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		cin >> T;
		Treelist.push_back(T);
		if (mh < T) mh = T;
	}
	right = mh;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		SUM = 0;
		for (int i = 0; i < N; i++) {
			if (mid < Treelist[i])SUM += Treelist[i] - mid;
			if (SUM >= M) {
				if (H < mid)
					H = mid;
				left = mid + 1;
			}
		}
		if (SUM < M){
			right = mid - 1;
		}
	}
	cout << H;
}
