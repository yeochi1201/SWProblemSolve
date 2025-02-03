#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	string num;
	int SUM = 0;
	cin >> N;
	cin >> num;
	for (int i = 0; i < N; i++) {
		SUM += static_cast<int>(num[i])-48;
	}
	cout << SUM << endl;
}