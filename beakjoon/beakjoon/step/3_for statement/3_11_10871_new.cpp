#include <iostream>

int main()
{
	int n = 0, x = 0;
	int* a = nullptr;
	std::cin >> n >> x;
	a = new int[n];

	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	for (int i = 0; i < n; i++)
		if (a[i]<x)
			std::cout << a[i] << " ";
}
// time : 4ms
// code : 234B