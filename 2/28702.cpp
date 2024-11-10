#include <iostream>
#include <string>
using namespace std;

int main() {
	string list[3];
	int idx;
	int num;
	for (int i = 0; i < 3; i++) {
		cin >> list[i];
		if (list[i][0] != 'F' && list[i][0] != 'B') {
			num = stoi(list[i]);
			idx = i;
		}
	}
	int offset = 3 - idx;
	num += offset;

	if (num % 15 == 0) {
		cout << "FizzBuzz";
	}
	else if (num % 5 == 0){
		cout << "Buzz";
	}
	else if (num % 3 == 0) {
		cout << "Fizz";
	}
	else
		cout << num;
}