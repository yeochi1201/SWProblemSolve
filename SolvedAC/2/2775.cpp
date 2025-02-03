#include <iostream>

using namespace std;

int main() {
	int T, n, k;
	int array[15][15] = {0,};

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (i == 0) array[i][j] = j + 1;
			else if (j == 0)array[i][j] = 1;
			else array[i][j] = array[i - 1][j] + array[i][j - 1];
		}
	}

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> k >> n;
		cout << array[k][n-1] << "\n";
	}
}
