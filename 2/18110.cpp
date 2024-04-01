#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int* score;

int main() {
	int n, sum = 0;
	cin >> n;
	score = new int[n];
	if (n == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	float k = n / static_cast<float>(100) * 15;
	k = round(k);

	sort(score, score + n);
	for (int i = k; i < n - k; i++) {
		sum += score[i];
	}
	cout << round(sum / (n-2*k));

	return 0;
}