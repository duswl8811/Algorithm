#include <iostream>
#include <vector>

long long sum(std::vector<int> &a);

int main()
{

	return 0;
}

long long sum(std::vector<int> &a)
{
	int ans = 0;
	for (int i = 0; i < a.size(); ++i) {
		ans += a[i];
	}

	return ans;
}

long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (std::vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
		ans += *iter;
	return ans;
}
