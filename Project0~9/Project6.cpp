#include <iostream>
#include <list>
using namespace std;

void main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	iter = lt.begin();
	iter++;
	iter++;

	list<int>::iterator iter2 = lt.erase(iter);
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	lt.remove(10);

	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}