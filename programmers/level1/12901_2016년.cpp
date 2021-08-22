// 2021-06-10 00:30 - 01:02

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	string week_data[] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
	int month_data[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int day = 0;

	for (int i = 0; i<a - 1; ++i)
		day += month_data[i];

	day += b;

	return answer = week_data[day % 7];
}