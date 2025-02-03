#include <iostream>
#include <string>
using namespace std;

int main() {
	int array[26];
	for (int i = 0; i < 26; i++)
		array[i] = -1;
	int tmp;
	string S;

	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		tmp = static_cast<int>(S[i]);
		tmp -= 97;
		if (array[tmp] == -1)
			array[tmp] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << array[i] << " ";
	cout << endl;
}