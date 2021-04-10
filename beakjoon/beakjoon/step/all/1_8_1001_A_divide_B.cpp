#include <iostream>

int main()
{
	double A = 0, B = 0;
	std::cin >> A >> B;
	std::cout << std::fixed; // 잘은 모르겠지만 이 줄이 꼭 필요
	std::cout.precision(30); // 소숫점 자리 늘리기
	std::cout << A / B;
}