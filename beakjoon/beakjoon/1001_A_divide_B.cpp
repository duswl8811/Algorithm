#include <iostream>

int main()
{
	double A = 0, B = 0;
	std::cin >> A >> B;
	std::cout << std::fixed; // ���� �𸣰����� �� ���� �� �ʿ�
	std::cout.precision(30); // �Ҽ��� �ڸ� �ø���
	std::cout << A / B;
}