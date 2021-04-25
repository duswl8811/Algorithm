// 2회차

#include <iostream>

int main()
{
	char s[100] = { 0 };

	std::cin >> s;

	for (char i = 'a'; i <= 'z' ; i++) {
		int j = 0;
		for (; s[j] != 0; j++)
			if (i == s[j]) {
				std::cout << j << " ";
				break;
			}
		if (s[j] == 0)
			std::cout << -1 << " ";
	}
}


// 1회차

//#include <iostream>
//
//int main()
//{
//	char s[100] = { 0 };
//	int abc[26] = { 0 };
//
//	for (int i = 0; i < 26; i++)
//		abc[i] = -1;
//
//	std::cin >> s;
//
//	for (int i = 0; s[i] != 0; i++) {
//		int pos = s[i] - 'a';
//		if (abc[pos] == -1)
//			abc[pos] = i;
//	}
//
//	for (int i = 0; i < 26; i++)
//		std::cout << abc[i] << " ";
//}




// 참고 코드

//#include <iostream>
//#include <string>
//
//int main() {
//	std::string S;
//	std::cin >> S;
//
//	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
//
//	for (int i = 0; i<alphabet.length(); i++) {
//		std::cout << (int)S.find(alphabet[i]) << " ";
//	}
//
//	return 0;
//}