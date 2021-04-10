#include <iostream>

int main()
{
	int year = 0;
	std::cin >> year;

	if ( year % 400 == 0 || ( year % 100 != 0 && year % 4 == 0 ) )
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}