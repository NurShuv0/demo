#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};

    // Using range-based for loop with auto
    for (auto num : vec) {
        cout << num << " ";  // Output the current element
    }
    cout<<"\n";
    int arr[vec.size()];
    for(int i = 0; i<vec.size();i++)
    {
        
        arr[i] = vec[i];//using without range-based loop
        cout << arr[i] << " ";
    }

    return 0;
}
