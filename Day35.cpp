#include<bits/stdc++.h>
using namespace std;

template<typename T> 

class graph{
    public:
        unordered_map<T, list<T>> adj;

        void addEdge(T u, T v, bool direction){
            // direction =0 ->undirected graph
            // direction =1 ->directed graph

            // create an edge from u to v
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i : adj){
                cout << i.first << "-> ";
                for(auto j : i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
            cout << endl;
        }
};

int main(){

        int n;
        cout << "Enter the no. of nodes " << endl;
        cin >> n;

        int m;
        cout << "Enter the number of edges " << endl;
        cin >> m;

        graph<char>g;

        for (auto i = 0; i < m;i++){
            char u, v;
            cin >> u >> v;
            g.addEdge(u, v, 0);
        }

        g.printAdjList();
}