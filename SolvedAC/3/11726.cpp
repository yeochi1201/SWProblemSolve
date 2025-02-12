#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int length;
	int dp[1001];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	
	cin >> length;

	for (int i = 4; i <= length; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[length];
}