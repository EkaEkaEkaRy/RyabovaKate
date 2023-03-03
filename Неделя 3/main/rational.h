class rational 
{
private:
	int a, b;
	int zero(int x);
	int fraction_reduction(int c, int a, int b);
public:
	rational();
	rational(int a1, int b1);
	void show();
	void set(int a1, int b1);
	rational operator+ (rational r);
	friend rational operator- (rational r1, rational r2);
	void operator++ ();
	bool operator== (rational r);
	bool operator> (rational r);
	bool operator< (rational r);
	void operator= (rational r);
};