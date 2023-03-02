#include <iostream>
#include <cmath>
#include "rational.h";
#include "eq2.h";
using namespace std;

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
    
    // задание 2
    int p, q;
    cout << "Введите через пробел числитель a и знаменатель b: " << endl;
    cin >> p >> q;
    rational drob(p, q);
    drob.show();
    cout << "Введите через пробел числитель a и знаменатель b: " << endl;
    cin >> p >> q;
    rational drob2(p, q);
    rational t(1, 1);
    t = operator-(drob, drob2);
    t.show();
}