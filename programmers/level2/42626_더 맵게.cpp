// 2021-08-23 22:32
// 2021-08-23 23:35 // 부분 채점 완료 
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> scoville, int K);

int main()
{
	vector<int> scoville = { 1, 2, 3, 9, 10, 12 };
	int K = 7;

	int s = solution(scoville, K);

	cout << s << " ";
}

int solution(vector<int> scoville, int K) {
	int answer = 0;
	int lower_scovile_index[2] = { 0 };
	multiset<int> MS_scoville;

	for (int i = 0; i < scoville.size(); i++)
	{
		MS_scoville.insert(scoville[i]);
	}

	multiset<int>::iterator iter;
	for (iter = MS_scoville.begin(); iter != MS_scoville.end(); iter++)
	{
		if (*iter != 0)
			break;
	}

	if (iter == MS_scoville.end())
		return -1;

	// 반복

	while (true)
	{
		// 제일 낮은 스코빌 지수 음식 찾기
		iter = MS_scoville.begin();
		lower_scovile_index[0] = *iter++;
		lower_scovile_index[1] = *iter;

		// 음식 섞기
		int new_scovile = lower_scovile_index[0] + lower_scovile_index[1] * 2;
		MS_scoville.erase(MS_scoville.begin(), ++iter);
		MS_scoville.insert(new_scovile);

		answer++;

		if (K <= *(MS_scoville.begin()))
			break;

		// 예외 처리 수정후 통과 완료
		if (MS_scoville.size() < 2)
			return -1;
	}

	return answer;
}