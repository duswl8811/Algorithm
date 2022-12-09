#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	const int times = 5;
	int n = 0;
	int verification_number = 0;
	
	for(int i = 0; i < times; ++i)
	{
		std::cin >> n;
		verification_number += n * n;
	}

	std::cout << verification_number % 10 << "\n";
}