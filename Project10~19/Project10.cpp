#include <iostream>

using namespace std;

class CPoint
{
public:
	short x;
	short y;
};

int main()
{
	CPoint startPT, endPT;

	cout << "start Point : ";
	cin >> startPT.x >> startPT.y;
	
	cout << "End Point : ";
	cin >> endPT.x >> endPT.y;

	int width = abs(endPT.x - startPT.x);
	int height = abs(endPT.y - startPT.y);

	cout << "width : " << width << endl;
	cout << "height : " << height << endl;

	return 0;
}