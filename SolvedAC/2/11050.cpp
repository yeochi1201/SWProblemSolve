#include <iostream>

using namespace std;
int factorial(int n) {
	if (n == 0)return 0;
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}
int main() {
	int N, K;
	cin >> N >> K;
	cout << factorial(N) / factorial(N - K) / factorial(K);
}