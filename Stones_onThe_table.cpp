#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int nur = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == str[i+1]) {
            nur++;
        }
    }

    cout << nur << nl;

    return 0;
}
