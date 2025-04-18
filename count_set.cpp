#include <iostream>
#include <set>
using namespace std;
int main() {
    std::set<int> st = {1, 2, 3, 4, 5};
    int sum = 3;
    if (st.count(sum) > 0) {
        cout << sum << " is exists" << std::nl;
    } else {
        cout << sum << " is not exists" << std::nl;
    }
    sum = 6;
    if (st.count(sum) > 0) {
        cout << sum << " is exists" << std::nl;
    } else {
        cout << sum << " is not exists" << std::nl;
    }

    return 0;
}
