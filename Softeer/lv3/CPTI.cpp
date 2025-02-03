#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, cnt = 0;
	cin >> N >> M;
	vector<int> CPTI(N);
	string str;

	for (int i = 0; i < N; i++) {
		cin >> str;
		int num = 0;
		for (char c : str)
			num = (num << 1) | (c - '0');
		CPTI[i] = num;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int count = 0;
			int diff = CPTI[i] ^ CPTI[j];
			while (diff > 0) {
				count += (diff & 1);
				diff >>= 1;
			}
			if (count < 3)cnt++;
		}
	}

	cout << cnt << endl;
}