#include <iostream>

using namespace std;

int main() {
	int num, idx = 0;
	int max = 0;
	for (int i = 1; i < 10; i++) {
		cin >> num;
		if (max < num) {
			max = num;
			idx = i;
		}
	}
	cout << max << "\n" << idx;
}