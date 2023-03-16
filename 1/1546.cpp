#include <iostream>

using namespace std;

int main() {
	float N, max = 0, avg = 0;
	float array[1000];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> array[i];
		if (max < array[i])
			max = array[i];
	}
	for (int i = 0; i < N; i++) {
		avg += (array[i] / max * 100);
	}
	cout << avg / N;
}