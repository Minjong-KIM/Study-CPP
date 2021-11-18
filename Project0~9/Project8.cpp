#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	vector<int> vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(rand() % 9 + 1);
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = vec.begin() + 3;
	vec.erase(it);
	vec.pop_back();

	cout << "vector : " << endl;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}