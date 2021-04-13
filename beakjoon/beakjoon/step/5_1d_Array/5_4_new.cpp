#include <iostream>
#define SIZE 42

int main()
{
	int n = 0, diff_count = 0, result[SIZE] = { 0 };

	for (int i = 0; i < 10; ++i) {
		std::cin >> n;
		++result[n % SIZE];
	}

	for (int i = 0; i < SIZE; ++i) 
		if (result[i])
			++diff_count;

	std::cout << diff_count;
}