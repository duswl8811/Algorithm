#include <iostream>

int main()
{
	char dial[16] = { 0 }, ref['Z'-'A' + 1] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

	int time = 0;
	std::cin >> dial;

	for (int i = 0; dial[i] != 0; ++i) 
		time += ref[dial[i] - 'A'];

	std::cout << time << "\n";
}