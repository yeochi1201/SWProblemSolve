#include <iostream>

using namespace std;

int main() {
	int personNum;
	int shirtNum;
	int penNum;

	int sizeNum[6];

	cin >> personNum;

	for (int i = 0; i < 6; i++) {
		cin >> sizeNum[i];				
	}
	cin >> shirtNum >> penNum;

	int shirt = 0;
	for (int i = 0; i < 6; i++) {
		shirt += (sizeNum[i] / shirtNum);
		if (sizeNum[i] % shirtNum != 0)
			shirt++;
	}
	cout << shirt << endl;
	
	cout << personNum / penNum << " " << personNum % penNum;
}