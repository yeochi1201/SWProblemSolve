#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
	int score = 1;
	int sum = 0;
	vector<int>result;
	string ans;
	cin >> N;
	for (int i = 0; i < N; i++) {
		sum = 0;
		score = 1;
		cin >> ans;
		for (int j = 0; j < ans.size(); j++) {
			if (ans[j] == ((char)'O')) {
				sum += score;
				score++;
			}
			else
				score = 1;
		}
		result.push_back(sum);
	}
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
	cout << endl;
}