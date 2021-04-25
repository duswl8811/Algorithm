#include <iostream>

int main()
{
	int n = 0, m = 0, card[100] = { 0 }, max = 0, sum = 0;
	std::cin >> n >> m;

	for (int i = 0; i < n; ++i)
		std::cin >> card[i];

	for(int i = 0; i < n ; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < n; ++k) {
				if (i == j || j == k || i == k)
					continue;
				sum = card[i] + card[j] + card[k];
				if (sum > max && sum <= m)
					max = sum;
			}
	std::cout << max << "\n";
}