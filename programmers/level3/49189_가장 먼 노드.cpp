// 2021-08-23 21:45
// 2021-08-23 22:05
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
	int answer = 0;
	queue<int> q; // ������ �� ��
	bool linked_node[20001][20001] = { false };
	bool visited[20001] = { false };
	int distance[20001] = { 0 };

	// ��� ����
	for (int i = 0; i < edge.size(); i++)
	{
		linked_node[edge[i][0]][edge[i][1]] = true;
		linked_node[edge[i][1]][edge[i][0]] = true;
	}

	q.push(1);
	visited[1] = true;

	// BFS�� �ִܰŸ� ã��
	while (!q.empty())
	{
		int temp = q.front();   // ���� Ž���� ���
		q.pop();

		for (int i = 2; i <= n; ++i)  // 0,1�� Ž�� �ʿ�X
		{
			if (linked_node[temp][i] == true && visited[i] == false)
			{
				q.push(i);
				visited[i] = true;
				// 1�� n �ִܰŸ� ����
				distance[i] = distance[temp] + 1;
			}
		}
	}

	// max �ִܰŸ��� ���� 
	int max_distance = 0;

	for (int i = 1; i <= n; ++i)
	{
		max_distance = max_distance < distance[i] ? distance[i] : max_distance;
	}

	// max �ִܰŸ��� ���� �ִܰŸ��� ���� ��� ���� count�� �� return answer 
	for (int i = 1; i <= n; ++i)
	{
		if (distance[i] == max_distance)
			answer++;
	}

	return answer;
}