#include <iostream>

int main()
{
	int A = 0, B = 0;

	std::cin >> A >> B;

	if (A > B)
		std::cout << ">" << std::endl;
	else if (A < B)
		std::cout << "<" << std::endl;
	else if (A == B)
		std::cout << "==" << std::endl;
	else {};

	return 0;
}