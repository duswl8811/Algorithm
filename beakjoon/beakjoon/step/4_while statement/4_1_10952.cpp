#include <iostream>

int main()
{
	int a = 0, b = 0;

	while (1) {
		std::cin >> a >> b;
		if (a == 0 && b == 0) 
			break;
		std::cout << a + b << "\n";
	}

	//int a = 1, b = 1;

	//while (a != 0 && b != 0) {
	//	std::cin >> a >> b;
	//	if (a != 0 && b != 0) std::cout << a + b << "\n";
	//}
}