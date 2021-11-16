#include <iostream>
#include <map>

using namespace std;

void main()
{
	map<int, int> m;

	m.insert(pair<int, int>(5, 100));

	m[11] = 200;
	m[13] = 40;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << "(" << (*iter).first << "," << (*iter).second << ")" << " ";
	}
	cout << endl;

	m[13] = 140;

	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout << endl;
}