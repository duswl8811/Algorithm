#include <iostream>
#include <time.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	setlocale(LC_ALL, "Korean");

	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	std::cout << t->tm_year + 1900 << "-" << t->tm_mon + 1 << "-" << t->tm_mday << "\n";
}