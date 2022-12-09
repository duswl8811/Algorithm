#include <iostream>

enum TYPE
{
	TYPE_ASCENDING, TYPE_DESCENDING, TYPE_MIXED, TYPE_END
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	const int input_time = 8;
	int n[input_time] = {};
	TYPE play_type = TYPE_END;

	for(int i = 0; i<input_time; ++i)
	{
		std::cin >> n[i];

		if(0 == i)
		{
			if((i + 1) == n[i])
			{
				play_type = TYPE_ASCENDING;
			}
			else if (input_time == n[i])
			{
				play_type = TYPE_DESCENDING;
			}
			else
			{
				play_type = TYPE_MIXED;
				break;
			}
		}
		else
		{
			if((TYPE_ASCENDING == play_type && (i + 1) != n[i])
				|| (TYPE_DESCENDING == play_type && (input_time - i) != n[i]))
			{
				play_type = TYPE_MIXED;
				break;
			}
		}
	}

	switch (play_type)
	{
	case TYPE_ASCENDING:
		std::cout << "ascending";
		break;
	case TYPE_DESCENDING:
		std::cout << "descending";
		break;
	case TYPE_MIXED:
		std::cout << "mixed";
		break;
	case TYPE_END:
		break;
	default:
		break;
	}
}