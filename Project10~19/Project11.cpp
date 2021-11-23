#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;

public:
	Point(int x_, int y_) : x(x_), y(y_)
	{}

	void ShowElement()
	{
		cout << x << " " << y << endl;
	}

	Point operator+ (Point& P) 
	{
		Point Po(x + P.x, y + P.y);

		return Po;
	}

	Point operator- (Point& P) 
	{
		Point Po(x - P.x, y - P.y);

		return Po;
	}

	Point operator* (Point& P) 
	{
		Point Po(x * P.x, y * P.y);

		return Po;
	}

	Point operator/ (Point& P) 
	{
		Point Po(x / P.x, y / P.y);

		return Po;
	}

	Point operator% (Point& P) 
	{
		Point Po(x % P.x, y % P.y);

		return Po;
	}

	Point operator>> (Point& P)
	{
		Point Po(x >> P.x, y >> P.y);

		return Po;
	}

	Point operator<< (Point& P)
	{
		Point Po(x << P.x, y << P.y);

		return Po;
	}

	Point operator++ ()
	{
		x++;
		y++;

		return *this;
	}

	Point operator++ (int)
	{
		Point Po = *this;

		x++;
		y++;

		return Po;
	}

	Point operator-- ()
	{
		x--;
		y--;

		return *this;
	}

	Point operator-- (int)
	{
		Point Po = *this;

		x--;
		y--;

		return Po;
	}
};

int main()
{
	Point a(8, 10);
	Point b(1, 2);

	Point c = a + b;
	c.ShowElement();

	Point d = a - b;
	d.ShowElement();

	Point e = a * b;
	e.ShowElement();

	Point f = a / b;
	f.ShowElement();

	Point g = a >> b;
	g.ShowElement();

	Point h = a << b;
	h.ShowElement();

	Point i = ++a;
	i.ShowElement();
	a.ShowElement();

	Point j = b++;
	j.ShowElement();
	b.ShowElement();

	Point k = --a;
	k.ShowElement();
	a.ShowElement();

	Point l = b--;
	l.ShowElement();
	b.ShowElement();
}