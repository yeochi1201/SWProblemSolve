#include <iostream>
#include <algorithm>
using namespace std;

bool pitagoras(int a[]) {
	sort(a, a+3);
	if ((a[2] * a[2]) == (a[1] * a[1]) + (a[0] * a[0]))
		return true;
	else return false;
}
int main() {
	int array[3]= {0};
	while (true) {
		cin >> array[0] >> array[1] >> array[2];
		if (array[0] == 0 && array[1] == 0 && array[2] == 0)
			break;
		if (pitagoras(array)) cout << "right\n";
		else cout << "wrong\n";
	}
}
