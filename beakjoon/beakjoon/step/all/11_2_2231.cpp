#include <iostream>

int main()
{
	int n = 0, N = 0, count = 0;
	std::cin >> n;
	N = n;

	while (N) {
		N /= 10;
		++count;
	}
	N = n - count * 9;

	while (true) {
		int i = N, sum = N;
		while (i) {
			sum += i % 10;
			i /= 10;
		}
		if (n == sum) break;
		else if (n <= N) {	N = 0; break;	}
		else N++;
	}

	std::cout << N << "\n";
}