#include <iostream>
#include <vector>
#include <queue>
#define nl "\n"
#define sp " "

using namespace std;

// Function to add an edge to the graph
void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);  // Since this is an undirected graph
}

// BFS function
void BFS(const vector<vector<int>>& adj, vector<bool>& visited, int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << sp;

        // Visit all adjacent nodes
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Function to perform BFS on all disconnected components
void BFSDisconnectedGraph(const vector<vector<int>>& adj, int vertices) {
    vector<bool> visited(vertices, false);

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            // Perform BFS for each unvisited component
            BFS(adj, visited, i);
            cout << nl;  // Separate each component by a newline
        }
    }
}

int main() {
    int vertices = 7;  // Example with 7 vertices
    vector<vector<int>> adj(vertices);

    // Add edges (you can customize this part)
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 6);

    cout << "BFS traversal of the disconnected graph:" <<nl;
    BFSDisconnectedGraph(adj, vertices);

    return 0;
}
