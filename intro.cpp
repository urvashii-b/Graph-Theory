/* 
undirected edge b/w (u---v) means u points to v and v points to u
directed edge b/w (u->v) means u points to v : if i'm standing at 'u' i can go to 'v' but not back
can have bidirectional edges as well : equivalent to undirected edges 
a node cannot appear twice in a path
total degree = 2*e (an edge is associated with two nodes)

can be stored as an adjacency matrix OR list

BFS uses a queue data structure
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; // n = no. of nodes, m = no. of edges
    cin >> n >> m;
    // adjacency matrix
    int adj[n+1][m+1]; // O(n^2) space
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    // adjacency list
    vector<int> adjl[n+1]; // O(2*e) space
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }

    /*
    connected components: visited array is used
    for i:1->10
        if(!visited[i]){
            traversal(i)
        }
    */
}