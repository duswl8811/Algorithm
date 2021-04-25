#include <iostream>
#include <cstring>

int main()
{
	char s[101] = { 0 }, ref[8][4] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int count = 0, check = 0, size = 0, k = 0;
	std::cin >> s;

	for (int i = 0; s[i] != 0; ++i) {
		for (k = 0; k < 8; k++) {
			if (s[i] != ref[k][0])
				continue;

			size = strlen(ref[k]);
			while (size--) {
				if (s[i + size] != ref[k][size])
					break;

			}
			if (size == -1) {
				count++;
				i += strlen(ref[k]) - 1;
				break;
			}
		}
		if (k == 8)
			count++;
	}

	std::cout << count << "\n";
}


// vector를 사용한 참고 코드

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	string str;
//	cin >> str;
//	vector<string> v;
//	v = { "c=" , "c-" , "dz=", "d-",
//		"lj", "nj", "s=", "z=" };
//	string temp;
//	int answer = 0;
//	for (int i = 0; i < str.length(); i++) {
//		temp += str[i];
//		for (int j = 0; j < v.size(); j++) {
//			const string &pattern = v[j];
//			if (temp.find(pattern) != string::npos) {
//				for (int s = 0; s < pattern.length(); s++)
//					temp.pop_back();
//				answer++;
//				answer += temp.length();
//				temp.clear();
//			}
//		}
//	}
//	answer += temp.length();
//	printf("%d\n", answer);
//	return 0;
//}


// vector를 사용한 참고 코드 2

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int    main(void)
//{
//	int idx = 0;
//	vector<string> vec = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
//	string str;
//
//	cin >> str;
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (idx = str.find(vec[i]); idx != string::npos; idx = str.find(vec[i]))
//			str.replace(idx, vec[i].length(), "@");
//	}
//	cout << str.length();
//}


// 참고 코드 3

//#include <iostream>
//#include <string>
//
//using std::cin;
//using std::string;
//
//int main(int argc, char* argv[])
//{
//	string croatiaAlphas[8] = {
//		"c=",
//		"c-",
//		"dz=",
//		"d-",
//		"lj",
//		"nj",
//		"s=",
//		"z="
//	};
//
//	string str;
//	cin >> str;
//
//	size_t alphaCount = 0;
//	for (size_t i = 0; i < str.length(); i++)
//	{
//		for (string alpha : croatiaAlphas)
//		{
//			if (i + (alpha.length() - 1) >= str.length())
//				continue;
//
//			string substr = str.substr(i, alpha.length());
//			if (substr.compare(alpha) == 0)
//			{
//				i += alpha.length() - 1;
//				break;
//			}
//		}
//
//		alphaCount++;
//	}
//
//	printf("%d\n", alphaCount);
//
//	return 0;
//}


// 하드코딩 참고 코드 4

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char s[100];
//	int i, len;
//	scanf("%s", s);
//	len = strlen(s);
//	for (i = 0; i<strlen(s); i++)
//	{
//		if (s[i] == '-') len--;
//		else if (s[i] == '=')
//		{
//			if (s[i - 1] == 'z'&&s[i - 2] == 'd') len -= 2;
//			else len--;
//		}
//		else if (s[i] == 'l'&&s[i + 1] == 'j') len--;
//		else if (s[i] == 'n'&&s[i + 1] == 'j') len--;
//	}
//	printf("%d", len);
//}


// 하드코딩 참고 코드 5

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[101];
//	int i, j, sum = 0;
//	scanf("%s", str);
//	sum = strlen(str);
//
//	for (i = 0; i<strlen(str); i++)
//	{
//		if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')
//			sum--;
//		if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
//			sum--;
//		if (str[i] == '=' || str[i] == '-')
//			sum--;
//	}
//	printf("%d \n", sum);
//	return 0;
//}