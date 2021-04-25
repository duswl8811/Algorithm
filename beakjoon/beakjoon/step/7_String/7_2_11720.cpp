#include <iostream>

int main()
{
	//char arr[101] = { 0 };
	char a = 0;
	int n = 0, sum = 0;
	std::cin >> n;
	//std::cin.ignore();

	//std::cin.getline(arr, 102);

	while (n--) {
		std::cin >> a;
		//sum += arr[n] - '0';
		sum += a - '0';
	}
	
	std::cout << sum << std::endl;
}