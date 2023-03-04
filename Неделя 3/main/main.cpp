#include <iostream>
#include <cmath>
#include "rational.h";
#include "eq2.h";
using namespace std;

eq2 operator + (eq2 m1, eq2 m2) {
    eq2 su = eq2(m2.getA() + m1.getA(), m2.getB() + m1.getB(), m2.getC() + m1.getC());
    return su;
}

extern rational operator- (rational m1, rational m2) {
    rational v = rational(-m2.a, m2.b);
    return m1 + v;
}

int main()
{
    setlocale(LC_ALL, "Russian"); 
    
    // задание 1
    double a, b, c;
    cout << "Введите коэффициенты a, b, c квадратного уравнения через пробел:" << endl;
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    cout << "Введите значиние x: ";
    cin >> a;
    cout << "Для x = " << a << " y = " << exmpl.find_Y(a) << endl << endl;
    cout << "Введите коэффициенты a, b, c квадратного уравнения через пробел:" << endl;
    cin >> a >> b >> c;
    eq2 exmp2(a, b, c);
    exmp2.find_X();
    cout << "Введите значиние x: ";
    cin >> a;
    cout << "Для x = " << a << " y = " << exmp2.find_Y(a) << endl << endl;
    eq2 exmp3 = exmpl + exmp2;
    cout << "Корни уравнения, являющегося суммой первого и второго уравления: ";
    exmp3.find_X();
    cout << endl << endl;
    
    // задание 2
    cout << "Введите количество чисел: ";
    int n, p, q;
    cin >> n;
    rational* mas = new rational[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите через пробел числитель a и знаменатель b: " << endl;
        cin >> p >> q;
        mas[i].set(p, q);
    }
    for (int i = 0; i < n; i++) {
        cout << "Дробь " << i + 1 << ": ";
        mas[i].show();
    }
    cout << endl;

    // задание 3
    cout << "Суммы дробей: " << endl;
    for (int i = 0; i < n - 1; i++) (mas[i] + mas[i + 1]).show();
    cout << endl;
    cout << "Разности дробей: " << endl;
    for (int i = 0; i < n - 1; i++) (mas[i] - mas[i + 1]).show();
    cout << endl;
    cout << "Дробь 1: ";
    mas[0].show();
    ++mas[0];
    cout << "Инкремент на дробь 1: ";
    mas[0].show();
    cout << endl;
    cout << "Дробь 2: ";
    mas[1].show();
    cout << "Дробь 1 равна дроби 2: " << (mas[0] == mas[1]) << endl;
    cout << "Дробь 1 больше дроби 2: " << (mas[0] > mas[1]) << endl;
    cout << "Дробь 1 меньше дроби 2: " << (mas[0] < mas[1]) << endl;
    mas[0] = mas[1];
    cout << "Дробь 1 после переприсваивания ей значения дроби 2: ";
    mas[0].show();
    delete mas;
}