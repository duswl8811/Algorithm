// 2021-06-07 17:40
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//// n:��ü �л���		lost:�������� ��ȣ��		reserve:���� ü���� �ִ� ��ȣ��
//int solution(int n, vector<int> lost, vector<int> reserve) {
//	int answer = 0;
//
//	// lost�� Ž��
//	vector<int>::iterator lost_iter = lost.begin();
//
//	for (; lost_iter != lost.end(); lost_iter++)
//	{
//		vector<int>::iterator reserve_iter = reserve.begin();
//		for (; reserve_iter != reserve.end(); reserve_iter++)
//		{
//			// reserve�� lost�� Ȯ���� �� �ִ� ������ ����ġ�� Ȯ���� �ʿ� ����
//			if (*reserve_iter < *lost_iter - 1)
//				continue;
//			// reserve�� lost�� Ȯ���� �� �ִ� ������ �Ѿ�� �� �˻��� �ʿ� ����
//			else if (*lost_iter + 1 < *reserve_iter)
//				break;
//
//			if (*lost_iter == *(++reserve_iter))	// �ڽ� �˻�
//			{
//				lost_iter = lost.erase(lost_iter);
//				reserve_iter = reserve.erase(reserve_iter);
//				break;
//			}
//
//			if (*lost_iter == *(--reserve_iter))	// �ڽ� �� �˻�
//			{
//				lost_iter = lost.erase(lost_iter);
//				reserve_iter = reserve.erase(reserve_iter);
//				break;
//			}
//
//			//++reserve_iter;
//			if (*lost_iter == *(reserve_iter + 2))	// �ڽ� �˻�
//			{
//				lost_iter = lost.erase(lost_iter);
//				reserve_iter = reserve.erase(reserve_iter);
//				break;
//			}
//		}
//	}
//
//	//	Ȯ��:reserve�� �ش��ϴ��� Ȯ��
//	// lost�� �ڽ� Ȯ�� 
//	// lost�� ���� Ȯ��
//	// lost�� �ڸ� Ȯ��
//	// Ȯ���� �ؼ� reserve�� �ش��ϴ� ��� lost�� reserve �Ѵ� pop��Ų��.
//	// ���� lost�� ����� n���� ���� answer�� ������ return
//
//	return answer = n - lost.size();
//}

// n:��ü �л���		lost:�������� ��ȣ��		reserve:���� ü���� �ִ� ��ȣ��
int solution(int n, vector<int> lost, vector<int> reserve) 
{
	int answer = 0;

	// ��ü �л��� ��ȣ������ map�� ����
	// �Ҿ���� �л��� Ű�� -1�� ����
	// ���� ���� �ִ� �л��� 1�� ����
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
	// 1. �Ѵ� value�� 0���� �����Ͽ�, 0�� �͸� ����
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

	//	// ��� ��� ��
	//	else if (map_iter->second == -1)
	//	{
	//		if (--map_iter != n_map.begin())
	//			auto before_iter = map_iter;
	//		auto my_iter = ++map_iter;
	//		auto after_iter = ++map_iter;
	//		// �տ��� Ȯ��
	//		if (before_iter != n_map.begin())
	//		{
	//			if (my_iter->second == 1)
	//			{
	//				before_iter->second = 0;
	//				my_iter->second = 0;
	//				continue;
	//			}
	//		}
	//		// �ڿ��� Ȯ��
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

		// -1�� ���

		// �հ˻�
		if (i != 1)
		{
			if (n_map[i - 1] == 1)
			{
				n_map[i - 1] = 0;
				n_map[i] = 0;
				continue;
			}
		}

		// �ڰ˻�
		if (n < i + 1 )
		{
			if (n_map[i + 1] == 1)
			{
				n_map[i] = 0;
				n_map[i + 1] = 0;
				continue;
			}
		}
		else // 5��°�� ������
		{
			if (n_map[i + 1] == 1)
			{
				n_map[i] = 0;
				n_map[i + 1] = 0;
				continue;
			}
		}

	}

	cout << " ���� �Ϸ� " << endl;
	answer = n;
	for (auto& _pair : n_map)
	{
		cout << _pair.first << " " << _pair.second << endl;
		if (_pair.second == -1)
			--answer;
	}


	// 2. value�� 1�� ����� ����



	return answer;
}


int main()
{
	vector<int> lost = { 4 };
	vector<int> reserve = { 5 };

	cout << solution(5, lost, reserve); // 5 
}