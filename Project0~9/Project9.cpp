#include <iostream>
#include <bitset>

using namespace std;

void main()
{
	char a = 77;
	char b = 8;
	cout << bitset<8>(a) << " -> " << (int)a << endl;
	cout << bitset<8>(b) << " -> " << (int)b << endl;

	cout << "AND : " << bitset<8>(a & b) << endl;
	cout << "OR : " << bitset<8>(a | b) << endl;
	cout << "XOR : " << bitset<8>(a ^ b) << endl;
	cout << "NOT : " << bitset<8>(~a) << endl;
	cout << "SHIFT : " << bitset<8>(a >> 3) << endl;
	cout << "SHIFT : " << bitset<8>(a << 3) << endl;
}