#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int fibo[41];
int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (fibo[n] == 0) {
		fibo[n] = fibonacci(n-1) + fibonacci(n-2);
	}
	return fibo[n];
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		if (n == 0) {
			cout << 1 << " " << 0 << endl;
		}
		else
			cout << fibonacci(n - 1) << " " << fibonacci(n) << endl;
	}
	return 0;
}