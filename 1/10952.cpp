#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B;
	vector<int> result;
	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		result.push_back(A + B);
	}
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
	cout << endl;
}