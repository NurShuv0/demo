#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> countVampireSquares(int t, vector<tuple<int, int, vector<vector<int>>>>& testCases) {
    vector<string> results;

    for (int caseIdx = 0; caseIdx < t; ++caseIdx) {
        int n, m;
        vector<vector<int>> grid;
        tie(n, m, grid) = testCases[caseIdx];

        vector<vector<int>> dp(n, vector<int>(m, 0));
        int totalSquares = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    if (i == 0 || j == 0) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                    }
                    totalSquares += dp[i][j];
                }
            }
        }

        results.push_back("Case " + to_string(caseIdx + 1) + ": " + to_string(totalSquares));
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    vector<tuple<int, int, vector<vector<int>>>> testCases;

    for (int k = 0; k < t; ++k) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        testCases.emplace_back(n, m, grid);
    }

    vector<string> results = countVampireSquares(t, testCases);

    for (const string& res : results) {
        cout << res << nl;
    }

    return 0;
}
