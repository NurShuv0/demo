#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);                 

    int N;
    cin >> N;
    
    vector<int> count(26, 0); 

    for (int i = 0; i < N; i++) {
        char ch;
        cin >> ch;
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            cout << static_cast<char>(i + 'a');
            count[i]--;
        }
    }
    cout << nl;

    return 0;
}
