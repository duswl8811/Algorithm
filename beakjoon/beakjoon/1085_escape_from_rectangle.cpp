#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int x = 0, y = 0, w = 0, h = 0;
	int target = 0, result = 1000;
	std::cin >> x >> y >> w >> h;

	result = x;

	for(int i = 0; i < 3; ++i)
	{
		switch (i)
		{
		case 0 :
			target = w - x;
			break;
		case 1:
			target = y;
			break;
		case 2:
			target = h - y;
			break;
		default:
			break;
		}

		if (target < result)
			result = target;
	}

	std::cout << result << "\n";
}