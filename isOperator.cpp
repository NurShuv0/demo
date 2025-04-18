#include <iostream>
#include <string>
using namespace std;

bool isOperator(char s) {
    if (s == '+' || s == '-' || s == '*' || s == '/' || 
        s == '!' || s == '<' || s == '>' || s == '=') {
        return true;
    }
    return false;
}

int main() {
    string st;
    // freopen("9 Input.txt", "r", stdin);
        getline(cin, st);
    
    for (int i = 0; i < st.size(); i++) {
        if (isOperator(st[i])) {
            cout << st[i] << " is an operator\n";
        }
    }

    return 0;
}
