class Figure
{
private:
    float x1, x2, x3, x4, y1, y2, y3, y4, s, p;
    float a, b, c, e, d1, d2;
public:
    Figure(float x11, float x21, float x31, float x41, float y11, float y21, float y31, float y41)
    {
        x1 = x11;
        x2 = x21;
        x3 = x31;
        x4 = x41;
        y1 = y11;
        y2 = y21;
        y3 = y31;
        y4 = y41;
        a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
        e = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
        d1 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
        d2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        p = a + b + c + e;
        s = sqrt((a + e + d1) / 2 * ((a + e + d1) / 2 - a) * ((a + e + d1) / 2 - e) * ((a + e + d1) / 2 - d1)) + sqrt((b + c + d1) / 2 * ((b + c + d1) / 2 - c) * ((b + c + d1) / 2 - b) * ((b + c + d1) / 2 - d1));
    }
    void show()
    {
        std::cout << "Координаты точки 1: " << x1 << " " << y1 << std::endl;
        std::cout << "Координаты точки 2: " << x2 << " " << y2 << std::endl;
        std::cout << "Координаты точки 3: " << x3 << " " << y3 << std::endl;
        std::cout << "Координаты точки 4: " << x4 << " " << y4 << std::endl;
        std::cout << "Площадь четырехугольника: " << s << std::endl;
        std::cout << "Периметр четырехугольника: " << p << std::endl;
    }
    bool is_prug()
    {
        return a == c && b == e && d1 == d2;
    }
    bool is_square()
    {
        return a == b && c == e && b == c && d1 == d2;
    }
    bool is_romb()
    {
        return a == b && c == e && b == c;
    }
    bool is_in_circle()
    {
        float f1 = (a * a + b * b - d2 * d2) / (2 * a * b);
        float f2 = (c * c + b * b - d1 * d1) / (2 * c * b);
        float f3 = (c * c + e * e - d2 * d2) / (2 * c * e);
        float f4 = (a * a + e * e - d1 * d1) / (2 * a * e);
        return int((acos(f1) + acos(f3))*100) == 314 && int((acos(f2) + acos(f4)) * 100) == 314;
    }
    bool is_out_circle()
    {
        return a + c == b + e;
    }
};