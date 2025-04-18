
#include <iostream>
#include <string>
using namespace std;
void eraseDemo(string str)
{
	str.erase(1,4);

	cout << "After erase : ";
	cout << str;
}
int main()
{
	string str("Hello World!");

	cout << "Before erase : ";
	cout << str << nl;
	eraseDemo(str);

	return 0;
}

