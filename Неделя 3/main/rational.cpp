#include <iostream>
#include <cmath>
#include "rational.h";

int rational::zero(int x)
{
	if (x == 0)
	{
		std::cout << "����������� �� ����� ���� ����� 0." << std::endl << "������������ �������� �� ��������� 10." << std::endl;
		return 10;
	}
	else {
		return x;
	}
}
int rational::fraction_reduction(int c, int a, int b)
{
	float p, q;
	p = a;
	q = b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		float aa = a % i;
		float bb = b % i;
		if (!(a % i) && !(b % i))
		{
			p = a / i;
			q = b / i;
		}
	}
	if (p != a)
	{
		if (c == a)
		{
			std::cout << "����� ����� ��������� " << std::endl;
			return p;
		}
		return q;
	}
	else {
		if (c == a)
		{
			return a;
		}
		return b;
	}
}
rational::rational(int a1, int b1)
{
	b = zero(b1);
	a = a1 % b;
	int x = a;
	a = fraction_reduction(a, x, b);
	b = fraction_reduction(b, x, b);
}
void rational::set(int a1, int b1)
{
	b = zero(b1);
	a = a1 % b;
	int x = a;
	a = fraction_reduction(a, x, b);
	b = fraction_reduction(b, x, b);
}
void rational::show()
{
	std::cout << "�����: " << a << "/" << b << std::endl;
}