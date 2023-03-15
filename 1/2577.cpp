#include <iostream>

using namespace std;

int main() {
	int array[10] = {0,};
	int A, B, C;
	int mul;
	cin >> A >> B >> C;

	mul = A * B * C;

	while (mul > 0) {
		array[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << "\n";
	}
	cout << endl;
}