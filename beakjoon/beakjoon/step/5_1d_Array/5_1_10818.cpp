#include <iostream>

int main()
{
	int n = 0, max = 0 , min = 0;
	int* a = nullptr;

	std::cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (i == 0) {
			max = a[i];
			min = a[i];
		}
		else
			a[i] > max ? max = a[i] : a[i] < min ? min = a[i] : 0;
	}
	std::cout << min << " " << max << std::endl;
	delete [] a;
}