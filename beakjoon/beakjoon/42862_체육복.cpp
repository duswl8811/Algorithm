// 2021-06-07 17:40
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// n:전체 학생수		lost:도난당한 번호들		reserve:여벌 체육복 있는 번호들
int solution(int n, vector<int> lost, vector<int> reserve) 
{
	int answer = 0;

	int student[32] = { 0 };

	for (int i : lost) student[i] += -1;

	//vector<int>::iterator lost_iter = lost.begin();
	//vector<int>::iterator reserve_iter = reserve.begin();
	//for (; lost_iter != lost.end(); ++lost_iter)
	//{
	//	if (*lost_iter == i)
	//	{
	//		pair<map<int, int>::iterator, bool> ret;
	//		ret = student.insert(pair<int, int>(i, -1));
	//		if (ret.second == true)
	//		{
	//			++lost_iter;
	//			break;
	//		}
	//		else
	//			student.erase(i);
	//		break;
	//	}
	//}

	for (int i : reserve) student[i] += +1;

	//for (; reserve_iter != reserve.end(); ++reserve_iter)
	//{
	//	if (*reserve_iter == i)
	//	{
	//		pair<map<int, int>::iterator, bool> ret;
	//		ret = student.insert(pair<int, int>(i, 1));
	//		if (ret.second == true)
	//		{
	//			++reserve_iter;
	//			break;
	//		}
	//		else
	//			student.erase(i);
	//		break;
	//	}
	//}

	//student.insert(pair<int, int>(i, 0));
	

	//for (auto& _pair : n_map)
	//	cout << _pair.first << " " << _pair.second << endl;

	for (int i = 1; i <= n; ++i)
	{
		//cout << i << " " << student[i] << endl;

		if (student[i] == 0 || student[i] == 1)
			continue;

		// -1인 경우

		// 앞검사
		if (i != 1)
		{
			if (student[i - 1] == 1)
			{
				student[i - 1] = 0;
				student[i] = 0;
				continue;
			}
		}

		// 뒤검사
		if (n < i + 1 )
		{
			if (student[i + 1] == 1)
			{
				student[i] = 0;
				student[i + 1] = 0;
				continue;
			}
		}
		else // 5번째가 마지막
		{
			if (student[i + 1] == 1)
			{
				student[i] = 0;
				student[i + 1] = 0;
				continue;
			}
		}

	}

	//cout << " 변경 완료 " << endl;
	//answer = n;
	//for (auto& _pair : student)
	for (int i = 1; i <= n; ++i)
	{
		//cout << _pair.first << " " << _pair.second << endl;
		//if (_pair.second == -1)
		//	--answer;
		if (student[i] != -1) 
			answer++;
	}


	return answer;
}


int main()
{
	vector<int> lost = { 4 };
	vector<int> reserve = { 5 };

	cout << solution(5, lost, reserve); // 5 
}