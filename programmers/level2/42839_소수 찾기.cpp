// 2021-08-24 23:08
// 2021-08-25 00:39
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> NumbersMaker(string numbers, string& making_number, vector<int> num_list)
{
	for (int i = 0; i < numbers.length(); i++)
	{
		string temp = numbers;

		// ���ڸ� ���ڿ��� ���� ���� -> ���ڰ� �ɰ��� 1
		// ������ �κ� temp���� ����
		// temp�� ���̰� 0�� �ƴϸ� �Լ� �����
		making_number.push_back(temp[i]);
		cout << "���� Ȯ�� �� " << temp << endl;
		temp.erase(i, i + 1);
		cout << "���� Ȯ�� �� " << temp << endl;
		//if(num_list.find(stoi(making_number))

		auto it = find(num_list.begin(), num_list.end(), stoi(making_number));
		if (it == num_list.end()) {
			num_list.push_back(stoi(making_number));
		}

		if (temp.length())
		{
			vector<int> temp_list(NumbersMaker(temp, making_number, num_list));

			vector<int>::iterator iter = temp_list.begin();
			advance(iter, distance(num_list.begin(), num_list.end()));
			num_list.insert(num_list.end(), iter, temp_list.end());
		}
		// ���ڸ� ���ڿ��� ���� ���� 7
		// ������ �κ� temp���� ����
		// temp�� ���̰� 0�̶� �ش� ���ڿ��� ���ڷ� �����Ͽ� return 
		else
		{
			cout << "���ڿ� �ϼ� " << making_number << endl;
			making_number.clear();
			return num_list;
		}
		// �Լ��� ���� �޾� ���� �ִ��� find �غ� �� ������ push

	}

	return num_list;
}

int solution(string numbers) {
	int answer = 0;

	int number = 0;
	string test = "";
	vector<int> num_list;
	vector<int> result_list(NumbersMaker(numbers, test, num_list));

	// 123

	// 1
	// 2 3
	// 3 2

	// ���� ���ڸ� key�� insert (�ߺ� �Ұ�)
	// size�� answer�� return

	return result_list.size();
}


int main()
{
	string numbers = "173";

	cout << "����� " << solution(numbers);
}