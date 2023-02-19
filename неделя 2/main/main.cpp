#include <iostream>
#include <cmath>
#include "circle.h";
#include "figure.h";
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


int main() {
    setlocale(LC_ALL, "Russian");
    
    /*
    // задание 1
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
    
    
    // задание 2
    cout << "Введите радиус r, координаты x, y для окружности 1 через пробел: " << endl;
    cin >> a >> b >> c;
    circle first = circle(a, b, c);
    cout << "Введите радиус r, координаты x, y для окружности 2 через пробел: " << endl;
    cin >> a >> b >> c;
    circle second = circle(a, b, c);
    cout << "Введите радиус r, координаты x, y для окружности 3 через пробел: " << endl;
    cin >> a >> b >> c;
    circle third = circle(a, b, c);
    cout << "Параметры окружности 1:" << endl;
    first.show();
    cout << "Параметры окружности 2:" << endl;
    second.show();
    cout << "Параметры окружности 3:" << endl;
    third.show();
    cout << "Введите ещё раз радиус r, координаты x, y для окружности 1 через пробел: " << endl;
    cin >> a >> b >> c;
    first.set_circle(a, b, c);
    cout << "Параметры окружности 1:" << endl;
    first.show();
    cout << "Площадь окружности 1: " << first.square() << endl;
    cout << "Введите стороны треугольника через пробел: " << endl;
    cin >> a >> b >> c;
    cout << "Треугольник вписан в окружность 2: " << second.triangle_around(a, b, c) << endl;
    cout << "Треугольник описан около окружности 2: " << second.triangle_in(a, b, c) << endl;
    cout << "Введите радиус r, координаты x, y для проверки пересечения окружности с окружностью 3 через пробел: " << endl;
    cin >> a >> b >> c;
    cout << "Окружность 3 пересекается с введенной окружностью: " << third.check_circle(a, b, c) << endl;
    */

    // задание 3
    float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Введите координаты x1, y1 первой точки, координаты x2, y2 второй точки, координаты x3, y3 третьей точки, координаты x4, y4 четвертой точки для четырехугольнака 1 через пробел: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure one = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    cout << "Введите координаты x1, y1 первой точки, координаты x2, y2 второй точки, координаты x3, y3 третьей точки, координаты x4, y4 четвертой точки для четырехугольнака 2 через пробел: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure two = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    cout << "Введите координаты x1, y1 первой точки, координаты x2, y2 второй точки, координаты x3, y3 третьей точки, координаты x4, y4 четвертой точки для четырехугольнака 3 через пробел: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure three = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    cout << "Параметры четырехугольника 1:" << endl;
    one.show();
    cout << "Четырехугольник 1 является прямоугольником: " << one.is_prug() << endl;
    cout << "Четырехугольник 1 является квадратом: " << one.is_square() << endl;
    cout << "Четырехугольник 1 является ромбом: " << one.is_romb() << endl;
    cout << "Параметры четырехугольника 2:" << endl;
    two.show();
    cout << "Четырехугольник 2 является прямоугольником: " << two.is_prug() << endl;
    cout << "Четырехугольник 2 является квадратом: " << two.is_square() << endl;
    cout << "Четырехугольник 2 является ромбом: " << two.is_romb() << endl;
    cout << "Параметры четырехугольника 3:" << endl;
    three.show();
    cout << "Четырехугольник 3 является прямоугольником: " << three.is_prug() << endl;
    cout << "Четырехугольник 3 является квадратом: " << three.is_square() << endl;
    cout << "Четырехугольник 3 является ромбом: " << three.is_romb() << endl;
    cout << "Четырехугольник 1 можно вписать в окружность: " << one.is_in_circle() << endl;
    cout << "Четырехугольник 2 можно описать около окружности: " << two.is_out_circle() << endl;
}

