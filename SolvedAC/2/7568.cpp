#include <iostream>
#include <vector>
using namespace std;
struct person {
	int x;
	int y;
	int prize;
};
int main() {
	person temp;
	temp.prize = 1;
	vector<person> list;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp.x >> temp.y;
		list.push_back(temp);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (list[j].x > list[i].x && list[j].y > list[i].y)
				list[i].prize++;
		}
		cout << list[i].prize << "\n";
	}
}
