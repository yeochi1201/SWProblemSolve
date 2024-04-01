#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int time = 500*500*256*2, M, N, B, height = 0;
	int maxHeight = 0;
	cin >> M >> N >> B;
	int gnd[500][500];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> gnd[i][j];
			maxHeight = max(maxHeight, gnd[i][j]);
		}
	}
	
	for(int h=0;h<=maxHeight;h++) {
		int build = 0, destroy = 0, diff;
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				diff = gnd[i][j] - h;
				if (gnd[i][j] > h) {
					destroy += diff;
				}
				else if (gnd[i][j] < h) {
					build -= diff;
				}
			}
		}
		if (B-build+destroy >= 0) {
			time = min(time, destroy * 2 + build);
			if (time == destroy * 2 + build)
				height = max(height, h);
		}
	}
	cout << time << " " << height;
}