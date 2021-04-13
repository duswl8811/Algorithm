#include<iostream>
#include<set>
using namespace std;

int main() {
	set<int> s;
	int x;
	for (int i = 0; i<10; ++i) cin >> x, s.insert(x % 42);
	cout << s.size();
}