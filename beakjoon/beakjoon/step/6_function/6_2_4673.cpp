#include <iostream>

int d(int n);

int main()
{
	char selfnum_arr[10001] = { 0 };

	for (int i = 1; i < 10001; i++) {
		int k = d(i);
		if (k < 10001)
			selfnum_arr[k] = true;
	}
	for (int i = 1; i < 10001; i++) 
		if (!selfnum_arr[i])
			std::cout << i << "\n";
}

int d(int n)
{
	int sum = n;

	while (n>0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}