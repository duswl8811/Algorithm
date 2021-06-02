#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion);


int main()
{
	vector<string> participant;
	vector<string> completion;

	participant.push_back("mislav");
	completion.push_back("stanko");
	participant.push_back("stanko");
	completion.push_back("ana");
	participant.push_back("mislav");	
	completion.push_back("mislav");
	participant.push_back("ana");


	cout << solution(participant, completion);
}


string solution(vector<string> participant, vector<string> completion) {
	string answer = "";

	sort(participant.begin(), participant.end() );
	sort(completion.begin(), completion.end() );

	//vector<string>::iterator p_iter = completion.begin();
	//vector<string>::iterator c_iter = completion.begin();
	//for(;c_iter != completion.end();)
	//{
	//	if (*p_iter == *c_iter)
	//	{
	//		++p_iter; ++c_iter;
	//	}
	//	else
	//		return answer = *p_iter;
	//}

	for (int index = 0; index != completion.size();)
	{
		if (participant[index] == completion[index])
		{
			++index;
		}
		else
		{
			return answer = participant[index];
		}
	}

	return answer = participant.back();
}


//string solution(vector<string> participant, vector<string> completion) {
//	string answer = "";
//
//	vector<string>::iterator c_iter = completion.begin();
//	while (participant.size() != 1)
//	{
//		vector<string>::iterator t_iter;
//		t_iter = find(participant.begin(), participant.end(), *c_iter);
//		if (t_iter != participant.end())
//		{
//			participant.erase(t_iter);
//			c_iter = completion.erase(c_iter);
//		}
//		else
//		{
//			return answer = *t_iter;
//		}
//	}
//
//	return answer = participant.front();
//}