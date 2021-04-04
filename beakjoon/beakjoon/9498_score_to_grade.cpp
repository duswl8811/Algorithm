#include <iostream>

int main()
{
	int A = 0;

	std::cin >> A;

	if (A >= 90) std::cout << "A" << std::endl;
	else if (A >= 80) std::cout << "B" << std::endl;
	else if (A >= 70) std::cout << "C" << std::endl;
	else if (A >= 60) std::cout << "D" << std::endl;
	else { std::cout << "F" << std::endl; };

	return 0;
}