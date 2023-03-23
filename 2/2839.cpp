#include <iostream>
using namespace std;

int main() {
	int N, v=0;
	cin >> N;

	while (N % 5 != 0) {
		N -= 3;
		v++;
	}
	if (N >= 0)cout << v + N / 5;
	else cout << "-1";
}
