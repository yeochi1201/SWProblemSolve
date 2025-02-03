#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int T, R;
	string S, P = "";
	vector<string> result;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		for (int j = 0; j < size(S); j++) {
			for (int k = 0; k < R; k++) {
				P += S[j];
			}
		}
		result.push_back(P);
	}
	for (int i = 0; i < T; i++) {
		cout << result[i] << endl;
	}
}