#include <iostream>
using namespace std;

int main() {
	int H, M;
	int min;
	cin >> H >> M;

	min = H * 60 + M - 45 + 1440;

	H = min / 60;
	if (H > 23)
		H -= 24;
	M = min % 60;

	cout << H << " " << M << endl;
}