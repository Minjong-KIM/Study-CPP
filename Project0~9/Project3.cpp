#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	int* buff;
	buff = new int[4];
	cin >> buff[0] >> buff[1];

	ofstream fout("file.txt");
	fout << buff[0] << " " << buff[1] << endl;
	fout.close();

	ifstream fin;
	fin.open("file.txt");
	fin >> buff[2] >> buff[3];
	cout << "new : " << buff[2] << " " << buff[3] << endl;
	fin.close();

	delete buff;
}