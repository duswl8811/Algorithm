// 2021-06-08 16:40 - 19:00		only testcase:5 is no-pass;
// 2021-06-08 19:30 - 20:15		all testcase is pass;
// 2021-06-08 20:30 - 20:50		fix code
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
	string answer = new_id;
	string data = "-_.";
	const int min_size = 2;
	const int max_size = 15;

	// 1. upper -> loewr
	for (int i = 0; i < answer.size(); i++)
	{
		if (isupper(answer[i]))
			answer[i] = (char)tolower(answer[i]);
	}

	// 2. able -> lower alpha, digit, '-', '_', '.'
	for (int i = 0; i < answer.size(); ++i)
	{
		if (islower(answer[i]) || isdigit(answer[i]) || data.find(answer[i]) != string::npos)
			continue;
		else
		{
			answer.erase(i, 1);
			--i;
		}
	}

	// 3. ".." -> "."
	for (int i = 1; i < answer.size(); i++)
	{
		if (answer[i] == '.')
			if (answer[i - 1] == '.' || answer[i + 1] == '.')
				answer.erase(i--, 1);
	}

	// 4. front & back != '.'
	for (int i = 0; i < answer.size();)
	{
		if (answer[i] == '.')
		{
			if (i == 0)
			{
				answer.erase(i, 1);
				continue;
			}

			if (i == answer.size() - 1)
			{
				answer.pop_back();
				--i;
				continue;
			}

			++i;
		}
		else
			++i;
	}

	for (;;)
	{
		int size = answer.size();

		// 5. front == '\0' -> front = 'a'
		if (!size)
		{
			answer.push_back('a');
			continue;
		}
		// 7. if size() < 3 then back + back until 3 == size() 
		else if (size <= min_size)
		{
			answer.push_back(answer.back());
		}
		// 6. if 15 < size() then next delete
		else if (max_size < size)
		{
			answer.erase(max_size);
			if (answer.back() == '.')
				answer.pop_back();
			break;
		}
		else
			break;
	}

	return answer;
}

int main()
{
	string new_id = { "b......@" };

	cout << solution(new_id);
}