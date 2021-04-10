#include <iostream>

int main()
{
	int A = 0, B = 0;
	std::cin >> A >> B;

	std::cout << A + B << std::endl;
	std::cout << A - B << std::endl;
	std::cout << A * B << std::endl;
	std::cout << A / B << std::endl; // 오차범위 제한이 없어서 int 사용
	std::cout << A % B << std::endl;
}