#include <iostream>

int main()
{
	int* N_score = nullptr;
	int C = 0, N = 0, all_score = 0, cnt = 0;
	std::cin >> C;
	std::cout << std::fixed;
	std::cout.precision(3);

	while (C--) {
		std::cin >> N;
		N_score = new int[N];

		for (int i = 0; i < N; ++i) {
			std::cin >> N_score[i];
			all_score += N_score[i];
		}
		all_score /= N;

		for (int i = 0; i < N; ++i) 
			if (N_score[i] > all_score) cnt++;

		std::cout << (float)cnt / N * 100 << "%\n";
		all_score = 0;
		cnt = 0;
	}
}