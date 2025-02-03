#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	string cal;
	int n;
	int k;
	cin >> k;
	bool S[21] = { false };
	while (k--) {

		cin >> cal;
		
		if (cal == "add") {
			cin >> n;
			if (S[n]==false)
				S[n]=true;
		}
		else if (cal == "remove") {
			cin >> n;
			if (S[n] == true)
				S[n] = false;
		}
		else if (cal == "check") {
			cin >> n;
			if (S[n]==false)
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		else if (cal == "toggle") {
			cin >> n;
			if (S[n] == true) {
				S[n] = false;
			}
			else
				S[n] = true;
		}
		else if (cal == "all") {
			memset(S, true, sizeof(S));
		}
		else if (cal == "empty") {
			memset(S, false, sizeof(S));
		}
	}
}