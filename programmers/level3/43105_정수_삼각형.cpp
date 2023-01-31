// 2023-01-31 19:05 - 19:25

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;

    int triangle_result[500][500]{ 0 };

    const int height = triangle.size();

    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < triangle[i].size(); ++j)
        {
            int iUpperNum = 0;

            if(0 == j)
            {
                iUpperNum = triangle_result[i - 1][j];
            }
            else if (triangle[i].size() == j)
            {
                iUpperNum = triangle_result[i - 1][j - 1];
            }
            else
            {
                int iUpperLeft = triangle_result[i - 1][j - 1];
                int iUpperRight = triangle_result[i - 1][j];
                iUpperNum = iUpperLeft < iUpperRight ? iUpperRight : iUpperLeft;
            }

            triangle_result[i][j] = iUpperNum + triangle[i][j];

            if (answer < triangle_result[i][j])
                answer = triangle_result[i][j];
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> vTriangle = { {7} ,{3, 8},{8, 1, 0},{2, 7, 4, 4},{4, 5, 2, 6, 5} };

    std::cout << solution(vTriangle);
}