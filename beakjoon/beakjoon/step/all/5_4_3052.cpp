#include <iostream>
#define SIZE 10

int main()
{
	int n = 0, diff_count = 0, result[SIZE] = { 0 };

	for (int i = 0; i < SIZE; ++i) {
		std::cin >> n;
		result[i] = n % 42;
		for (int j = 0; j < i; ++j)
			if (result[i] == result[j]) {
				--diff_count;
				break;
			}
		++diff_count;
	}
	
	std::cout << diff_count;
}