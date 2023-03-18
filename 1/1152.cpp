#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	int count = 1;

	getline(cin, S);
	if (empty(S)) {
		cout << "1";
		return 0;
	}
		
	for (int i = 0; i < size(S); i++) {
		if (static_cast<int>(S[i]) == 32 && i != 0)
			count++;
	}
	if (S[size(S) - 1] == ' ')
		count--;
	cout << count;
}