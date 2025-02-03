#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, X, num;
	vector<int>result;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num < X)
			result.push_back(num);
	}
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
	cout << endl;
}