#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string A, B;
	int rA, rB;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	rA = stoi(A);
	rB = stoi(B);

	if (rB < rA)
		cout << rA << endl;
	else cout << rB << endl;
}