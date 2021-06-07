// 2021-06-07 17:40 - 21:10
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// n:all_student_count	lost:lost_student	reserve:reserve_student
int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer = 0;
	int student[32] = { 0 };

	for (int i : lost) student[i] += -1;
	for (int i : reserve) student[i] += +1;
	for (int i = 1; i <= n; ++i)
	{
		if (student[i] == 0 || student[i] == 1)
			continue;

		if (student[i - 1] == 1)
		{
			student[i - 1] = 0;
			student[i] = 0;
			continue;
		}
		if (student[i + 1] == 1)
		{
			student[i] = 0;
			student[i + 1] = 0;
			continue;
		}
	}

	for (int i = 1; i <= n; ++i)
		if (student[i] != -1)
			answer++;

	return answer;
}


int main()
{
	vector<int> lost = { 4 };
	vector<int> reserve = { 5 };

	cout << solution(5, lost, reserve); // 5 
}