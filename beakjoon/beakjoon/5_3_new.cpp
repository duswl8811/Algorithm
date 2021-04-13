#include <iostream>

int main()
{
	int A = 0, B = 0, C = 0, result = 0, count[10] = { 0 };
	std::cin >> A >> B >> C;
	result = A * B * C;

	while ( result > 0 ) {
		++count[result % 10];
		result = result / 10;
	}
	for (int i = 0; i < 10; ++i)
		std::cout << count[i] << std::endl;
}