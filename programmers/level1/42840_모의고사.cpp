#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers);


int main()
{
	vector<int> answers;
	answers.push_back(2);
	answers.push_back(1);
	answers.push_back(2);
	answers.push_back(3);
	answers.push_back(2);
	answers.push_back(4);
	answers.push_back(2);
	answers.push_back(5);
	answers.push_back(2);
	answers.push_back(1);
	answers.push_back(2);
	answers.push_back(3);

	vector<int> answer = solution(answers);

	for (int a : answer)
	{
		cout << "\n" << a << endl;
	}


}

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int count = 0, max = 0;
	int a = 0, b = 0, c = 0;
	int b_index[4] = { 1,3,4,5 };
	int c_index[5] = { 3,1,2,4,5 };
	while (answers.size() != count)
	{
		// 1::
		if (count % 5 + 1 == answers.at(count))
			++a;

		// 2:: 2, 1, 2, 3, 2, 4, 2, 5,
		if ((count % 2 == 0 && answers.at(count) == 2) || (count % 2 == 1 && answers.at(count) == b_index[((count + 1) / 2 - 1) % 4]))
		{
			if (count % 2 == 0 && answers.at(count) == 2)
				cout << count << "a ";
			if (count % 2 == 1 && answers.at(count) == b_index[((count + 1) / 2 - 1) % 4])
				cout << count << "b" << ((count + 1) / 2 % 4) - 1 << " ";

			++b;
		}

		// 3:: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5,
		// 3 1 2 4 5
		if (answers.at(count) == c_index[count / 2 % 5])
			++c;
		++count;
	}

	cout << "ans" << a << " " << b << " " << c << " ";
	max = a < b ? (b < c ? c : b) : (a < c ? c : a);

	if (max == 0)
		max = -1;

	if ( max == a)
		answer.push_back(1);
	if (max == b)
		answer.push_back(2);
	if (max == c)
		answer.push_back(3);

	return answer;
}