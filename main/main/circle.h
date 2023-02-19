class circle
{
private:
    float radius;
    float x_center;
    float y_center;
public:
    circle(float r, float x, float y)
    {
        radius = r;
        x_center = x;
        y_center = y;
    }
    void set_circle(float r, float x, float y)
    {
        radius = r;
        x_center = x;
        y_center = y;
    }
    void show()
    {
        std::cout << "радиус: " << radius << std::endl;
        std::cout << "координата x: " << x_center << std::endl;
        std::cout << "координата y: " << y_center << std::endl;
    }
    float square()
    {
        return 3.14 * radius * radius;
    }
    bool triangle_around(float a, float b, float c)
    {
        float s = 3.14 * radius * radius;
        return a * b * c / (4 * s) == radius;
    }
    bool triangle_in(float a, float b, float c)
    {
        float s = 3.14 * radius * radius;
        return 2 * s / (a + b + c) == radius;
    }
    bool check_circle(float r, float x, float y)
    {
        if (r < radius)
        {
            return sqrt((x - x_center) * (x - x_center) + (y - y_center) * (y - y_center)) < r + radius && sqrt((x - x_center) * (x - x_center) + (y - y_center) * (y - y_center)) + r >= radius;
        }
        else {
            return sqrt((x - x_center) * (x - x_center) + (y - y_center) * (y - y_center)) < r + radius && sqrt((x - x_center) * (x - x_center) + (y - y_center) * (y - y_center)) + radius >= r;
        }
        
    }
};