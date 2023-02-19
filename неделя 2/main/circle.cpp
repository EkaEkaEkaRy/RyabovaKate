#include "circle.h";
void circle::set_circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
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
