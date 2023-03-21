#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct member {
	string name;
	int age;
	int count;
};
bool cmp(member a, member  b) {
	if (a.age == b.age) return a.count < b.count;
	return a.age < b.age;
}

int main() {
	int N, cnt = 0;
	cin >> N;
	vector<member>list;
	member temp;
	for (int i = 0; i < N; i++) {
		cin >> temp.age >> temp.name;
		temp.count = (++cnt);
		list.push_back(temp);
	}
	sort(list.begin(), list.end(), cmp);
	for (int i = 0; i < N; i++)
		cout << list[i].age << " " << list[i].name << "\n";
	cout << endl;
	return 0;
}
