// 2023-01-31 17:10 - 17:24

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(auto& command : commands)
    {
        vector<int> command_result;

        vector<int>::iterator iter = command.begin();

        int start = *(iter++) - 1;
        int end = *(iter++);
        int search = *(iter) - 1;

        for(start; start < end; ++start)
        {
            command_result.push_back(array.at(start));
        }

        sort(command_result.begin(), command_result.end());
        answer.push_back(command_result.at(search));
    }

    return answer;
}


int main()
{
    vector<int> vArray = {1,5,2,6,3,7,4};
    vector<vector<int>> vCommands = {{2,5,3}, {4,4,1}, {1,7,3}};

    solution(vArray, vCommands);
}