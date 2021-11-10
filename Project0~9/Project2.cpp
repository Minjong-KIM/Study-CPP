#include <iostream>
using namespace std;

void main()
{
	int* buff;
	buff = new int[2];
	cin >> buff[0] >> buff[1];

	cout << "new : " << buff[0] << " " << buff[1] << endl;

	delete buff;
}