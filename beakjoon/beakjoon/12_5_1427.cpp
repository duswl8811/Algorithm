#include<iostream>
#include<algorithm>
#include<cstring>

int main(void)
{
	char arr[10];

	std::cin >> arr;

	std::sort(arr, arr + strlen(arr), std::greater<int>());
	for (int i = 0; i<strlen(arr); i++) 
		std::cout << arr[i];
}