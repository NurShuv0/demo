#include <iostream>
#include <string>
using namespace std;

bool isNumber(char s) {
    if (s == '0' || s == '1' || s == '2' || s == '3' ||
        s == '4' || s == '5' || s == '6' || s == '7' || s == '8' || s == '9') {
        return true;
    }
    return false;
}

int main() {
    string st;
    // freopen("9 Input.txt", "r", stdin);

    getline(cin, st);
    int count = 0;
    for (int i = 0; i < st.size(); i++) {
        if (isNumber(st[i])) {
            cout << st[i] << " is a number\n";
            count++;
        }
    }
    cout << count;

    return 0;
}
