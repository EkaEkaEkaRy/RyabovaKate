#include <iostream>
#include <cmath>
#include "circle.h";
using namespace std;


class Triangle //задание 1
{
private:
    double a, b, c;
public:
    bool exst_tr()
    {
        return ((a + b) > c) && ((a + c) > b) && ((b + c) > a);
    }
    void set(double a1, double b1, double c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void show()
    {
        cout << "1 сторона: " << a << endl;
        cout << "2 сторона: " << b << endl;
        cout << "3 сторона: " << c << endl;
    }
    double perimetr()
    {
        return a + b + c;
    }
    double square()
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};



class Figure //задание 3
{
private:
    float x1, x2, x3, x4, y1, y2, y3, y4, s, p;
public:
    void set_figure(float x11, float x21, float x31, float x41, float y11, float y21, float y31, float y41)
    {
        x1 = x11;
        x2 = x21;
        x3 = x31;
        x4 = x41;
        y1 = y11;
        y2 = y21;
        y3 = y31;
        y4 = y41;
    }
    void show()
    {

    }
};


int main() {
    setlocale(LC_ALL, "Russian");
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Введите a, b и c для треугольника " << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "Треугольника с такими сторонами не существует, попробуйте ещё раз" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "Периметр треугольника: " << mas[i].perimetr() << endl;
        cout << "Площадь треугольника: " << mas[i].square() << endl;
    }
    
    

    cout << "Введите радиус r, координаты x, y для окружности 1 через пробел: " << endl;
    cin >> a >> b >> c;
    circle first = circle(a, b, c);
    cout << "Введите радиус r, координаты x, y для окружности 2 через пробел: " << endl;
    cin >> a >> b >> c;
    circle second = circle(a, b, c);
    cout << "Введите радиус r, координаты x, y для окружности 3 через пробел: " << endl;
    cin >> a >> b >> c;
    circle third = circle(a, b, c);
    cout << "Площадь окружности 1: " << first.square() << endl;
    cout << "Введите стороны треугольника через пробел: " << endl;
    cin >> a >> b >> c;
    cout << "Треугольник вписан в окружность 2: " << second.triangle_around(a, b, c) << endl;
    cout << "Треугольник описан около окружности 2: " << second.triangle_in(a, b, c) << endl;
    
}

