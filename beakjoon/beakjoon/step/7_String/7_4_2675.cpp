#include <iostream>

int main()
{
	char alphanumeric[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-. / :";
	int t = 0, r = 0;

	std::cin >> t;

	while (t) {
		char s[21] = { 0 }, p[161] = { 0 }; // ���ڿ� �̶� ������ \0 �ڸ� Ȯ��
		
		std::cin >> r >> s;

		// QR Code alphanumeric ������ Ȯ��
		for (int i = 0; s[i] != 0; i++) {
			int j = 0;
			for (j = 0; alphanumeric[j] != 0; j++) {
				if (s[i] == alphanumeric[j])
					break;
			}
			if (alphanumeric[j] == 0)
				return 0;
		}

		for (int i = 0; i < r; i++)
			for (int j = 0; s[j] != 0; j++)
				p[i + j * r] = s[j];

		std::cout << p << "\n";
		t--;
	}
}