#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 3, 2, 3, 5};
    int value = 3;
    int count_value = std::count(vec.begin(), vec.end(), value);
    cout << count_value;
    return 0;
}
