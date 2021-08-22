// 2021-08-22 20:13
// 2021-08-22 21:08 코드 실행 통과 & 채점 완료
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds);

int main()
{
	vector<int> progresses = { 93, 30, 55 };
	vector<int> speeds = { 1, 30, 5 };

	vector<int> s = solution(progresses, speeds);

	for (int a : s)
	{
		cout << a << " ";
	}
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;

	while (progresses.size())
	{
		while (progresses.front() < 100)
		{
			// progresses 전체를 speeds만큼 진행
			for (int i = 0; i < progresses.size(); i++)
			{
				progresses[i] += speeds[i];
			}
		}

		int count = 0;
		bool flag = false;
		while (true)
		{
			// 작업완료인 기능 배포
			if (100 <= progresses.front())
			{
				count++;
				progresses.erase(progresses.begin());
				speeds.erase(speeds.begin());
				flag = true;

				if (!progresses.size())
				{
					answer.push_back(count);
					break;
				}
			}
			else
			{
				if (flag)
				{
					answer.push_back(count);
				}
				break;
			}
		}
	}

	return answer;
}