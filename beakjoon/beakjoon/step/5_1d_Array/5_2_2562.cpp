#include <iostream>
#define SIZE 9

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int input[SIZE] = { 0 }, max = 0, max_index = 0;

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> input[i];
		if (input[i] > max) {
			max = input[i];
			max_index = i + 1;
		}
	}
	std::cout << max << "\n" << max_index;
}