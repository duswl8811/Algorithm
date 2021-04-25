#include <iostream>
#include <cstring>

int main()
{
	char A[4] = { 0 }, B[4] = { 0 }, result[4] = { 0 };
	std::cin >> A >> B;

	for (int i = 2; i >= 0; --i) {
		if (A[i] == B[i])
			continue;
		(A[i] > B[i]) ? memcpy(result, A, sizeof(char) * 3) : memcpy(result, B, sizeof(char) * 3);
		break;
		//else if (A[i] > B[i]) {
		//	memcpy(result, A, sizeof(char) * 3);
		//	break;
		//}
		//else if (A[i] < B[i]) {
		//	memcpy(result, B, sizeof(char) * 3);
		//	break;
		//}
	}

	for (int i = 2; i >= 0; --i)
		std::cout << result[i];
}