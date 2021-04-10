#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	//std::cout.tie(NULL);

	int t = 0, a = 0, b = 0;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}
}