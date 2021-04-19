// 3ȸ��

#include <iostream>

int main()
{
	// �Է¿� ���Ǵ� �ð� ���̱�
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	char s[1000001] = { 0 }, max_alpha = 0;
	int alpha_count['Z' - 'A' + 1] = { 0 }, max = 0;
	// a~z ���� ���� �� �� ������ �� ���� Ȯ�� + ?ǥ���� �ڸ�

	std::cin >> s;

	for (int i = 0; s[i] != 0; ++i) {
		s[i] = toupper(s[i]);
		++alpha_count[s[i] - 'A'];
	}

	for (char c = 'A'; c <= 'Z'; c++) { // (int i = 0; i < sizeof(alpha_count) - 1; ++i) �� ����
		int pos = c - 'A';
		if (alpha_count[pos] == 0)
			continue;
		else if (alpha_count[pos] == max)
			max_alpha = '?' - 'A';
		else if (alpha_count[pos] > max) {
			max = alpha_count[pos];
			max_alpha = pos;
		}
	}

	std::cout << (char)(max_alpha + 'A') << "\n";
}


// 2ȸ��

//#include <iostream>
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//
//	char s[1000001] = { 0 }, max_alpha = 0;
//	int alpha_count['Z' - 'A' + 1] = { 0 }, max = 0;
//	bool double_count = false;
//
//	std::cin >> s;
//
//	for (int i = 0; s[i] != 0; ++i) {
//		s[i] = toupper(s[i]);
//		++alpha_count[s[i] - 'A'];
//	}
//
//	for (char c = 'A'; c <= 'Z'; c++) {
//		int pos = c - 'A';
//		if (alpha_count[pos] == max)
//			double_count = true;
//
//		else if (alpha_count[pos] > max) {
//			max = alpha_count[pos];
//			max_alpha = c;
//			double_count = false;
//		}
//	}
//
//	if (double_count)
//		std::cout << "?" << "\n";
//	else
//		std::cout << max_alpha << "\n";
//}


// 1ȸ��

//#include <iostream>
//
//int main()
//{
//	char s[1000001] = { 0 }, max_alpha = 0;
//	int alpha_count['Z' - 'A' + 1] = { 0 }, max = 0;
//	bool double_count = false;
//	std::cin >> s;
//	for (int i = 0; s[i] != 0; ++i) {
//		s[i] = toupper(s[i]);
//
//		for (char c = 'A'; c <= 'Z'; c++) {
//			if (s[i] == c)
//				alpha_count[c - 'A']++;
//		}
//
//	}
//
//	for (char c = 'A'; c <= 'Z'; c++) {
//		if (alpha_count[c - 'A'] == max) {
//			max = alpha_count[c - 'A'];
//			double_count = true;
//		}
//		else if (alpha_count[c - 'A'] > max) {
//			max = alpha_count[c - 'A'];
//			max_alpha = c;
//			double_count = false;
//		}
//
//	}
//
//	if (double_count)
//		std::cout << "?" << "\n";
//	else
//		std::cout << max_alpha << "\n";
//}