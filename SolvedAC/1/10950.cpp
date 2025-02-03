#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B, T;
	vector<int> result;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		result.push_back(A + B);
	}
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
	cout << endl;
}