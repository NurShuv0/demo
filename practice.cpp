#include <iostream>
#include <vector>
using namespace std;
int minOperationsToSort(vector<int>& a) {
    int n = a.size();
    vector<bool> visited(n, false);
    int maxSteps = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int len = 0;
            int x = i;
            while (!visited[x]) {
                visited[x] = true;
                x = a[x];
                len++;
            }
            if (len > 1) {
                int steps = 0;
                int temp = 1;
                while (temp < len) {
                    temp *= 2;
                    steps++;
                }
                maxSteps = max(maxSteps, steps);
            }
        }
    }

    return maxSteps;
}

int main() {
    int n;
    cout << "Enter number of elements (n): ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the array elements (0-based indices): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = minOperationsToSort(a);
    cout << "Minimum operations to sort the array: " << result << endl;

    return 0;
}
