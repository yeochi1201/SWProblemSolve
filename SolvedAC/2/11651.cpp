#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct point {
	int x;
	int y;
};
bool cmp(point a, point b) {
	if (a.y == b.y)return a.x < b.x;
	else return a.y < b.y;
}
int main() {
	int n;
	point tmp;
	vector<point>list;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp.x >> tmp.y;
		list.push_back(tmp);
	}
	sort(list.begin(), list.end(), cmp);
	for (int i = 0; i < n; i++)
		cout << list[i].x << " " << list[i].y << "\n";
}