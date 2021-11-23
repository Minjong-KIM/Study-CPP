#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;

public:

	friend istream& operator>> (istream& is, Point& P);
	friend ostream& operator<< (ostream& os, Point& P);
};

istream& operator>> (istream& is, Point& P)
{
	is >> P.x >> P.y;

	return is;
}

ostream& operator<< (ostream& os, Point& P)
{
	os << P.x << P.y;

	return os;
}

int main()
{
	Point a;

	cin >> a;
	cout << a;
}