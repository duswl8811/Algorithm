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

		// 글자를 문자열에 새로 저장 -> 숫자가 될거임 1
		// 저장한 부분 temp에서 삭제
		// temp의 길이가 0이 아니면 함수 재시작
		making_number.push_back(temp[i]);
		cout << "삭제 확인 전 " << temp << endl;
		temp.erase(i, i + 1);
		cout << "삭제 확인 후 " << temp << endl;
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
		// 글자를 문자열에 새로 저장 7
		// 저장한 부분 temp에서 삭제
		// temp의 길이가 0이라서 해당 문자열을 숫자로 변경하여 return 
		else
		{
			cout << "문자열 완성 " << making_number << endl;
			making_number.clear();
			return num_list;
		}
		// 함수의 값을 받아 값이 있는지 find 해본 뒤 없으면 push

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

	// 만든 숫자를 key로 insert (중복 불가)
	// size를 answer로 return

	return result_list.size();
}


int main()
{
	string numbers = "173";

	cout << "결과값 " << solution(numbers);
}