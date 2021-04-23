#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	char s[1000001] = { 0 };
	int count = 0;

	std::cin.getline(s, 1000001);
	//std::cin >> s;

	for (int i = 0; s[i] != '\0'; i++) {
		if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && (s[i + 1] == ' ' || s[i + 1] == '\0') )
			count++;
	}
	std::cout << count << "\n";
}