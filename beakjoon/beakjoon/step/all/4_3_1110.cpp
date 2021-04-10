#include <iostream>

int main()
{
	int n = 0, nn = 0, count = 0;
	std::cin >> n;
	nn = n;

	while (1) {
		int a = nn / 10, b = nn % 10;
		nn = b * 10 + (a + b) % 10;
		count++;
		if (n == nn)
			break;
	}
	std::cout << count << std::endl;
}