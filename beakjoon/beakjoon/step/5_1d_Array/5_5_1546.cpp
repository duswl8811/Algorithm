#include <iostream>

int main()
{
	int subject_num = 0, subject_score = 0, max_score = 0, sum_score = 0;
	std::cin >> subject_num;

	for (int i = 0; i < subject_num; ++i) {
		std::cin >> subject_score;
		if (subject_score > max_score)
			max_score = subject_score;
		sum_score += subject_score;
	}

	std::cout << (float)sum_score / (float)max_score * 100 / subject_num << "\n";
}