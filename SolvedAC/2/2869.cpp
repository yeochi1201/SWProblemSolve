#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int A, B, V, D = 1;
	cin >> A >> B >> V;
	
	D += (V - A) / (A - B);
	if ((V - A) % (A - B)) D++;
	cout << D;
}
