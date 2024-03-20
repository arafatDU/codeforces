// Find maximum level of graph
#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ll long long

void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}



void dfs(vector<int> adj[], int start, int parent, vector<bool>& visited, vector<int>& height)
{
	cout << start << " ";
  height[start] = 1 + height[parent];
	visited[start] = true;

	for (int i = 0; i < adj[start].size(); i++) {

    int node = adj[start][i]; // all adjacency node of start
		if (!visited[node]) {
			dfs(adj, node, start, visited, height);
		}
	}
}



void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (auto x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}

int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int V, a, ans=INT_MIN;
    cin>>V;
    vector<int> adj[V];
    for(int i=0; i<V; i++){
      cin>>a;
      if(a != -1){
        addEdge(adj, i, a-1);
      }
    }

    vector<bool> visited(V, false);
    vector<int> height(V, 0);
    printGraph(adj, V);

    // Two graph problem, one src=0, two src=1
    dfs(adj, 1, 0, visited, height);
    cout<<endl;

    for(int i=0; i<V; i++){
      cout<<i<<" -->"<<height[i]<<endl;
      if(height[i] > ans) ans = height[i];
    }

    cout<<ans<<endl;

    return 0;
}