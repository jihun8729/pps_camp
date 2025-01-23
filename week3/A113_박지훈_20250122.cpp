#include <iostream>
#include <vector>

using namespace std;


vector<int> adj[1001];
int visited[1001];
int N, M;


void DFS(int vertex){
    int index;
    visited[vertex] = 1;
    
    for(int i = 0; i < adj[vertex].size(); i++){
        index = adj[vertex][i];
        if(visited[index] == 0){
            DFS(index);
        }
    }
}


int main(){
    int u, v;
    int result = 0;

    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= N; i++){
        if(visited[i] == 0){
            result++;
            DFS(i);
        }
    }
    cout << result;
}