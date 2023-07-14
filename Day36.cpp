#include <bits/stdc++.h>
using namespace std;

// Graph Problems

// 323. Number of connected component in undirected graph
class Solution{
    public:

    vector<vector<int>> constructAdjacencyList(int n, vector<vector<int>>& edges) {
    vector<vector<int>> adjacencyList(n);

    for (const vector<int>& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    return adjacencyList;
}

    void dfs(vector<vector<int>>& adj, int node, vector<bool>& visited) {
        stack<int> st;
        st.push(node);

        while (!st.empty()) {
            int currNode = st.top();
            st.pop();
            visited[currNode] = true;

            for (int adjacentNode : adj[currNode]) {
                if (!visited[adjacentNode]) {
                    st.push(adjacentNode);
                }
            }
        }
    }

    // 323. Number of connected component in undirected graph
    int countComponents(int n, vector<vector<int>>&edges){
        vector<vector<int>> adj;
        adj = constructAdjacencyList(n, edges);

        vector<bool>visited(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(adj,i,visited);
            }
        }
        return count;
    }
};


int main() {
    Solution solution;
    int n = 7;
    vector<vector<int>> edges;
    edges.push_back({0, 1});
    edges.push_back({1, 2});
    edges.push_back({3, 4});
    edges.push_back({3, 5});
    edges.push_back({6, 0  });

    int componentCount = solution.countComponents(n, edges);
    cout << "Number of components: " << componentCount << endl;


}
