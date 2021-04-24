#include <iostream>
#include <cstring>

int main()
{
	int n = 0, k = 0, checking = 0, result = 0;
	std::cin >> n;

	while (n--) {
		char s[101] = { 0 }, ref[101] = { 0 }; // 동적할당을 함부로 쓰지말자
		std::cin >> s;
		checking = s[0];

		for (int i = 1; s[i] != 0; ++i) {
			if (checking == s[i])
				continue;

			for (k = 0; ref[k] != 0; ++k) {
				if (s[i] == ref[k]) {
					result--;
					i = strlen(s);
					break;
				}
			}
			if (strlen(ref) == k) {
				ref[k] = checking;
				checking = s[i];
			}
		}
		result++;
	}
	std::cout << result << "\n";
}