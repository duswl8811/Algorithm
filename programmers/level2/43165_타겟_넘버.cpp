// 2023-01-31 17:33 - 18:28
// comment :    Commands is not essential.
//              Use int& answer.

#include <string>
#include <vector>

using namespace std;

void dfs(const vector<int>& numbers, vector<vector<int>>& commands, vector<int>& command, int target, int sign)
{
    vector<int> command_cpy{ command };

    int result = 0;

    if(!command_cpy.empty())
        for (int i = 0; i < command_cpy.size(); ++i)
        {
                result += command_cpy.at(i) * numbers.at(i);
        }
    
    result += sign * numbers.at(command_cpy.size());
    command_cpy.push_back(sign);
    
    if (numbers.size() == command_cpy.size())
    {
        if (target == result)
            commands.push_back(command_cpy);
        return;
    }

    else
    {
        dfs(numbers, commands, command_cpy, target, 1);
        dfs(numbers, commands, command_cpy, target, -1);
        return ;
    }
}

int solution(vector<int> numbers, int target) {
    const int max_size = 20;
    const int max_num = 20;
    const int max_target = 1000;

    const int size = numbers.size();

    vector<vector<int>> commands;
    vector<int> command;

    dfs(numbers, commands, command, target, 1);
    dfs(numbers, commands, command, target, -1);

    return commands.size();
}

int main()
{
    vector<int> numbers = { 1, 1, 1, 1, 1 };
    int target{ 3 };

    solution(numbers, target);
    // return 5
}