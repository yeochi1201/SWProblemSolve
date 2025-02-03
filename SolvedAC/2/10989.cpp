#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	int array[10000] = {0,};
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		array[num - 1]++;
	}
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < array[i]; j++) {
			cout << i + 1 << "\n";
		}
	}
}