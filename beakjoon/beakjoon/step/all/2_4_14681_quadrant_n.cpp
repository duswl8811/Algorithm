#include <iostream>

int main()
{
	int x = 0, y = 0, n = 0;
	std::cin >> x >> y;
	//if (x > 0) { // ¾ç¼ö
	//	if (y > 0)	std::cout << "1" << std::endl;
	//	else		std::cout << "4" << std::endl;
	//}
	//else {
	//	if (y > 0)	std::cout << "2" << std::endl;
	//	else		std::cout << "3" << std::endl;
	//}
	if (x > 0)
		if (y > 0) n = 1;
		else n = 4;
	else
		if (y > 0) n = 2;
		else n = 3;

	std::cout << n << std::endl;
}