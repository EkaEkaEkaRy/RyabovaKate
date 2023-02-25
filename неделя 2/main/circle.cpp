#include <iostream>
#include <cmath>
#include "circle.h";
circle::circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
}
void circle::set_circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
}
void circle::show()
{
    std::cout << "радиус: " << radius << std::endl;
    std::cout << "координата x: " << x_center << std::endl;
    std::cout << "координата y: " << y_center << std::endl;
}
float circle::square()
{
    return 3.14 * radius * radius;
}
bool circle::triangle_around(float a, float b, float c)
{
    float s = 3.14 * radius * radius;
    return a * b * c / (4 * s) == radius;
}
bool circle::triangle_in(float a, float b, float c)
{
    float s = 3.14 * radius * radius;
    return 2 * s / (a + b + c) == radius;
}
bool circle::check_circle(float r, float x, float y)
{
    return sqrt((x - x_center) * (x - x_center) + (y - y_center) * (y - y_center)) < r + radius;
}
