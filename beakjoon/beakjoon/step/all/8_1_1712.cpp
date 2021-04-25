#include <iostream>

int main()
{
	int A = 0, B = 0, C = 0;
	long long BREAK_EVEN_POINT = 0;
	std::cin >> A >> B >> C;

	if (B >= C)
		BREAK_EVEN_POINT = -1;
	else {
		BREAK_EVEN_POINT = A / (C - B);
		if (BREAK_EVEN_POINT % (A / (C - B)) == 0)
			BREAK_EVEN_POINT++;
	}
		//   while 문 동작하면 시간 초과
		//while (true) {
		//	result = (C-B) * BREAK_EVEN_POINT;
		//	if (A < result)
		//		break;
		//	BREAK_EVEN_POINT++;
		//}
	std::cout << BREAK_EVEN_POINT << "\n";
}