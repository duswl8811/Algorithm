#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n-1; j >= 0; j--) {
			if ( i >= j)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
}