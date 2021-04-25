#include <iostream>

int Factorial(int N)
{
	if (N <= 1)
		return 1;
	else
		return N * Factorial(N - 1);
}

int main()
{
	int n = 0; // 0 <= n <= 12
	std::cin >> n;

	std::cout << Factorial(n) << "\n";
}