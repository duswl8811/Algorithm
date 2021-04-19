#include <iostream>

int main()
{
	int n = 0, com_dif = 0, result = 0;
	std::cin >> n;

	if (n < 100)
		result = n;
	else {
		result = 99;

		for (int i = 100; i <= n; i++) {
			com_dif = (i % 10) - ((i / 10) % 10);

			int j = i;
			while (true) {
				j /= 10;

				if ((j % 10) - ((j / 10) % 10) != com_dif && j>9)
					break;

				if (j == 0) {
					result++;
					break;
				}
			}
		}
	}
	std::cout << result << "\n";
}