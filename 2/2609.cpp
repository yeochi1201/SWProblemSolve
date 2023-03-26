#include <iostream>

using namespace std;

int main() {
	int A, B, X;
	cin >> A >> B;

	for (int i = 1; i <= min(A, B); i++) {
		if (A % i == 0 && B % i == 0)
			X = i;
	}
	cout << X << "\n" << A * B / X;
}
