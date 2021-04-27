#include<iostream>

int main(void) {
	int n = 0;
	int * arr = nullptr;

	std::cin >> n;
	arr = new int[n];

	for (int i = 0; i< n; i++) 
		std::cin >> arr[i];
	
	int tmp;

	for (int i = 0; i<n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i<n; i++) 
		std::cout << arr[i] << "\n";
	
	delete[]arr;
}
