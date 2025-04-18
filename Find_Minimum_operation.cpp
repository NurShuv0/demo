#include <iostream>
using namespace std;

int min_operations(int n, int k) {
    int operations = 0;
    while (n > 0) {
        if (n % k != 0) {
            operations++;
        }
        n /= k;
    }
    
    return operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << min_operations(n, k) << nl;
    }
    
    return 0;
}
