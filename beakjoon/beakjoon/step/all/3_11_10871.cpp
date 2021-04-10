#include <iostream>

int main()
{
	int n = 0, x = 0, a = 0;
	std::cin >> n >> x;

	for (int i = 0; i < n; i++) {
		std::cin >> a;
		if (a < x)
			std::cout << a << " ";
	}
}
// time : 476ms
// code : 173B