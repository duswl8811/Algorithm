#include <iostream>

int Fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}


int main()
{
	int n = 0;
	std::cin >> n;

	std::cout << Fibonacci(n) << "\n";
}