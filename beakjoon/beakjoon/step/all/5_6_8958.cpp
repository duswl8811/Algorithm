#include <iostream>

int main()
{
	char quize[80] = { 0 };
	int testcase_num = 0, accumulated_score = 0, all_score = 0;
	
	std::cin >> testcase_num;

	while (testcase_num--) {
		std::cin >> quize;

		for (int i = 0; quize[i] != NULL; ++i) {
			if (quize[i] == 'O') {
				accumulated_score++;
				all_score += accumulated_score;
			}
			else
				accumulated_score = 0;
		}

		std::cout << all_score << std::endl;
		accumulated_score = 0;
		all_score = 0;
	}
}