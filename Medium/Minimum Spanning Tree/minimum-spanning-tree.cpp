//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> key(V, INT_MAX);
    vector<bool> mst(V, false);
    vector<int> parent(V, -1);

    key[0] = 0;

    for (int i = 0; i < V; i++) {
        int mini = INT_MAX;
        int u;

        for (int j = 0; j < V; j++) {
            if (mst[j] == false && key[j] < mini) {
                u = j;
                mini = key[j];
            }
        }
        mst[u] = true;
        for (auto it : adj[u]) {
            int v = it[0];
            int w = it[1];
            if (mst[v] == false && w < key[v]) {
                key[v] = w;
                parent[v] = u;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < V; i++) {
        sum += key[i];
    }
    return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends