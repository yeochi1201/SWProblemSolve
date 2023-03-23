#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, C, max = 0, sum = 0;
	vector<int>Card;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> C;
		Card.push_back(C);
	}
	sort(Card.begin(), Card.end());
	for (int i = 0; i < Card.size() - 2; i++) {
		for (int j = i+1; j < Card.size() - 1; j++) {
			for (int k = i+2; k < Card.size(); k++) {
				sum = Card[i] + Card[j] + Card[k];
				if (sum <= M && sum > max)
					max = sum;
			}
		}
	}
	cout << max;

}
