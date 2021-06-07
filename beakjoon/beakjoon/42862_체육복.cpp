// 2021-06-07 17:40
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//// n:전체 학생수		lost:도난당한 번호들		reserve:여벌 체육복 있는 번호들
//int solution(int n, vector<int> lost, vector<int> reserve) {
//	int answer = 0;
//
//	// lost를 탐색
//	vector<int>::iterator lost_iter = lost.begin();
//
//	for (; lost_iter != lost.end(); lost_iter++)
//	{
//		vector<int>::iterator reserve_iter = reserve.begin();
//		for (; reserve_iter != reserve.end(); reserve_iter++)
//		{
//			// reserve가 lost가 확인할 수 있는 범위에 못미치면 확인할 필요 없음
//			if (*reserve_iter < *lost_iter - 1)
//				continue;
//			// reserve가 lost가 확인할 수 있는 범위를 넘어가면 더 검사할 필요 없음
//			else if (*lost_iter + 1 < *reserve_iter)
//				break;
//
//			if (*lost_iter == *(++reserve_iter))	// 자신 검사
//			{
//				lost_iter = lost.erase(lost_iter);
//				reserve_iter = reserve.erase(reserve_iter);
//				break;
//			}
//
//			if (*lost_iter == *(--reserve_iter))	// 자신 앞 검사
//			{
//				lost_iter = lost.erase(lost_iter);
//				reserve_iter = reserve.erase(reserve_iter);
//				break;
//			}
//
//			//++reserve_iter;
//			if (*lost_iter == *(reserve_iter + 2))	// 자신 검사
//			{
//				lost_iter = lost.erase(lost_iter);
//				reserve_iter = reserve.erase(reserve_iter);
//				break;
//			}
//		}
//	}
//
//	//	확인:reserve에 해당하는지 확인
//	// lost의 자신 확인 
//	// lost의 앞을 확인
//	// lost의 뒤를 확인
//	// 확인을 해서 reserve가 해당하는 경우 lost와 reserve 둘다 pop시킨다.
//	// 남은 lost의 사이즈를 n에서 빼고 answer에 대입후 return
//
//	return answer = n - lost.size();
//}

// n:전체 학생수		lost:도난당한 번호들		reserve:여벌 체육복 있는 번호들
int solution(int n, vector<int> lost, vector<int> reserve) 
{
	int answer = 0;

	// 전체 학생을 번호순으로 map에 넣음
	// 잃어버린 학생은 키로 -1을 가짐
	// 여벌 옷이 있는 학생은 1을 가짐
	map<int, int> n_map;

	for (int i = 1; i <= n; ++i)
	{
		vector<int>::iterator lost_iter = lost.begin();
		vector<int>::iterator reserve_iter = reserve.begin();
		for (; lost_iter != lost.end(); ++lost_iter)
		{
			if (*lost_iter == i)
			{
				pair<map<int, int>::iterator, bool> ret;
				ret = n_map.insert(pair<int, int>(i, -1));
				if (ret.second == true)
				{
					++lost_iter;
					break;
				}
				else
					n_map.erase(i);
				break;
			}
		}

		for (; reserve_iter != reserve.end(); ++reserve_iter)
		{
			if (*reserve_iter == i)
			{
				pair<map<int, int>::iterator, bool> ret;
				ret = n_map.insert(pair<int, int>(i, 1));
				if (ret.second == true)
				{
					++reserve_iter;
					break;
				}
				else
					n_map.erase(i);
				break;
			}
		}

		n_map.insert(pair<int, int>(i, 0));
	}

	for (auto& _pair : n_map)
		cout << _pair.first << " " << _pair.second << endl;

	//map<int, int>::iterator map_iter = n_map.begin();
	// 1. 둘다 value를 0으로 변경하여, 0인 것만 세기
	//for (; map_iter != n_map.end();)
	//{
	//	
	//	cout << map_iter->first << " " << map_iter->second << endl;

	//	if (map_iter->second == 0 || map_iter->second == 1)
	//	{
	//		++map_iter;
	//		continue;
	//	}

	//	

	//	// 명시 없어도 됨
	//	else if (map_iter->second == -1)
	//	{
	//		if (--map_iter != n_map.begin())
	//			auto before_iter = map_iter;
	//		auto my_iter = ++map_iter;
	//		auto after_iter = ++map_iter;
	//		// 앞에꺼 확인
	//		if (before_iter != n_map.begin())
	//		{
	//			if (my_iter->second == 1)
	//			{
	//				before_iter->second = 0;
	//				my_iter->second = 0;
	//				continue;
	//			}
	//		}
	//		// 뒤에꺼 확인
	//		if (map_iter != n_map.end())
	//		{
	//			if (map_iter->second == 1)
	//			{
	//				--map_iter->second = 0;
	//				(++map_iter)->second = 0;
	//				++map_iter;
	//				continue;
	//			}
	//			else
	//			{
	//				++map_iter;
	//				continue;
	//			}
	//		}

	//	}
	//}
	for (int i = 1; i <= n; ++i)
	{
		cout << i << " " << n_map[i] << endl;

		if (n_map[i] == 0 || n_map[i] == 1)
			continue;

		// -1인 경우

		// 앞검사
		if (i != 1)
		{
			if (n_map[i - 1] == 1)
			{
				n_map[i - 1] = 0;
				n_map[i] = 0;
				continue;
			}
		}

		// 뒤검사
		if (n < i + 1 )
		{
			if (n_map[i + 1] == 1)
			{
				n_map[i] = 0;
				n_map[i + 1] = 0;
				continue;
			}
		}
		else // 5번째가 마지막
		{
			if (n_map[i + 1] == 1)
			{
				n_map[i] = 0;
				n_map[i + 1] = 0;
				continue;
			}
		}

	}

	cout << " 변경 완료 " << endl;
	answer = n;
	for (auto& _pair : n_map)
	{
		cout << _pair.first << " " << _pair.second << endl;
		if (_pair.second == -1)
			--answer;
	}


	// 2. value가 1인 사람을 삭제



	return answer;
}


int main()
{
	vector<int> lost = { 4 };
	vector<int> reserve = { 5 };

	cout << solution(5, lost, reserve); // 5 
}