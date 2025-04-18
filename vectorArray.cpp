#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare an array of 3 vectors
    vector<int> vecArray[3];

    // Adding elements to each vector in the array
    vecArray[0].push_back(1);
    vecArray[0].push_back(2);
    vecArray[0].push_back(3);

    vecArray[1].push_back(4);
    vecArray[1].push_back(5);

    vecArray[2].push_back(6);
    vecArray[2].push_back(7);
    vecArray[2].push_back(8);
    vecArray[2].push_back(9);

    // Displaying the contents of each vector in the array
    for (int i = 0; i < 3; i++) {
        cout << "Vector " << i << ": ";
        for (int j = 0; j < vecArray[i].size(); j++) {
            cout << vecArray[i][j] << " ";
        }
        cout << nl;
    }

    // Performing additional vector operations
    // Example: Clearing the second vector
    vecArray[1].clear();

    // Display the vectors after clearing the second vector
    cout << "\nAfter clearing Vector 1:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Vector " << i << ": ";
        for (int j = 0; j < vecArray[i].size(); j++) {
            cout << vecArray[i][j] << " ";
        }
        cout << nl;
    }

    return 0;
}
