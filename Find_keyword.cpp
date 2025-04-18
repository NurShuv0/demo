#include <iostream>
#include <string>
#include<algorithm>
#define sp " "
#define nl "\n"
using namespace std;

bool isKeyword(string s)
{
    if (s == "auto" || s == "int" || s == "char" || s == "long" ||
        s == "float" || s == "double" || s == "struct" || s == "if" ||
        s == "else" || s == "break" || s == "continue" || s == "while" ||
        s == "do" || s == "for" || s == "return" || s == "signed" ||
        s == "unsigned" || s == "default" || s == "goto" || s == "case" ||
        s == "sizeof" || s == "short" || s == "switch" || s == "void" ||
        s == "static" || s == "typedef" || s == "string")
    {
        return true;
    }
}
int main()
{
    string str;
    //freopen("9 Input.txt", "r", stdin);
    freopen("0_input.txt","r",stdin);
    //cout << "input text: ";
    //cin >> st;
    while (cin >> str)
    {
        if (isKeyword(str))
        {
            cout << str << " is a keyword" << nl;
        }
        else
        {
            //cout << str << " is not keyword\n";
        }
    }

    return 0;
}
