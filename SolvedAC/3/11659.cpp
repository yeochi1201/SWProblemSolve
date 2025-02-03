#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int size;
	int testcase;
	long long int res;
	res = 0;
	cin >> size >> testcase;
	int* number = new int[size];
	int n;
	for (int i = 0; i < size; i++) {
		cin >> n;
		res += n;
		number[i] = res;
	}
	int start, end;
	for (int i = 0; i < testcase; i++) {
		cin >> start >> end;
		if (start == 1) {
			cout << number[end - 1] << '\n';
		}
		else {
			cout << number[end - 1] - number[start - 2] << '\n';
		}
	}
}