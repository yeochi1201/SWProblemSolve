#include <iostream>

using namespace std;

int K, N;
unsigned int* length;
int solution(int right) {
	unsigned int left = 1;
	unsigned int mid, n, ans = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		n = 0;
		for (int i = 0; i < K;i++)
			n += (length[i] / mid);
		if (n >= N) {
			ans = mid;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return ans;
}

int main() {
	unsigned int maxLength = 0;
	cin >> K >> N;
	length = new unsigned int[K];
	for (int i = 0; i < K; i++) {
		cin >> length[i];
		if (length[i] > maxLength)
			maxLength = length[i];
	}
	cout << solution(maxLength);

	return 0;
}