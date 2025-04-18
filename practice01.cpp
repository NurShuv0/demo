#include <iostream>
#include <string>
using namespace std;

bool isOperator(char s) {
    // Check if the character is an operator
    if (s == '+' || s == '-' || s == '*' || s == '/' ||
        s == '!' || s == '<' || s == '>' || s == '=') {
        return true;
    }
    return false;
}

int main() {
    string st;
    // Uncomment the line below to read from a file instead of standard input
    // freopen("9 Input.txt", "r", stdin);

    // Get the entire line as input
    getline(cin, st);

    for (int i = 0; i < st.size(); i++) {
        if (isOperator(st[i])) {
            cout << st[i] << " is an operator\n";
        }
    }

    return 0;
}

