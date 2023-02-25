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
};