#include <iostream>

int main()
{
	int t = 0, a = 0, b = 0;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
	}

	//for (; t > 0; t--) {
	//	std::cin >> a >> b;
	//	std::cout << a + b << std::endl;
	//}

	//while (t--) {
	//	std::cin >> a >> b;
	//	std::cout << a + b << std::endl;
	//}
}