#include <iostream>

using namespace std;

int main() {
	int n, res = 0;
	int array[42] = {0,};
	for (int i = 0; i < 10; i++) {
		cin >> n;
		array[n % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (array[i] != 0)
			res++;
	}
	cout << res << endl;
}