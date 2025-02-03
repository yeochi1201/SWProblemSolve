#include <iostream>

using namespace std;

int main() {
	int num;
	bool asc = true, des = true;
	for (int i = 0; i < 8; i++) {
		cin >> num;
		if (num != i+1)
			asc = false;
		if (num != 8 - i)
			des = false;
	}
	if (asc == true)
		cout << "ascending" << endl;
	else if (des == true)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;
}