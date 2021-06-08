// 2021-06-08 16:40 - 19:00		only testcase:5 is no-pass;
// 2021-06-08 19:30 - 20:15
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
	string answer = new_id;
	string data = "-_.";

	// "...!@BaT#*..y.abcdefghijklm"	-> "bat.y.abcdefghi"
	// 1. 대문자 -> 소문자
	// "...!@BaT#*..y.abcdefghijklm"	-> "...!@bat#*..y.abcdefghijklm"
	//for (int i = 0; i<answer.size(); i++)
	//	answer[i] = (char)tolower(answer[i]);
	transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
	// 2. 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)만 허가
	// "...!@bat#*..y.abcdefghijklm"	-> "...bat..y.abcdefghijklm"
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
	// "...bat..y.abcdefghijklm"		-> ".bat.y.abcdefghijklm"
	for (int i = 1; i < answer.size(); i++)
	{
		if (answer[i] == '.')
			if (answer[i + 1] == '.' || answer[i - 1] == '.')
				answer.erase(i--, 1);
	}

	// 4. front & back != '.'
	// ".bat.y.abcdefghijklm"			-> "bat.y.abcdefghijklm"
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
				answer.erase(i, 1);
				--i;
				continue;
			}
			++i;
		}
		else
			++i;
	}

	// 5. front == '\0' -> front = 'a'
	// no change 


	// 6. if 15 < size() then next delete
	// "bat.y.abcdefghijklm"			-> "bat.y.abcdefghi"


	// 7. if size() < 3 then back + back until 3 == size() 
	// no change 


	// 1 ~ 4
	//for(int i = 0; i < answer.size();)
	//{
	//	if (isalpha(answer[i]))
	//	{
	//		answer[i] = (char)tolower(answer[i]);
	//		++i;
	//		continue;
	//	}

	//	if (isdigit(answer[i]))
	//	{
	//		++i;
	//		continue;
	//	}

	//	//string::size_type n;
	//	if (answer[i] == '.')
	//	{
	//		if (i == 0)
	//		{
	//			answer.erase(i, 1);
	//			continue;
	//		}

	//		if (answer[i + 1] == '.' || answer[i - 1] == '.')
	//		{
	//			answer.erase(i--, 1);
	//			if (i == answer.size())
	//			{
	//				--i;
	//				continue;
	//			}
	//		}
	//		
	//		if (i == answer.size() - 1)
	//		{
	//			answer.erase(i--, 1);
	//		}
	//		++i;
	//		continue;
	//	}

	//	if (data.find(answer[i]) == string::npos)
	//	{
	//		answer.erase(i, 1);
	//		if (answer[i] == '\0')
	//			--i;
	//		continue;
	//	}

	//	i++;
	//}

	// 5 ~ 7
	for (;;)
	{
		int size = answer.size();

		if (!size)
		{
			answer.push_back('a');
			continue;
		}
		else if (size <= 2)
		{
			answer.push_back(answer.back());
		}
		else if (15 < size)
		{
			answer.erase(15);
			if (answer[14] == '.')
				answer.erase(14, 1);
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