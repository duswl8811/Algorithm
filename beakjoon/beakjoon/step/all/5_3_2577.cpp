#include <iostream>

int main()
{
	int A = 0, B = 0, C = 0, digit_count = 0, result = 0, result_pieces[9] = { 0 }, count[10] = { 0 };
	std::cin >> A >> B >> C;
	result = A * B * C;

	while (result>0)
	{
		result_pieces[digit_count] = result % 10;
		result = result / 10;
		++digit_count;
	}

	for (int i = 0; i < digit_count; ++i) {
		for (int j = 0; j < 10; ++j) 
			if (j == result_pieces[i]) {
				++count[j];
				break;
			}
	}

	for (int i = 0; i < 10; ++i)
		std::cout << count[i] << std::endl;
}