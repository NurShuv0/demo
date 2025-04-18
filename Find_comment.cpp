#include <iostream>
#include <string>
#define sp " "
#define nl "\n"
using namespace std;

int main()
{
    const int MAX_LINE_LENGTH = 100;
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    if (line.length() >= 2 && line.find("//") != string::npos)
    {
        cout << "There exists a single-line comment." << nl;
    }
    
    else if (line.find("/*") != -1 && line.find("*/") != -1)
    {
        cout << "There exists a multi-line comment." << nl;
    }
    else
    {
        cout << "It is not a comment." << nl;
    }

    return 0;
}
