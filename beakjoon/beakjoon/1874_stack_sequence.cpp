#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::vector<int> vecOutput;
	std::vector<int> vecStack;
	int n = 0;
	std::cin >> n;
	int now_num = 1;

	while(n)
	{
		int iInput = 0;
		std::cin >> iInput;
		
		while(true)
		{
			if(now_num <= iInput)
			{
				vecOutput.push_back(1);
				vecStack.push_back(now_num++);
				continue;
			}

			if(iInput == vecStack.back())
			{
				vecStack.pop_back();
				vecOutput.push_back(0);
				break;
			}

			std::cout << "NO\n";
			return 0;
		}

		--n;
	}

	for (auto num : vecOutput)
	{
		if(0 == num)
			std::cout << "-\n";

		else if (1 == num)
			std::cout << "+\n";
	}
	return 0;
}