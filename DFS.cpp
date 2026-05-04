#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void DFS(int start, vector<vector<int>> &adj, int V) {
    vector<bool> visited(V, false);
    stack<int> st;

    st.push(start);

    cout << "DFS Traversal: ";

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            // Push neighbors in reverse order (to match recursive DFS order)
            for (int i = adj[node].size() - 1; i >= 0; i--) {
                int neighbor = adj[node][i];
                if (!visited[neighbor]) {
                    st.push(neighbor);
                }
            }
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    // Adding edges
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    DFS(0, adj, V);

    return 0;
}
