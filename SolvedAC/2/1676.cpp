#include <iostream>

using namespace std;

int main() {
	int N, f_count = 0, t_count = 0;
	int temp;
	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		temp = i;
		while (temp % 2 == 0) {
			t_count++;
			temp = temp / 2;
		}
		while (temp % 5 == 0) {
			f_count++;
			temp = temp / 5;
		}
	}
	cout << min(t_count, f_count);
}