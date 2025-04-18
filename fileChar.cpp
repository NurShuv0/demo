#include <iostream>
using namespace std;

bool isOperator(char s) {
    return (s == '+' || s == '-' || s == '*' || s == '/' || 
            s == '!' || s == '<' || s == '>' || s == '=');
}

int main() {
    freopen("9 Input.txt", "r", stdin);

    char ch;
    while (cin >> ch) {
        if (isOperator(ch)) {
            cout << ch << " is an operator\n";
        }
    }

    return 0;
}
