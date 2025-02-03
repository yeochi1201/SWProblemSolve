#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int T, H, W, N, result;
	vector<int>reslist;
	cin >> T;
	for (int t = 0; t < T; t++) {
		result = 0;
		cin >> H >> W >> N;
		if (N % H == 0) result = H * 100 + (N / H);
		else result = N%H * 100 + N/H+1;

		reslist.push_back(result);
	}
	for (int i = 0; i < T; i++)
		cout << reslist[i] << "\n";
}
