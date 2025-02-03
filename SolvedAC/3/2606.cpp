#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, x, y;
	cin >> n >> m;
	bool** network = new bool*[n+1];
	for (int i = 0; i <= n; i++) {
		network[i] = new bool[n + 1]();
	}
	bool* visit = new bool[n+1]();
	
	
	while (m--) {
		cin >> x >> y;
		network[x][y] = true;
		network[y][x] = true;
	}

	queue<int> com;
	com.push(1);
	visit[1] = true;
	while (!com.empty()) {
		int x = com.front();
		com.pop();
		for (int i = 1; i < n + 1; i++) {
			if (network[x][i] == true && visit[i] == false) {
				visit[i] = true;
				com.push(i);
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == true)
			cnt++;
	}
	cout << cnt-1;
}