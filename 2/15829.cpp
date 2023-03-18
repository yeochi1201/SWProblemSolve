#include <iostream>

using namespace std;

int main() {
	long long L, a, sum = 0;
	string S;
	long long r = 1, M = 1234567891;
	
	cin >> L >> S;

	for (int i = 0; i < L; i++) {
		a = static_cast<int>(S[i])-96;
		sum = (sum + a * r) % M;
		r = r * 31 % M;
	}

	cout << sum;
}