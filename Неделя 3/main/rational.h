class rational 
{
private:
	int a, b;
	int zero(int x);
	int fraction_reduction(int c, int a, int b);
public:
	rational(int a1, int b1);
	void show();
	void set(int a1, int b1);
	int get_a();
	int get_b();
	friend rational operator-(rational& m1, rational& m2);
	friend rational operator=(rational m);
	~rational();
};