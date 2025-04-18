#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Define the regex pattern for ab*a
    regex pattern("ab*a");

    // Check if the input matches the pattern
    if (regex_match(input, pattern))
    {
        cout << "The string matches the pattern ab*a." << endl;
    }
    else
    {
        cout << "The string does not match the pattern ab*a." << endl;
    }

    return 0;
}
