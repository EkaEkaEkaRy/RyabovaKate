#include <iostream>
#include <cmath>
#include "rational.h";

int rational::zero(int x)
{
	if (x == 0)
	{
		std::cout << "Знаменатель не может быть равен 0." << std::endl << "Используется значение по умолчанию 10." << std::endl;
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
	std::cout << "Дробь: " << a << "/" << b << std::endl;
}

int rational::get_a()
{
	return a;
}

int rational::get_b()
{
	return b;
}

rational operator+ (rational m1, rational m2)
{
	rational dr(m1.get_a() * m2.get_b() + m2.get_a() * m1.get_b(), m1.get_b() * m2.get_b());
	return dr;
}

rational rational::operator-(rational& m1, rational& m2)
{
	rational dr(m1.a * m2.b - m2.a * m1.b, m1.b * m2.b);
	return dr;
}

rational operator++ (rational m1)
{
	rational dr(m1.get_a() + m1.get_b(), m1.get_b());
	return dr;
}

bool operator== (rational m1, rational m2)
{
	if (m1.get_a() == m2.get_a() && m1.get_b() == m2.get_b())
	{
		return true;
	}
	else {
		return false;
	}
}

bool operator> (rational m1, rational m2)
{
	if (m1.get_a() * m2.get_b() > m2.get_a() * m1.get_b())
	{
		return true;
	}
	else {
		return false;
	}
}

bool operator< (rational m1, rational m2)
{
	if (m1.get_a() * m2.get_b() < m2.get_a() * m1.get_b())
	{
		return true;
	}
	else {
		return false;
	}
}

rational rational::operator=(rational m)
{
	a = m.a;
	b = m.b;
}

rational::~rational()
{

}