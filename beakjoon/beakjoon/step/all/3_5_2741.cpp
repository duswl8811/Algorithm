#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n = 0;
	std::cin >> n;

	for(int i = 1; i<=n; i++)
		std::cout << i << "\n";
}