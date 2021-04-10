#include <iostream>

int main()
{
	int t = 0, a = 0, b = 0;
	std::cin >> t;

	for (int i = 1; i <= t; i++) {
		std::cin >> a >> b;
		std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
	}
}