#include <iostream>

using namespace std;

int main() {
	string S;
	int idx;
	bool isol = true;
	int array[26] = { 0, };

	cin >> S;

	for (int i = 0; i < size(S); i++) {
		idx = static_cast<int>(S[i]);
		if (idx > 64 && idx < 91)
			array[idx - 65]++;
		else if (idx > 96 && idx < 123)
			array[idx - 97]++;
	}


	idx = 0;
	for (int i = 1; i < 26; i++) {
		if (array[idx] < array[i]) {
			idx = i;
			isol = true;
		}
		else if (array[idx] == array[i])
			isol = false;
	}
	if (isol == false)
		cout << "?";
	else
		cout << char(idx+65);
}