#include <iostream>

int main()
{
	int A = 0, B = 0, C = 0;
	std::cin >> A >> B;

	//C = (B % 10);
	//std::cout << C * (A % 10) + C * (A % 100 - A % 10) + C * (A % 1000 - A % 100) << std::endl;
	//C = (B % 100 - B % 10);
	//std::cout << (C * (A % 10) + C * (A % 100 - A % 10) + C * (A % 1000 - A % 100)) / 10 << std::endl;
	//C = (B % 1000 - B % 100);
	//std::cout << (C * (A % 10) + C * (A % 100 - A % 10) + C * (A % 1000 - A % 100)) / 100 << std::endl;
	//std::cout << A * B << std::endl;

	std::cout << A * (B % 10) 				<< std::endl;
	std::cout << A * ((B % 100) / 10) 		<< std::endl;
	std::cout << A * (B / 100) 				<< std::endl;
	std::cout << A * B 						<< std::endl;
}