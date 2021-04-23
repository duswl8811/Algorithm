#include <iostream>

int main()
{
	char s[101] = { 0 }, ref[8][4] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int count = 0;
	std::cin >> s;

	for (int i = 0; s[i] != 0; ++i) {
		//if( s[i] == 'c' || s[i] == 'd' || s[i] == 'l' || s[i] == 'n' || s[i] == 's' || s[i] == 'z')
		for (int k = 0; k < 8; k++)
			if (s[i] == ref[k][0])
				mola;
	}

	//for (int i = 0; i < 8; i++) {
	//	for (int k = 0; k < 4; k++)
	//		std::cout << ref[i][k];
	//	std::cout << "\n";
	//}

	std::cout << s << "\n";
}