class Figure
{
private:
    float x1, x2, x3, x4, y1, y2, y3, y4, s, p;
    float a, b, c, e, d1, d2;
public:
    Figure(float x11, float x21, float x31, float x41, float y11, float y21, float y31, float y41);
    void show();
    bool is_prug();
    bool is_square();
    bool is_romb();
    bool is_in_circle();
    bool is_out_circle();
};