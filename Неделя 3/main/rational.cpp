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

rational::rational() {}

rational::rational(int a1, int b1)
{
	this->set(a1, b1);
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

rational rational::operator+(rational r) {
	rational result;
	if (r.b == this->b) {
		result = rational(r.a + this->a, r.b);
	}
	else {
		result = rational(r.a*this->b + r.b * this->a, r.b*this->b);
	}
	return result;
}
void rational::operator++() {
	this->a + this->b;
}
bool rational::operator==(rational r) {
	int x = this->a * r.b;
	int y = r.a * this->b;
	return x == y;
}
bool rational::operator> (rational r) {
	int x = this->a * r.b;
	int y = r.a * this->b;
	return x > y;
}
bool rational::operator< (rational r) {
	int x = this->a * r.b;
	int y = r.a * this->b;
	return x < y;
}
void rational::operator=(rational r) {
	this->a = r.a;
	this->b = r.b;
}