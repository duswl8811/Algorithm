#include <iostream>

int main()
{
	char arr[101] = { 0 };
	int n = 0, sum = 0;
	std::cin >> n; // 1<=N<=100
	std::cin.ignore();

	std::cin.getline(arr, 102);

	while (n--)
		sum += arr[n] - '0';
	
	std::cout << sum << std::endl;
}