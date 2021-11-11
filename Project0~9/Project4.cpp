#include <iostream>
#include <string>

void main()
{
	std::string s = "example string";
	char search = 'x';
	int at = s.find(search, 0);

	std::cout << s << std::endl;
	std::cout << "'x' is at " << at << std::endl;
}