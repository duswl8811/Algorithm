#include <iostream>

int main()
{
	int n = 0, a = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		a += i;

	std::cout << a << std::endl;
}